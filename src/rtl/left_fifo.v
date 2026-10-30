module left_fifo #(
    parameter DATA_W = 32,
    parameter ROW_W  = 8,
    parameter DEPTH  = 16
)(
    input clk,
    input rst_n,

    // 写入侧
    input               wr_en,
    input  [DATA_W-1:0] wr_data,
    input  [ROW_W-1:0]  wr_row,
    output              full,

    // 读取侧
    input               rd_ready,      // 来自 PE 的 left_ready
    output [DATA_W-1:0] rd_data,
    output [ROW_W-1:0]  rd_row,
    output              rd_vld,        // 给 PE 的 left_vld
    output              empty
);

    localparam ADDR_W = $clog2(DEPTH);

    reg [DATA_W-1:0] mem_data [0:DEPTH-1];
    reg [ROW_W-1:0]  mem_row  [0:DEPTH-1];
    reg [ADDR_W-1:0] wr_ptr, rd_ptr;
    reg [ADDR_W:0]   count;

    assign empty   = (count == 0);
    assign full    = (count == DEPTH);
    assign rd_data = mem_data[rd_ptr];
    assign rd_row  = mem_row[rd_ptr];
    assign rd_vld  = ~empty;              // 有数据就 valid

    wire do_wr = wr_en && ~full;
    wire do_rd = ~empty && rd_ready;      // 出队条件

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            count  <= 0;
        end else begin
            if (do_wr) begin
                mem_data[wr_ptr] <= wr_data;
                mem_row[wr_ptr]  <= wr_row;
                wr_ptr <= wr_ptr + 1;
            end
            if (do_rd) begin
                rd_ptr <= rd_ptr + 1;
            end
            case ({do_wr, do_rd})
                2'b10: count <= count + 1;
                2'b01: count <= count - 1;
                default: count <= count;
            endcase
        end
    end

endmodule
