`include "riscv_define.sv"
// branch always not taken
// For simplicity, judge branch condition in Mem Stage
module control_hazard(
    input logic [`BRANCHOP_BUS] branchop,
    input logic zero_i,
    input logic less_i,
    output logic branchtaken,
    output logic flush // if prediction is wrong, flush IF/ID, ID/EX, EX/MEM
);

assign flush = branchtaken;

// branchtaken pull up when prediction is wrong
always_comb begin
    if(branchop == 3'b000) begin
        branchtaken = 1'b0;
    end else if(branchop == 3'b001) begin
        branchtaken = 1'b1;
    end else if(branchop == 3'b010) begin
        branchtaken = 1'b1;
    end else if(branchop == 3'b100 & zero_i == 1'b1) begin
        branchtaken = 1'b1;
    end else if(branchop == 3'b101 & zero_i == 1'b0) begin
        branchtaken = 1'b1;
    end else if(branchop == 3'b110 & less_i == 1'b1) begin
        branchtaken = 1'b1;
    end else if(branchop == 3'b111 & less_i == 1'b0) begin
        branchtaken = 1'b1;
    end else begin
        branchtaken = 1'b0; // default case, not taken
    end
end

endmodule