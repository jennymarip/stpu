module cu #(
    parameter HEIGHT     = 4,
    parameter WIDTH      = 4,
    parameter DATA_W     = 32,
    parameter ROW_W      = 3,
    parameter ADDR_W     = 32,
    parameter TAG_W      = 16,
    parameter FIFO_DEPTH = 16
)(
    input clk,
    input rst_n,

    // ---------------- b_loader 控制 ----------------
    input               b_load_start,
    input  [ADDR_W-1:0] b_base,
    input  [TAG_W-1:0]  b_task_id,
    output              b_loaded,
    output              b_busy,
    output              b_err,

    // ---------------- b_loader 读 master ----------------
    output              rd_req_vld,
    output [1:0]        rd_src,
    output [ADDR_W-1:0] rd_addr,
    output [7:0]        rd_len,
    output [TAG_W-1:0]  rd_id,
    input               rd_req_ready,

    input               rd_rsp_vld,
    input  [DATA_W-1:0] rd_rsp_data [0:HEIGHT-1],
    input  [TAG_W-1:0]  rd_rsp_id,
    output              rd_rsp_ready,

    // ---------------- fifo_ssa 写 FIFO 端口 ----------------
    input  [DATA_W-1:0] fifo_wr_data [0:HEIGHT-1],
    input  [ROW_W-1:0]  fifo_wr_row  [0:HEIGHT-1],
    input               fifo_wr_en   [0:HEIGHT-1],
    output              fifo_full    [0:HEIGHT-1],
    output              fifo_empty   [0:HEIGHT-1],

    // ---------------- 顶部行号推进 ----------------
    input               up_vld [0:WIDTH-1],

    // ---------------- SSA 输出 ----------------
    output [DATA_W-1:0] down_psum [0:WIDTH-1],
    output              down_vld  [0:WIDTH-1],
    output [ROW_W-1:0]  down_row  [0:WIDTH-1],
    input               down_ready[0:WIDTH-1],

    output [DATA_W-1:0] right_data [0:HEIGHT-1],
    output              right_vld  [0:HEIGHT-1],
    output [ROW_W-1:0]  right_row  [0:HEIGHT-1],
    input               right_ready[0:HEIGHT-1],

    // ---------------- debug / hold_data ----------------
    output [DATA_W-1:0] hold_data [0:HEIGHT-1][0:WIDTH-1],
    output              left_ready [0:HEIGHT-1],
    output [DATA_W-1:0] psum_bus [0:HEIGHT][0:WIDTH-1],
    output              pvld_bus [0:HEIGHT][0:WIDTH-1],
    output [ROW_W-1:0]  prow_bus [0:HEIGHT][0:WIDTH-1]
);

    // b_loader → fifo_ssa 的预加载连线
    wire [DATA_W-1:0] preload_data [0:HEIGHT-1][0:WIDTH-1];
    wire              preload_vld  [0:HEIGHT-1][0:WIDTH-1];

    // ---------------- b_loader ----------------
    b_loader #(
        .HEIGHT (HEIGHT),
        .WIDTH  (WIDTH),
        .DATA_W (DATA_W),
        .ADDR_W (ADDR_W),
        .TAG_W  (TAG_W)
    ) u_b_loader (
        .clk          (clk),
        .rst_n        (rst_n),

        .b_load_start (b_load_start),
        .b_base       (b_base),
        .b_task_id   (b_task_id),
        .b_loaded     (b_loaded),
        .b_busy       (b_busy),
        .b_err        (b_err),

        .rd_req_vld   (rd_req_vld),
        .rd_src       (rd_src),
        .rd_addr      (rd_addr),
        .rd_len       (rd_len),
        .rd_id       (rd_id),
        .rd_req_ready (rd_req_ready),

        .rd_rsp_vld   (rd_rsp_vld),
        .rd_rsp_data  (rd_rsp_data),
        .rd_rsp_id   (rd_rsp_id),
        .rd_rsp_ready (rd_rsp_ready),

        .preload_data (preload_data),
        .preload_vld  (preload_vld)
    );

    // ---------------- fifo_ssa ----------------
    fifo_ssa #(
        .HEIGHT     (HEIGHT),
        .WIDTH      (WIDTH),
        .DATA_W     (DATA_W),
        .ROW_W      (ROW_W),
        .FIFO_DEPTH (FIFO_DEPTH)
    ) u_fifo_ssa (
        .clk          (clk),
        .rst_n        (rst_n),

        .up_vld       (up_vld),

        .fifo_wr_data (fifo_wr_data),
        .fifo_wr_row  (fifo_wr_row),
        .fifo_wr_en   (fifo_wr_en),
        .fifo_full    (fifo_full),
        .fifo_empty   (fifo_empty),

        .down_psum    (down_psum),
        .down_vld     (down_vld),
        .down_row     (down_row),
        .down_ready   (down_ready),

        .right_data   (right_data),
        .right_vld    (right_vld),
        .right_row    (right_row),
        .right_ready  (right_ready),

        .preload_data (preload_data),
        .preload_vld  (preload_vld),
        .hold_data    (hold_data),

        .left_ready   (left_ready),
        .psum_bus     (psum_bus),
        .pvld_bus     (pvld_bus),
        .prow_bus     (prow_bus)
    );

endmodule
