`include "riscv_define.sv"

module alu(
	input logic [`ALU_CTR_BUS]	alu_ctr_i,
	input logic [`REG_BUS]	alu_a_i,
	input logic [`REG_BUS]	alu_b_i,

	output logic zero_o,
	output logic less_o,
	output logic [`REG_BUS]	alu_p_o
);

	logic [`REG_BUS] result_xor;
	assign result_xor = alu_a_i ^ alu_b_i;

	logic [`REG_BUS] result_and;
	assign result_and = alu_a_i & alu_b_i;

	logic [`REG_BUS] result_or;
	assign result_or = alu_a_i | alu_b_i;
	
	logic [`REG_BUS] result_sl; // shift left
	logic [`REG_BUS] result_sr; // shift right


	logic [`REG_BUS] result_sub;
	assign result_sub = alu_a_i - alu_b_i;

	// simplified adder
	logic [`REG_BUS] result_add;
	assign result_add = alu_ctr_i[3] ? result_sub : alu_a_i + alu_b_i;

	// wire sub_add = alu_ctr_i[3]; 	// 1: sub, 0: add, flag bit
	// wire [`REG_BUS] add_a_i;
	// wire [`REG_BUS] add_b_i; 

	// wire result_add; 
	
	// assign add_a_i = alu_a_i;
	// assign add_b_i = alu_b_i ^ {32{sub_add}};

	// // adder ip with carry, zero, overflow
	// assign result_add = add_a_i + add_b_i + sub_add;
	// // TODO: generate less_o and zero_o with carry, zero, overflow 

	// slt / sltu
	// alu_ctr_i[3] == 1'b1 for sltu

	logic [`REG_BUS] result_set;


	assign result_set = (alu_ctr_i[3]) ? ((alu_a_i < alu_b_i) ? 32'h1 : 32'h0) : // sltu
		((alu_a_i[31] != alu_b_i[31]) ? (alu_a_i[31] ? 32'h1 : 32'h0) :
		(result_sub[31] ? 32'h1 : 32'h0)); // slt;

	assign less_o = alu_ctr_i[2:0] == 3'b010 ? result_set[0] : 1'b0;
	assign zero_o = (alu_p_o == 32'b0) ? 1'b1 : 1'b0;


	logic	[31:16]		shift_right_fill_r;
	logic	[`REG_BUS]	shift_right_1_r;
	logic	[`REG_BUS]	shift_right_2_r;
	logic	[`REG_BUS]	shift_right_4_r;
	logic	[`REG_BUS]	shift_right_8_r;

	logic	[`REG_BUS]	shift_left_1_r;
	logic	[`REG_BUS]	shift_left_2_r;
	logic	[`REG_BUS]	shift_left_4_r;
	logic	[`REG_BUS]	shift_left_8_r;

	// barrel shifter(may be not synthesizable, can be substitute with ? :)
	always_comb begin
		if (alu_b_i[0] == 1'b1)
			shift_left_1_r = {alu_a_i[30:0],1'b0};
		else
			shift_left_1_r = alu_a_i;

		if (alu_b_i[1] == 1'b1)
			shift_left_2_r = {shift_left_1_r[29:0],2'b00};
		else
			shift_left_2_r = shift_left_1_r;

		if (alu_b_i[2] == 1'b1)
			shift_left_4_r = {shift_left_2_r[27:0],4'b0000};
		else
			shift_left_4_r = shift_left_2_r;

		if (alu_b_i[3] == 1'b1)
			shift_left_8_r = {shift_left_4_r[23:0],8'b00000000};
		else
			shift_left_8_r = shift_left_4_r;

		if (alu_b_i[4] == 1'b1)
			result_sl = {shift_left_8_r[15:0],16'b0000000000000000};
		else
			result_sl = shift_left_8_r;
	end

	always_comb begin
		// Fill with 1's if MSB set
		if (alu_a_i[31] == 1'b1 && alu_ctr_i[3] == 1'b1)
			shift_right_fill_r = 16'b1111111111111111;
		else
			shift_right_fill_r = 16'b0000000000000000;

		if (alu_b_i[0] == 1'b1)
			shift_right_1_r = {shift_right_fill_r[31], alu_a_i[31:1]};
		else
			shift_right_1_r = alu_a_i;

		if (alu_b_i[1] == 1'b1)
			shift_right_2_r = {shift_right_fill_r[31:30], shift_right_1_r[31:2]};
		else
			shift_right_2_r = shift_right_1_r;

		if (alu_b_i[2] == 1'b1)
			shift_right_4_r = {shift_right_fill_r[31:28], shift_right_2_r[31:4]};
		else
			shift_right_4_r = shift_right_2_r;

		if (alu_b_i[3] == 1'b1)
			shift_right_8_r = {shift_right_fill_r[31:24], shift_right_4_r[31:8]};
		else
			shift_right_8_r = shift_right_4_r;

		if (alu_b_i[4] == 1'b1)
			result_sr = {shift_right_fill_r[31:16], shift_right_8_r[31:16]};
		else
			result_sr = shift_right_8_r;
	end

	assign alu_p_o = 
		(alu_ctr_i[2:0] == 3'b000) ? result_add :
		(alu_ctr_i[2:0] == 3'b001) ? result_sl :
		(alu_ctr_i[2:0] == 3'b010) ? result_set :
		(alu_ctr_i[2:0] == 3'b011) ? alu_b_i :
		(alu_ctr_i[2:0] == 3'b100) ? result_xor :
		(alu_ctr_i[2:0] == 3'b101) ? result_sr :
		(alu_ctr_i[2:0] == 3'b110) ? result_or :
		result_add;


endmodule