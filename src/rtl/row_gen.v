module row_gen #(
    parameter ROW_W = 8,
    parameter WIDTH = 4
)(
    input  clk,
    input  rst_n,
    input  ready [0:WIDTH-1],          // unpacked array
    input vld [0:WIDTH-1],        // unpacked array
    output reg [ROW_W-1:0] row [0:WIDTH-1]
);

    integer j;
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            for(j = 0; j < WIDTH; j = j + 1)begin
                row[j] <= 0;
            end
        end else begin
            for(j = 0; j < WIDTH; j = j + 1)begin
                if(vld[j] && ready[j])
                    row[j] <= row[j] + 1;
            end
        end
    end

endmodule
