module seg(
  input clk,
  input rst,
  input [2:0] num,
  output [7:0] o_seg0,
  output [7:0] o_seg1,
  output [7:0] o_seg2,
  output [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output [7:0] o_seg6,
  output [7:0] o_seg7
);

reg [7:0] segs [7:0];



always@(posedge clk)
begin
        case(num)
                0:segs[0] <= 8'b11111101;
                1:segs[0] <= 8'b01100000;
                2:segs[0] <= 8'b11011010;
                3:segs[0] <= 8'b11110010;
                4:segs[0] <= 8'b01100110;
                5:segs[0] <= 8'b10110110;
                6:segs[0] <= 8'b10111110;
                7:segs[0] <= 8'b11100000;
                default:segs[0] <= 8'b00000000;
        endcase
end

//parameter CLK_NUM = 5000000;
//
//reg [31:0] count;
//reg [2:0] offset;
//
//always @(posedge clk) begin
//  if(rst) begin count <= 0; offset <= 0; end
//  else begin
//    if(count == CLK_NUM) begin offset <= offset + 1; end
//    count <= (count == CLK_NUM) ? 0 : count + 1;
//  end
//end

//assign o_seg0 = ~segs[offset + 3'd0];
//assign o_seg1 = ~segs[offset + 3'd1];
//assign o_seg2 = ~segs[offset + 3'd2];
//assign o_seg3 = ~segs[offset + 3'd3];
//assign o_seg4 = ~segs[offset + 3'd4];
//assign o_seg5 = ~segs[offset + 3'd5];
//assign o_seg6 = ~segs[offset + 3'd6];
//assign o_seg7 = ~segs[offset + 3'd7];

assign o_seg0 = ~segs[3'd0];
assign o_seg1 = ~segs[3'd1];
assign o_seg2 = ~segs[3'd2];
assign o_seg3 = ~segs[3'd3];
assign o_seg4 = ~segs[3'd4];
assign o_seg5 = ~segs[3'd5];
assign o_seg6 = ~segs[3'd6];
assign o_seg7 = ~segs[3'd7];

endmodule
