`include "riscv_define.sv"

module riscv_control(
    input logic [`INST_BUS] inst_i,
    output logic [`EXTOP_BUS] extop,
    output logic regwr,
    output logic [`BRANCHOP_BUS] branchop,
    output logic memtoreg,
    output logic memwr,
    output logic [`MEMOP_BUS] memop,
    output logic alua_src,
    output logic [`ALUB_SRC_BUS] alub_src,
    output logic[`ALU_CTR_BUS] aluctr
);

always_comb begin
	if ((inst_i & `INST_ADD_MASK) == `INST_ADD) begin // add
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_SUB_MASK) == `INST_SUB) begin // sub
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b1000;

	end else if ((inst_i & `INST_XOR_MASK) == `INST_XOR) begin // xor
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0100;

	end else if ((inst_i & `INST_OR_MASK) == `INST_OR) begin // or
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0110;

	end else if ((inst_i & `INST_AND_MASK) == `INST_AND) begin // and
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0111;

	end else if ((inst_i & `INST_SLL_MASK) == `INST_SLL) begin // sll
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0001;

	end else if ((inst_i & `INST_SRL_MASK) == `INST_SRL) begin // srl
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0101;

	end else if ((inst_i & `INST_SRA_MASK) == `INST_SRA) begin // sra
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b1101;

	end else if ((inst_i & `INST_SLT_MASK) == `INST_SLT) begin // slt
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_SLTU_MASK) == `INST_SLTU) begin // sltu
        extop = `EXTOPNONE;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b1010;

	end else if ((inst_i & `INST_ADDI_MASK) == `INST_ADDI) begin // addi
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_XORI_MASK) == `INST_XORI) begin // xori
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0100;

	end else if ((inst_i & `INST_ORI_MASK) == `INST_ORI) begin // ori
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0110;

	end else if ((inst_i & `INST_ANDI_MASK) == `INST_ANDI) begin // andi
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0111;

	end else if ((inst_i & `INST_SLLI_MASK) == `INST_SLLI) begin // slli
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0001;

	end else if ((inst_i & `INST_SRLI_MASK) == `INST_SRLI) begin // srli
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0101;

	end else if ((inst_i & `INST_SRAI_MASK) == `INST_SRAI) begin // srai
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b1101;

	end else if ((inst_i & `INST_SLTI_MASK) == `INST_SLTI) begin // slti
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_SLTIU_MASK) == `INST_SLTIU) begin // sltiu
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b1010;

    end else if ((inst_i & `INST_LB_MASK) == `INST_LB) begin // lb
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b1;
        memwr = 1'b0;
        memop = 3'b000;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_LH_MASK) == `INST_LH) begin // lh
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b1;
        memwr = 1'b0;
        memop = 3'b001;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_LW_MASK) == `INST_LW) begin // lw
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b1;
        memwr = 1'b0;
        memop = 3'b010;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_LBU_MASK) == `INST_LBU) begin // lbu
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b1;
        memwr = 1'b0;
        memop = 3'b100;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_LHU_MASK) == `INST_LHU) begin // lhu
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b1;
        memwr = 1'b0;
        memop = 3'b101;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_SB_MASK) == `INST_SB) begin // sb
        extop = 3'b010;
        regwr = 1'b0;
        branchop = 3'b000;
        memtoreg = 1'b0; //'x
        memwr = 1'b1;
        memop = 3'b000;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_SH_MASK) == `INST_SH) begin // sh
        extop = 3'b010;
        regwr = 1'b0;
        branchop = 3'b000;
        memtoreg = 1'b0; //'x
        memwr = 1'b1;
        memop = 3'b001;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_SW_MASK) == `INST_SW) begin // sw
        extop = 3'b010;
        regwr = 1'b0;
        branchop = 3'b000;
        memtoreg = 1'b0; //'x
        memwr = 1'b1;
        memop = 3'b010;

        alua_src = 1'b0;
        alub_src = 2'b01;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_BEQ_MASK) == `INST_BEQ) begin // beq
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b100;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_BNE_MASK) == `INST_BNE) begin // bne
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b101;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_BLT_MASK) == `INST_BLT) begin // blt
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b110;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_BGE_MASK) == `INST_BGE) begin // bge
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b111;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0010;

	end else if ((inst_i & `INST_BLTU_MASK) == `INST_BLTU) begin // bltu
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b110;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b1010;

	end else if ((inst_i & `INST_BGEU_MASK) == `INST_BGEU) begin // bgeu
        extop = 3'b011;
        regwr = 1'b0;
        branchop = 3'b111;
        memtoreg = 1'b0; // 'x
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b1010;

	end else if ((inst_i & `INST_JAL_MASK) == `INST_JAL) begin // jal
        extop = 3'b100;
        regwr = 1'b1;
        branchop = 3'b001;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b1;
        alub_src = 2'b10;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_JALR_MASK) == `INST_JALR) begin // jalr
        extop = 3'b000;
        regwr = 1'b1;
        branchop = 3'b010;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b1;
        alub_src = 2'b10;
        aluctr = 4'b0000;

	end else if ((inst_i & `INST_LUI_MASK) == `INST_LUI) begin // lui
        extop = 3'b001;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0; //'x
        alub_src = 2'b01;
        aluctr = 4'b0011;

	end else if ((inst_i & `INST_AUIPC_MASK) == `INST_AUIPC) begin // auipc
        extop = 3'b001;
        regwr = 1'b1;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b1;
        alub_src = 2'b01;
        aluctr = 4'b0000;

        end else begin
        extop = `EXTOPNONE;
        regwr = 1'b0;
        branchop = 3'b000;
        memtoreg = 1'b0;
        memwr = 1'b0;
        memop = `MEMOPNONE;

        alua_src = 1'b0;
        alub_src = 2'b00;
        aluctr = 4'b0000;
        end
end

endmodule