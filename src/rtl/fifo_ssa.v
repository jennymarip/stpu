module fifo_ssa #(
    parameter HEIGHT     = 4,
    parameter WIDTH      = 4,
    parameter DATA_W     = 32,
    parameter ROW_W      = 3,
    parameter FIFO_DEPTH = 16
)(
    input clk,
    input rst_n,

    input up_vld[0:WIDTH-1],

    // ---------------- FIFO 写端口 ----------------
    input  [DATA_W-1:0] fifo_wr_data [0:HEIGHT-1],
    input  [ROW_W-1:0]  fifo_wr_row  [0:HEIGHT-1],
    input               fifo_wr_en   [0:HEIGHT-1],
    output              fifo_full    [0:HEIGHT-1],
    output              fifo_empty   [0:HEIGHT-1],

    // ---------------- SSA 输出 ----------------
    output [DATA_W-1:0] down_psum [0:WIDTH-1],
    output              down_vld  [0:WIDTH-1],
    output [ROW_W-1:0]  down_row  [0:WIDTH-1],
    input               down_ready[0:WIDTH-1],

    output [DATA_W-1:0] right_data [0:HEIGHT-1],
    output              right_vld  [0:HEIGHT-1],
    output [ROW_W-1:0]  right_row  [0:HEIGHT-1],
    input               right_ready[0:HEIGHT-1],

    // ---------------- 权重预加载 ----------------
    input  [DATA_W-1:0] preload_data [0:HEIGHT-1][0:WIDTH-1],
    input               preload_vld  [0:HEIGHT-1][0:WIDTH-1],
    output [DATA_W-1:0] hold_data    [0:HEIGHT-1][0:WIDTH-1],

    // ---------------- debug ----------------
    output              left_ready [0:HEIGHT-1],
    output [DATA_W-1:0] psum_bus [0:HEIGHT][0:WIDTH-1],
    output              pvld_bus [0:HEIGHT][0:WIDTH-1],
    output [ROW_W-1:0]  prow_bus [0:HEIGHT][0:WIDTH-1]
);

    // FIFO → SSA 连接
    wire [DATA_W-1:0] fifo_rd_data [0:HEIGHT-1];
    wire [ROW_W-1:0]  fifo_rd_row  [0:HEIGHT-1];
    wire              fifo_rd_vld  [0:HEIGHT-1];

    genvar i;

    // ---------------- 每行一个 FIFO ----------------
    generate
        for (i = 0; i < HEIGHT; i = i + 1) begin : gen_fifo
            left_fifo #(
                .DATA_W(DATA_W),
                .ROW_W (ROW_W),
                .DEPTH (FIFO_DEPTH)
            ) u_fifo (
                .clk      (clk),
                .rst_n    (rst_n),

                .wr_en    (fifo_wr_en[i]),
                .wr_data  (fifo_wr_data[i]),
                .wr_row   (fifo_wr_row[i]),
                .full     (fifo_full[i]),

                .rd_ready (left_ready[i]),   // 出队条件 = SSA 的 left_ready
                .rd_data  (fifo_rd_data[i]),
                .rd_row   (fifo_rd_row[i]),
                .rd_vld   (fifo_rd_vld[i]),
                .empty    (fifo_empty[i])
            );
        end
    endgenerate

    // ---------------- SSA ----------------
    ssa #(
        .HEIGHT(HEIGHT),
        .WIDTH (WIDTH),
        .DATA_W(DATA_W),
        .ROW_W (ROW_W)
    ) u_ssa (
        .clk       (clk),
        .rst_n     (rst_n),

        .up_vld    (up_vld),

        .down_psum (down_psum),
        .down_vld  (down_vld),
        .down_row  (down_row),
        .down_ready(down_ready),

        .left_data (fifo_rd_data),   // 来自 FIFO
        .left_vld  (fifo_rd_vld),    // 来自 FIFO
        .left_row  (fifo_rd_row),    // 来自 FIFO
        .left_ready(left_ready),     // 去往 FIFO

        .right_data (right_data),
        .right_vld  (right_vld),
        .right_row  (right_row),
        .right_ready(right_ready),

        .preload_data (preload_data),
        .preload_vld  (preload_vld),
        .hold_data    (hold_data),

        .psum_bus (psum_bus),
        .pvld_bus (pvld_bus),
        .prow_bus (prow_bus)
    );

endmodule
