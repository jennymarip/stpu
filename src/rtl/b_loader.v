module b_loader #(
    parameter HEIGHT = 4,       // 阵列行数 m
    parameter WIDTH  = 4,       // 阵列列数 n
    parameter DATA_W = 32,
    parameter ADDR_W = 32,
    parameter TAG_W  = 16
)(
    input  clk,
    input  rst_n,

    // ---------------- 任务控制 ----------------
    input               b_load_start,   // 启动脉冲
    input  [ADDR_W-1:0] b_base,         // B 分块首列地址
    input  [TAG_W-1:0]  b_task_id,     // 任务标识，用于返回比对
    output reg          b_loaded,       // 预加载完成，单拍脉冲
    output              b_busy,
    output reg          b_err,

    // ---------------- 读 master 请求 ----------------
    output reg              rd_req_vld,
    output [1:0]            rd_src,       // 01 = B
    output reg [ADDR_W-1:0] rd_addr,
    output [7:0]            rd_len,       // = n
    output reg [TAG_W-1:0]  rd_id,
    input                   rd_req_ready,

    // ---------------- 读返回（宽口，一拍一列 m 元素） ----------------
    input                       rd_rsp_vld,
    input  [DATA_W-1:0]         rd_rsp_data [0:HEIGHT-1],
    input  [TAG_W-1:0]          rd_rsp_id,
    output                      rd_rsp_ready,

    // ---------------- preload 到 fifo_ssa ----------------
    output reg [DATA_W-1:0] preload_data [0:HEIGHT-1][0:WIDTH-1],
    output reg              preload_vld  [0:HEIGHT-1][0:WIDTH-1]
);

    // ---------------- FSM 编码 ----------------
    localparam IDLE  = 2'd0;
    localparam ISSUE = 2'd1;
    localparam RUN   = 2'd2;
    localparam DONE = 2'd3;

    localparam CNT_W = (WIDTH <= 1) ? 1 : $clog2(WIDTH + 1);
    localparam IDX_W = (WIDTH <= 1) ? 1 : $clog2(WIDTH);

    reg [1:0] state, next_state;

    // ---------------- 单 buffer ----------------
    reg [DATA_W-1:0] col_buf [0:HEIGHT-1];
    reg              buf_vld;
    reg [IDX_W-1:0]  buf_col;    // buffer 中该列的列号

    // ---------------- 计数 ----------------
    reg [CNT_W-1:0]  j;          // 已接收列数
    reg [CNT_W-1:0]  written;    // 已写 preload 列数

    // ---------------- 控制信号 ----------------
    wire do_preload = (state == RUN) && buf_vld;

    assign rd_rsp_ready = ~buf_vld;      // buffer 满则反压上游
    assign rd_src       = 2'b01;         // B
    assign rd_len       = WIDTH;         // n 个地址
    assign b_busy       = (state != IDLE);

    wire rsp_id_match  = (rd_rsp_id == rd_id);

    integer i, k;

    // ---------------- preload 输出组合逻辑 ----------------
    always @(*) begin
        for (i = 0; i < HEIGHT; i = i + 1) begin
            for (k = 0; k < WIDTH; k = k + 1) begin
                preload_data[i][k] = {DATA_W{1'b0}};
                preload_vld[i][k]  = 1'b0;
            end
        end
        if (do_preload) begin
            for (i = 0; i < HEIGHT; i = i + 1) begin
                preload_data[i][buf_col] = col_buf[i];
                preload_vld[i][buf_col]  = 1'b1;
            end
        end
    end

    // ---------------- FSM 状态寄存器 ----------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) state <= IDLE;
        else        state <= next_state;
    end

    // ---------------- FSM 次态 ----------------
    always @(*) begin
        next_state = state;
        case (state)
            IDLE:  if (b_load_start) next_state = ISSUE;

            ISSUE: if (rd_req_vld && rd_req_ready) next_state = RUN;

            RUN:   if ((j == WIDTH) && (written == WIDTH) && !buf_vld)
                       next_state = DONE;

            DONE: next_state = IDLE;

            default: next_state = IDLE;
        endcase
    end

    // ---------------- 数据通路 ----------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_req_vld <= 1'b0;
            rd_addr    <= {ADDR_W{1'b0}};
            rd_id     <= {TAG_W{1'b0}};
            b_loaded   <= 1'b0;
            b_err      <= 1'b0;
            j          <= {CNT_W{1'b0}};
            written    <= {CNT_W{1'b0}};
            buf_vld    <= 1'b0;
            buf_col    <= {IDX_W{1'b0}};
            for (i = 0; i < HEIGHT; i = i + 1)
                col_buf[i] <= {DATA_W{1'b0}};
        end else begin
            b_loaded <= 1'b0;   // 默认单拍脉冲

            case (state)
                // ------------------------------------------------
                IDLE: begin
                    if (b_load_start) begin
                        rd_req_vld <= 1'b1;
                        rd_addr    <= b_base;
                        rd_id     <= b_task_id;
                        j          <= {CNT_W{1'b0}};
                        written    <= {CNT_W{1'b0}};
                        buf_vld    <= 1'b0;
                        b_err      <= 1'b0;
                    end
                end

                // ------------------------------------------------
                ISSUE: begin
                    if (rd_req_vld && rd_req_ready)
                        rd_req_vld <= 1'b0;
                end

                // ------------------------------------------------
                RUN: begin
                    // 接收一整列
                    if (rd_rsp_vld && rd_rsp_ready) begin
                        if (rsp_id_match && (j < WIDTH)) begin
                            for (i = 0; i < HEIGHT; i = i + 1)
                                col_buf[i] <= rd_rsp_data[i];
                            buf_col <= j[IDX_W-1:0];
                            buf_vld <= 1'b1;
                            j       <= j + 1'b1;
                        end else begin
                            b_err <= 1'b1;
                        end
                    end

                    // 写一整列 preload
                    // 注意：接收条件要求 buf_vld=0，写条件要求 buf_vld=1，
                    //       二者同一拍互斥，不会同时更新 buf_vld。
                    if (do_preload) begin
                        buf_vld <= 1'b0;
                        written <= written + 1'b1;
                    end
                end

                // ------------------------------------------------
                DONE: begin
                    b_loaded <= 1'b1;   // hold_data 已稳定
                end

                default: ;
            endcase
        end
    end

endmodule
