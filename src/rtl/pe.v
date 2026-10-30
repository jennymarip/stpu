module pe #(
  parameter DATA_W = 32,
  parameter ROW_W = 8
)(
    input clk,
    input rst_n,
    // psum input
    input [DATA_W-1:0] up_psum,
    input up_vld,
    input [ROW_W-1:0] up_row,
    output up_ready,
    // left data input
    input [DATA_W-1:0] left_data,
    input left_vld,
    input [ROW_W-1:0] left_row,
    output left_ready,
    // psum output 
    output [DATA_W-1:0] down_psum,
    output down_vld,
    output [ROW_W-1:0] down_row,
    input down_ready,
    // left output
    output [DATA_W-1:0] right_data,
    output right_vld,
    output [ROW_W-1:0] right_row,
    input right_ready,
    // data load
    input [DATA_W-1:0] preload_data,
    input preload_vld,
    output reg [DATA_W-1:0] hold_data
);
    wire pe_vld;
    wire mac_fire;
    reg [DATA_W-1:0] up_buf,left_buf,down_buf,right_buf,res_buf;
    reg [ROW_W-1:0] up_buf_row,left_buf_row,down_buf_row,right_buf_row,res_buf_row;
    reg up_buf_vld,left_buf_vld,down_buf_vld,right_buf_vld,res_buf_vld;
    reg [ROW_W-1:0] row_flag;

    assign down_psum = pe_vld?down_buf:up_psum;
    assign down_vld = pe_vld?down_buf_to_down_vld:up_vld;
    assign down_row = pe_vld?down_buf_row:up_row;
    assign right_data = pe_vld?right_buf:left_data;
    assign right_vld = pe_vld?right_buf_to_right_vld:left_vld;
    assign right_row = pe_vld?right_buf_row:left_row;
    assign mac_fire = pe_vld && up_buf_vld && left_buf_vld
              && (up_buf_row==row_flag) && (left_buf_row==row_flag)
              && res_buf_allowin
              && right_buf_allowin;

    // data preload
    assign pe_vld=(hold_data!=0);
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)hold_data<=0;
        else if(preload_vld)hold_data<=preload_data;
    end

    // up psum
    wire up_buf_allowin;
    wire up_buf_readygo;
    wire up_buf_to_res_buf_valid;
    assign up_buf_readygo = mac_fire;
    assign up_buf_allowin = !up_buf_vld || mac_fire;
    assign up_buf_to_res_buf_valid = up_buf_vld && up_buf_readygo;
    assign up_ready = pe_vld?up_buf_allowin:down_ready;
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
          up_buf<=0;
          up_buf_vld<=0;
          up_buf_row<=0;
        end else if(up_buf_allowin)begin
          up_buf_vld<=up_vld;
        end 
        if(pe_vld && up_vld && up_buf_allowin)begin
            up_buf<=up_psum;
            up_buf_row<=up_row;
        end
    end
    // MAC res_buf应该是如果down_buf无法接受部分和才暂存部分和，如果down_buf能够接收部分和，则应该将部分和直接传入down_buf
    // todo:res_buf和down_buf的更新需要重新设计,需要握手与反压
    wire res_buf_allowin;
    wire res_buf_ready_go;
    wire res_buf_to_down_buf_valid;
    assign res_buf_ready_go = 1'b1;
    assign res_buf_allowin = !res_buf_vld || res_buf_ready_go && down_buf_allowin;
    assign res_buf_to_down_buf_valid = res_buf_vld && res_buf_ready_go;
    always@(posedge clk or negedge rst_n)begin
      if(!rst_n)begin
        row_flag<=0;
        res_buf<=0;
        res_buf_vld<=0;
        res_buf_row<=0;
      end else if(res_buf_allowin)begin
        res_buf_vld<=up_buf_to_res_buf_valid;
      end
      if(up_buf_to_res_buf_valid && res_buf_allowin)begin
        res_buf<=hold_data*left_buf+up_buf;
        res_buf_row<=up_buf_row;
        row_flag<=row_flag+1;
      end
    end
    // down psum
    wire down_buf_allowin;
    wire down_buf_ready_go;
    wire down_buf_to_down_vld;
    assign down_buf_ready_go = 1'b1;
    assign down_buf_allowin = !down_buf_vld || down_buf_ready_go && down_ready;
    assign down_buf_to_down_vld = down_buf_vld && down_buf_ready_go;
    always@(posedge clk or negedge rst_n)begin
      if(!rst_n)begin
        down_buf<=0;
        down_buf_row<=0;
        down_buf_vld<=0;
      end else if(down_buf_allowin)begin
        down_buf_vld<=res_buf_to_down_buf_valid;
      end
      if(res_buf_to_down_buf_valid && down_buf_allowin) begin
        down_buf<=res_buf;
        down_buf_row<=res_buf_row;
      end
    end
    // left data
    wire left_buf_allowin;
    wire left_buf_ready_go;
    wire left_buf_to_right_valid;
    assign left_buf_ready_go = mac_fire;
    assign left_buf_allowin = !left_buf_vld || mac_fire;
    assign left_buf_to_right_valid = left_buf_vld && left_buf_ready_go;
    assign left_ready = pe_vld?left_buf_allowin:right_ready;
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
          left_buf<=0;
          left_buf_vld<=0;
          left_buf_row<=0;
        end else if(left_buf_allowin)begin
          left_buf_vld<=left_vld;
        end
        if(pe_vld && left_buf_allowin && left_vld)begin
            left_buf<=left_data;
            left_buf_row<=left_row;
        end
    end
    // right data
    wire right_buf_allowin;
    wire right_buf_ready_go;
    wire right_buf_to_right_vld;
    assign right_buf_ready_go = 1'b1;
    assign right_buf_allowin = !right_buf_vld || right_buf_ready_go && right_ready;
    assign right_buf_to_right_vld = right_buf_vld && right_buf_ready_go;
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
          right_buf<=0;
          right_buf_vld<=0;
          right_buf_row<=0;
        end else if(right_buf_allowin)begin
          right_buf_vld<=left_buf_to_right_valid;
        end
        if(pe_vld && right_buf_allowin && left_buf_to_right_valid)begin
            right_buf<=left_buf;
            right_buf_row<=left_buf_row;
        end
    end
endmodule
