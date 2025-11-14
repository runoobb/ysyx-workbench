`include "riscv_define.sv"

// load-on-use hazard(RAW)
module data_hazard(
    input logic id_ex_memtoreg,
    input logic [`REGADDR_BUS] id_ex_rd_idx,
    input logic [`REGADDR_BUS] if_id_rs1_idx,
    input logic [`REGADDR_BUS] if_id_rs2_idx,
    output stall       // output stall to IF, IF/ID, ID/EX
);
    
    assign stall = id_ex_memtoreg & (id_ex_rd_idx == if_id_rs1_idx || id_ex_rd_idx == if_id_rs2_idx) & id_ex_rd_idx != 5'b00000;  // write x0 do not forward

endmodule