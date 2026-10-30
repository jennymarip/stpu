module ssa#(
    parameter HEIGHT=4,
    parameter WIDTH=4,
    parameter DATA_W=32,
    parameter ROW_W=8
)(
    input clk,
    input rst_n,

    input  up_vld[0:WIDTH-1],

    output [DATA_W-1:0] down_psum [0:WIDTH-1],
    output              down_vld  [0:WIDTH-1],
    output [ROW_W-1:0]  down_row  [0:WIDTH-1],
    input               down_ready[0:WIDTH-1],

    input  [DATA_W-1:0] left_data [0:HEIGHT-1],
    input               left_vld  [0:HEIGHT-1],
    input  [ROW_W-1:0]  left_row  [0:HEIGHT-1],
    output              left_ready[0:HEIGHT-1],

    output [DATA_W-1:0] right_data [0:HEIGHT-1],
    output              right_vld  [0:HEIGHT-1],
    output [ROW_W-1:0]  right_row  [0:HEIGHT-1],
    input               right_ready[0:HEIGHT-1],

    input  [DATA_W-1:0] preload_data [0:HEIGHT-1][0:WIDTH-1],
    input               preload_vld  [0:HEIGHT-1][0:WIDTH-1],
    output [DATA_W-1:0] hold_data    [0:HEIGHT-1][0:WIDTH-1],
    // debug
    output [DATA_W-1:0] psum_bus [0:HEIGHT][0:WIDTH-1],
    output              pvld_bus [0:HEIGHT][0:WIDTH-1],
    output [ROW_W-1:0]  prow_bus [0:HEIGHT][0:WIDTH-1]
);
    wire  [DATA_W-1:0] up_psum [0:WIDTH-1];
    wire  [ROW_W-1:0]  up_row  [0:WIDTH-1];
    wire               up_ready[0:WIDTH-1];
    // 顶部：用行号生成器替代外部 up_psum/up_vld/up_row
    row_gen #(.ROW_W(ROW_W), .WIDTH(WIDTH)) u_rowgen (
        .clk   (clk),
        .rst_n (rst_n),
        .vld   (up_vld),
        .ready (up_ready),          // 来自 SSA 的 up_ready
        .row   (up_row)
    );
    // up_psum 恒为 0
    assign up_psum = '{default: '0};

    // 纵向部分和总线
    // wire [DATA_W-1:0] psum_bus [0:HEIGHT][0:WIDTH-1];
    // wire              pvld_bus [0:HEIGHT][0:WIDTH-1];
    // wire [ROW_W-1:0]  prow_bus [0:HEIGHT][0:WIDTH-1];
    wire              rdy_bus  [0:HEIGHT][0:WIDTH-1];
    // 横向部分和总线
    wire [DATA_W-1:0] data_bus [0:HEIGHT-1][0:WIDTH];
    wire              lvld_bus [0:HEIGHT-1][0:WIDTH];
    wire [ROW_W-1:0]  lrow_bus [0:HEIGHT-1][0:WIDTH];
    wire              rrdy_bus [0:HEIGHT-1][0:WIDTH];

    genvar i,j;
    // top
    generate
        for (j = 0; j < WIDTH; j = j + 1) begin : gen_top
            assign psum_bus[0][j] = up_psum[j];
            assign pvld_bus[0][j] = up_vld[j];
            assign prow_bus[0][j] = up_row[j];
            assign up_ready[j]    = rdy_bus[0][j];
        end
    endgenerate
    // down
    generate
        for (j = 0; j < WIDTH; j = j + 1) begin : gen_bot
            assign down_psum[j]       = psum_bus[HEIGHT][j];
            assign down_vld[j]        = pvld_bus[HEIGHT][j];
            assign down_row[j]        = prow_bus[HEIGHT][j];
            assign rdy_bus[HEIGHT][j] = down_ready[j];
        end
    endgenerate
    // left
    generate
        for (i = 0; i < HEIGHT; i = i + 1) begin : gen_left
            assign data_bus[i][0] = left_data[i];
            assign lvld_bus[i][0] = left_vld[i];
            assign lrow_bus[i][0] = left_row[i];
            assign left_ready[i]  = rrdy_bus[i][0];
        end
    endgenerate
    // right
    generate
        for(i=0;i<HEIGHT;i=i+1)begin:gen_right
            assign right_data[i] = data_bus[i][WIDTH];
            assign right_vld[i] = lvld_bus[i][WIDTH];
            assign right_row[i] = lrow_bus[i][WIDTH];
            assign rrdy_bus[i][WIDTH] = right_ready[i];
        end
    endgenerate

    // pe array
    generate
        for(i=0;i<HEIGHT;i=i+1)begin
            for(j=0;j<WIDTH;j=j+1)begin
                pe #(
                    .DATA_W(DATA_W),
                    .ROW_W (ROW_W)
                ) u_pe(
                    .clk(clk),
                    .rst_n(rst_n),

                    .up_psum      (psum_bus[i][j]),
                    .up_vld       (pvld_bus[i][j]),
                    .up_row       (prow_bus[i][j]),
                    .up_ready     (rdy_bus[i][j]),

                    .down_psum    (psum_bus[i+1][j]),
                    .down_vld     (pvld_bus[i+1][j]),
                    .down_row     (prow_bus[i+1][j]),
                    .down_ready   (rdy_bus[i+1][j]),

                    .left_data    (data_bus[i][j]),
                    .left_vld     (lvld_bus[i][j]),
                    .left_row     (lrow_bus[i][j]),
                    .left_ready   (rrdy_bus[i][j]),

                    .right_data   (data_bus[i][j+1]),
                    .right_vld    (lvld_bus[i][j+1]),
                    .right_row    (lrow_bus[i][j+1]),
                    .right_ready  (rrdy_bus[i][j+1]),

                    .preload_data (preload_data[i][j]),
                    .preload_vld  (preload_vld[i][j]),
                    .hold_data    (hold_data[i][j])
                );
            end
        end
    endgenerate
endmodule
