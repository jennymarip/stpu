module vpu #(
    parameter HEIGHT = 4,
    parameter DATA_W = 32,
    parameter ROW_W  = 8
)(
    input clk,
    input rst_n,

    // 顶部部分和输入（接到 PE[0]）
    input  [DATA_W-1:0] up_psum,
    input               up_vld,
    input  [ROW_W-1:0]  up_row,
    output              up_ready,

    // 底部部分和输出（来自 PE[HEIGHT-1]）
    output [DATA_W-1:0] down_psum,
    output              down_vld,
    output [ROW_W-1:0]  down_row,
    input               down_ready,

    // 左侧数据输入（每个 PE 一组）
    input  [DATA_W-1:0] left_data  [0:HEIGHT-1],
    input               left_vld   [0:HEIGHT-1],
    input  [ROW_W-1:0]  left_row   [0:HEIGHT-1],
    output              left_ready [0:HEIGHT-1],

    // 右侧数据输出（每个 PE 一组）
    output [DATA_W-1:0] right_data [0:HEIGHT-1],
    output              right_vld  [0:HEIGHT-1],
    output [ROW_W-1:0]  right_row  [0:HEIGHT-1],
    input               right_ready[0:HEIGHT-1],

    // 权重预加载（每个 PE 一组）
    input  [DATA_W-1:0] preload_data [0:HEIGHT-1],
    input               preload_vld  [0:HEIGHT-1],
    output [DATA_W-1:0] hold_data [0:HEIGHT-1]
);
    // 纵向部分和总线：psum_bus[0] 来自顶部，psum_bus[HEIGHT] 去往底部
    wire [DATA_W-1:0] psum_bus [0:HEIGHT];
    wire              pvld_bus [0:HEIGHT];
    wire [ROW_W-1:0]  prow_bus [0:HEIGHT];

    // 纵向 ready 链：rdy_bus[i] = PE[i].up_ready
    wire              rdy_bus  [0:HEIGHT];

    // 顶部输入接到 PE[0]
    assign psum_bus[0] = up_psum;
    assign pvld_bus[0] = up_vld;
    assign prow_bus[0] = up_row;
    assign up_ready    = rdy_bus[0];

    // 底部输出来自 PE[HEIGHT-1]
    assign down_psum = psum_bus[HEIGHT];
    assign down_vld  = pvld_bus[HEIGHT];
    assign down_row  = prow_bus[HEIGHT];
    assign rdy_bus[HEIGHT] = down_ready;

    genvar i;
    generate
        for (i = 0; i < HEIGHT; i = i + 1) begin : gen_pe
            pe #(
                .DATA_W(DATA_W),
                .ROW_W(ROW_W)
            )u_pe (
                .clk          (clk),
                .rst_n        (rst_n),

                .up_psum      (psum_bus[i]),
                .up_vld       (pvld_bus[i]),
                .up_row       (prow_bus[i]),
                .up_ready     (rdy_bus[i]),

                .down_psum    (psum_bus[i+1]),
                .down_vld     (pvld_bus[i+1]),
                .down_row     (prow_bus[i+1]),
                .down_ready   (rdy_bus[i+1]),

                .left_data    (left_data[i]),
                .left_vld     (left_vld[i]),
                .left_row     (left_row[i]),
                .left_ready   (left_ready[i]),

                .right_data   (right_data[i]),
                .right_vld    (right_vld[i]),
                .right_row    (right_row[i]),
                .right_ready  (right_ready[i]),

                .preload_data (preload_data[i]),
                .preload_vld  (preload_vld[i]),
                .hold_data    (hold_data[i])
            );
        end
    endgenerate

endmodule
