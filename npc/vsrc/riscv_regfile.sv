`include "riscv_define.sv"
module riscv_regfile(
	input	logic			clk,
	input	logic			rst,
	input	logic	[`REGADDR_BUS]	rs1_idx_i,
	input	logic	[`REGADDR_BUS]	rs2_idx_i,
	input	logic	[`REGADDR_BUS]	rd_idx_i,
	input	logic			rd_we_i,
	input	logic	[`REG_BUS]	rd_val_i,
	output	logic	[`REG_BUS]	rs1_val_o,
	output	logic	[`REG_BUS]	rs2_val_o,
    output  logic   [`REG_BUS]   regfile_o   [31:0]
);
    logic [`REG_BUS] regfile [31:0]; // Register array

    // write registers
    generate 
        genvar i;
        for(i = 0; i < 32; i = i+1) begin
            if(i == 0) begin
                always_ff @(posedge clk or posedge rst) begin
                    if (rst) begin
                        regfile[i] <= 0; // x0 is always 0
                    end else if (rd_we_i && (rd_idx_i == i)) begin
                        regfile[i] <= 0;
                    end
                end

                assign regfile_o[i] = regfile[i];

            end else begin
                always_ff @(posedge clk or posedge rst) begin
                    if (rst) begin
                        regfile[i] <= 0; // Reset all registers to 0
                    end else if (rd_we_i && (rd_idx_i == i)) begin
                        regfile[i] <= rd_val_i; // Write value to register
                    end
                end

                assign regfile_o[i] = regfile[i];

            end 
        end
    endgenerate

    // read registers
    assign rs1_val_o = regfile[rs1_idx_i];
    assign rs2_val_o = regfile[rs2_idx_i];
    
endmodule