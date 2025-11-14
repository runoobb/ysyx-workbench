`include "riscv_define.sv"
module data_mem(
	input logic clk,
    input logic rst,
	input logic ce,
	input logic we,
	input logic [31:0] addr,
	input logic [31:0] data_i,
	output logic [31:0] data_o
	
);

	// logic [7:0]  data[0:32'h400];

	// always_ff @ (posedge clk or posedge rst) begin
    //     if(rst) begin
    //         data <= 0;
    //     end else if (ce == 1'b0) begin
    //         // pass 
    //         end else if(we == 1'b1) begin
    //             data[addr]   <= data_i[7:0];
    //             data[addr+1] <= data_i[15:8];
    //             data[addr+2] <= data_i[23:16];
    //             data[addr+3] <= data_i[31:24];
    //         end
	// end
	
	// always_comb begin
	// 	if (ce == 1'b0) begin
	// 		data_o = 32'b0;
	//   	end else if(we == 1'b0) begin
	// 	    data_o = {					
	// 				   		data[addr+3],
	// 	               		data[addr+2],
	// 	               		data[addr+1],
	// 	               		data[addr] 
	// 				  };
	// 	end else begin
	// 		data_o = 32'b0;
	// 	end
	// end		

endmodule