`include "riscv_define.sv"
module lsu(
    input logic clk,
    input logic rst,
    input logic memtoreg_i,
    input logic regwr_i,
    input logic [`REG_BUS] alup_val_i,
    input logic [`REG_BUS] memrd_val_i,
    input logic [`REGADDR_BUS] rd_idx_i,
    
    input logic stall,
    input logic flush,

    output logic memtoreg_o,
    output logic regwr_o,
    output logic [`REG_BUS] alup_val_o,
    output logic [`REG_BUS] memrd_val_o,
    output logic [`REGADDR_BUS] rd_idx_o,

	input logic upstream_valid_i,
    output logic upstream_ready_o,

    input logic downstream_ready_i,
    output logic downstream_valid_o 

);

logic downstream_handshake;
assign downstream_handshake = downstream_ready_i & downstream_valid_o;
assign upstream_ready_o = downstream_handshake;
always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        downstream_valid_o <= 1'b1;
	end else if(stall) begin
		downstream_valid_o <= 1'b0;
	end else if(flush) begin
        downstream_valid_o <= 1'b1;
    end else if(upstream_ready_o) begin
        downstream_valid_o <= upstream_valid_i;
    end
end

mem_wb u0_mem_wb(
	.clk(clk),
	.rst(rst),
	.memtoreg_in(memtoreg_i),
	.regwr_in(regwr_i),
	.alup_val_in(alup_val_i),
	.memrd_val_in(memrd_val_i),
	.rd_idx_in(rd_idx_i),
	.stall(stall | ~upstream_valid_i),
	.flush(flush),
	.memtoreg_out(memtoreg_o),
	.regwr_out(regwr_o),
	.alup_val_out(alup_val_o),
	.memrd_val_out(memrd_val_o),
	.rd_idx_out(rd_idx_o)	
);

endmodule