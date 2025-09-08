// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vriscv_core__Syms.h"


VL_ATTR_COLD void Vriscv_core___024root__trace_init_sub__TOP__0(Vriscv_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+183,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+184,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+185,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+187,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+188,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("riscv_core ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+183,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+184,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+185,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+187,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+188,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,"rs1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,"rs2_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,"data_hazard_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"data_hazard_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"control_hazard_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+10,"inst_if_id_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,"pc_if_id_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"rd_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,"reg_wr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+147,"branch_op_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+148,"mem_to_reg_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"mem_wr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+150,"mem_op_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,"alu_ctr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,"rs1_val_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,"rs2_val_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,"rs1_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,"rs2_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+151,"rd_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,"pc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"imm_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"opcode_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,"alu_asrc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+5,"alu_bsrc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,"rs1_val_id_ex_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,"rs2_val_id_ex_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,"reg_wr_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+152,"branch_op_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,"mem_to_reg_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"mem_wr_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"rd_idx_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,"mem_op_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,"rs1_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"rs2_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"pc_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"alu_p_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,"zero_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"less_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+24,"imm_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,"forwarda",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,"forwardb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,"forward_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"forward_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,"mem_to_reg_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"reg_wr_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+26,"alu_p_val_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"mem_rd_val_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"rd_idx_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,"inst_rs1_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,"inst_rs2_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,"inst_rd_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,"rs1_val_alu_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,"rs2_val_alu_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,"alu_a_val_ex_mem_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,"alu_b_val_ex_mem_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+41+i*1,"w_regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("u0_control_hazard ");
    tracep->declBus(c+152,"branchop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"branchtaken",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_data_hazard ");
    tracep->declBit(c+148,"id_ex_memtoreg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+151,"id_ex_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+29,"if_id_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"if_id_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+143,"stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_exu ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+155,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+146,"regwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"branchop_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+148,"memtoreg_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"memwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"memop_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+153,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"rs2_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+14,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+204,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"branchop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+15,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"memwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"memop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+18,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"alup_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+24,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"zero_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+197,"less_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+158,"alu_p_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("u0_alu ");
    tracep->declBus(c+12,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+155,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+157,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"alu_p_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"result_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,"result_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,"result_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,"result_sl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,"result_sr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,"result_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,"result_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,"result_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,"shift_right_fill_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,16);
    tracep->declBus(c+168,"shift_right_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,"shift_right_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"shift_right_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,"shift_right_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,"shift_left_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,"shift_left_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,"shift_left_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,"shift_left_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_ex_mem ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"branchop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+148,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"memwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"memop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+153,"rs1_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"rs2_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"pc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"alup_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+157,"zero_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"less_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+204,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"branchop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+15,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"memwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"memop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+18,"rs1_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rs2_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"alup_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+22,"zero_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"less_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_forward ");
    tracep->declBit(c+6,"ex_mem_regwr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"mem_wb_regwr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"mem_wb_memtoreg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"ex_mem_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+28,"mem_wb_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+32,"if_id_opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+29,"if_id_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"if_id_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+4,"id_ex_opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1,"id_ex_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"id_ex_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+21,"forward_ex_mem_alu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"forward_mem_wb_alu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"forward_mem_wb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+187,"forward_ex_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"forward_mem_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"forwarda",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+196,"forwardb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+176,"forwarda_C1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"forwarda_C2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"forwarda_C3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"forwardb_cond1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"forwardb_cond2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"forwardb_cond3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_idu ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+146,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"branchop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+148,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"memwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"memop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"alua_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"alub_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+12,"aluctr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+193,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"rs2_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"rs1_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"rs2_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+191,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+13,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"opcode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+177,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"extop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+200,"imm_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,"regwr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+201,"branchop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,"memtoreg_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"memwr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"memop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+141,"alua_src_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+142,"alub_src_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,"aluctr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("u0_id_ex ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+201,"branchop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+138,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"memwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"memop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+202,"aluctr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+141,"aluasrc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+142,"alubsrc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+29,"rs1_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"rs2_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+193,"rs1_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"rs2_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+145,"pc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"opcode_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+205,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"branchop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+148,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"memwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"memop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"aluctr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+3,"aluasrc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"alubsrc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1,"rs1_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"rs2_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+191,"rs1_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"rs2_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+13,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_control ");
    tracep->declBus(c+10,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"extop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+178,"regwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+201,"branchop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+138,"memtoreg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"memwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"memop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+141,"alua_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+142,"alub_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+202,"aluctr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_immgen ");
    tracep->declBus(c+10,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"extop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+200,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"i_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"s_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"b_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"j_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,"u_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_ifu ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"branch_taken",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"pc_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("u0_if_id ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_npc ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"branch_taken",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+203,"npc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_lsu ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"memtoreg_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"regwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"alup_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"memrd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+206,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"alup_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"memrd_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->pushNamePrefix("u0_mem_wb ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"alup_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"memrd_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+206,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"alup_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"memrd_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_riscv_regfile ");
    tracep->declBit(c+179,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"rs1_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"rs2_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+28,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+25,"rd_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"rd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+189,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+190,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+73+i*1,"regfile_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+105+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vriscv_core___024root__trace_init_top(Vriscv_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_init_top\n"); );
    // Body
    Vriscv_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_core___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vriscv_core___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vriscv_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vriscv_core___024root__trace_register(Vriscv_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_core___024root__trace_full_sub_0(Vriscv_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vriscv_core___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_full_top_0\n"); );
    // Init
    Vriscv_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_core___024root*>(voidSelf);
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_core___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_core___024root__trace_full_sub_0(Vriscv_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o),5);
    bufp->fullCData(oldp+2,(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o),5);
    bufp->fullBit(oldp+3,(vlSelf->riscv_core__DOT__alu_asrc_id_ex_o));
    bufp->fullCData(oldp+4,(vlSelf->riscv_core__DOT__opcode_id_ex_o),5);
    bufp->fullCData(oldp+5,(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o),2);
    bufp->fullBit(oldp+6,(vlSelf->riscv_core__DOT__reg_wr_ex_mem_o));
    bufp->fullCData(oldp+7,(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o),5);
    bufp->fullBit(oldp+8,(vlSelf->riscv_core__DOT__mem_to_reg_mem_wb_o));
    bufp->fullIData(oldp+9,(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_w),32);
    bufp->fullIData(oldp+10,(vlSelf->riscv_core__DOT__inst_if_id_o),32);
    bufp->fullIData(oldp+11,(vlSelf->riscv_core__DOT__rd_val),32);
    bufp->fullCData(oldp+12,(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o),4);
    bufp->fullIData(oldp+13,(vlSelf->riscv_core__DOT__pc_id_ex_o),32);
    bufp->fullIData(oldp+14,(vlSelf->riscv_core__DOT__imm_id_ex_o),32);
    bufp->fullBit(oldp+15,(vlSelf->riscv_core__DOT__mem_to_reg_ex_mem_o));
    bufp->fullBit(oldp+16,(vlSelf->riscv_core__DOT__mem_wr_ex_mem_o));
    bufp->fullCData(oldp+17,(vlSelf->riscv_core__DOT__mem_op_ex_mem_o),3);
    bufp->fullIData(oldp+18,(vlSelf->riscv_core__DOT__rs1_val_ex_mem_o),32);
    bufp->fullIData(oldp+19,(vlSelf->riscv_core__DOT__rs2_val_ex_mem_o),32);
    bufp->fullIData(oldp+20,(vlSelf->riscv_core__DOT__pc_ex_mem_o),32);
    bufp->fullIData(oldp+21,(vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o),32);
    bufp->fullBit(oldp+22,(vlSelf->riscv_core__DOT__zero_ex_mem_o));
    bufp->fullBit(oldp+23,(vlSelf->riscv_core__DOT__less_ex_mem_o));
    bufp->fullIData(oldp+24,(vlSelf->riscv_core__DOT__imm_ex_mem_o),32);
    bufp->fullBit(oldp+25,(vlSelf->riscv_core__DOT__reg_wr_mem_wb_o));
    bufp->fullIData(oldp+26,(vlSelf->riscv_core__DOT__alu_p_val_mem_wb_o),32);
    bufp->fullIData(oldp+27,(vlSelf->riscv_core__DOT__mem_rd_val_mem_wb_o),32);
    bufp->fullCData(oldp+28,(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o),5);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                       >> 7U))),5);
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                       >> 2U))),5);
    bufp->fullBit(oldp+33,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                            & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0xfU)) 
                               == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))));
    bufp->fullBit(oldp+34,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                            & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0x14U)) 
                                == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                               & (4U != (0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                  >> 2U)))))));
    bufp->fullIData(oldp+36,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+37,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+38,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+39,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->riscv_core__DOT__inst_if_id_o) 
                                            | ((0x800U 
                                                & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+40,((0xfffff000U & vlSelf->riscv_core__DOT__inst_if_id_o)),32);
    bufp->fullIData(oldp+41,(vlSelf->riscv_core__DOT__w_regs[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->riscv_core__DOT__w_regs[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv_core__DOT__w_regs[2]),32);
    bufp->fullIData(oldp+44,(vlSelf->riscv_core__DOT__w_regs[3]),32);
    bufp->fullIData(oldp+45,(vlSelf->riscv_core__DOT__w_regs[4]),32);
    bufp->fullIData(oldp+46,(vlSelf->riscv_core__DOT__w_regs[5]),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv_core__DOT__w_regs[6]),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv_core__DOT__w_regs[7]),32);
    bufp->fullIData(oldp+49,(vlSelf->riscv_core__DOT__w_regs[8]),32);
    bufp->fullIData(oldp+50,(vlSelf->riscv_core__DOT__w_regs[9]),32);
    bufp->fullIData(oldp+51,(vlSelf->riscv_core__DOT__w_regs[10]),32);
    bufp->fullIData(oldp+52,(vlSelf->riscv_core__DOT__w_regs[11]),32);
    bufp->fullIData(oldp+53,(vlSelf->riscv_core__DOT__w_regs[12]),32);
    bufp->fullIData(oldp+54,(vlSelf->riscv_core__DOT__w_regs[13]),32);
    bufp->fullIData(oldp+55,(vlSelf->riscv_core__DOT__w_regs[14]),32);
    bufp->fullIData(oldp+56,(vlSelf->riscv_core__DOT__w_regs[15]),32);
    bufp->fullIData(oldp+57,(vlSelf->riscv_core__DOT__w_regs[16]),32);
    bufp->fullIData(oldp+58,(vlSelf->riscv_core__DOT__w_regs[17]),32);
    bufp->fullIData(oldp+59,(vlSelf->riscv_core__DOT__w_regs[18]),32);
    bufp->fullIData(oldp+60,(vlSelf->riscv_core__DOT__w_regs[19]),32);
    bufp->fullIData(oldp+61,(vlSelf->riscv_core__DOT__w_regs[20]),32);
    bufp->fullIData(oldp+62,(vlSelf->riscv_core__DOT__w_regs[21]),32);
    bufp->fullIData(oldp+63,(vlSelf->riscv_core__DOT__w_regs[22]),32);
    bufp->fullIData(oldp+64,(vlSelf->riscv_core__DOT__w_regs[23]),32);
    bufp->fullIData(oldp+65,(vlSelf->riscv_core__DOT__w_regs[24]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv_core__DOT__w_regs[25]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv_core__DOT__w_regs[26]),32);
    bufp->fullIData(oldp+68,(vlSelf->riscv_core__DOT__w_regs[27]),32);
    bufp->fullIData(oldp+69,(vlSelf->riscv_core__DOT__w_regs[28]),32);
    bufp->fullIData(oldp+70,(vlSelf->riscv_core__DOT__w_regs[29]),32);
    bufp->fullIData(oldp+71,(vlSelf->riscv_core__DOT__w_regs[30]),32);
    bufp->fullIData(oldp+72,(vlSelf->riscv_core__DOT__w_regs[31]),32);
    bufp->fullIData(oldp+73,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[3]),32);
    bufp->fullIData(oldp+77,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[4]),32);
    bufp->fullIData(oldp+78,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[5]),32);
    bufp->fullIData(oldp+79,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[6]),32);
    bufp->fullIData(oldp+80,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[7]),32);
    bufp->fullIData(oldp+81,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[8]),32);
    bufp->fullIData(oldp+82,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[9]),32);
    bufp->fullIData(oldp+83,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[10]),32);
    bufp->fullIData(oldp+84,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[11]),32);
    bufp->fullIData(oldp+85,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[12]),32);
    bufp->fullIData(oldp+86,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[13]),32);
    bufp->fullIData(oldp+87,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[14]),32);
    bufp->fullIData(oldp+88,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[15]),32);
    bufp->fullIData(oldp+89,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[16]),32);
    bufp->fullIData(oldp+90,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[17]),32);
    bufp->fullIData(oldp+91,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[18]),32);
    bufp->fullIData(oldp+92,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[19]),32);
    bufp->fullIData(oldp+93,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[20]),32);
    bufp->fullIData(oldp+94,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[21]),32);
    bufp->fullIData(oldp+95,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[22]),32);
    bufp->fullIData(oldp+96,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[23]),32);
    bufp->fullIData(oldp+97,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[24]),32);
    bufp->fullIData(oldp+98,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[25]),32);
    bufp->fullIData(oldp+99,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[26]),32);
    bufp->fullIData(oldp+100,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[27]),32);
    bufp->fullIData(oldp+101,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[28]),32);
    bufp->fullIData(oldp+102,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[29]),32);
    bufp->fullIData(oldp+103,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[30]),32);
    bufp->fullIData(oldp+104,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[31]),32);
    bufp->fullIData(oldp+105,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+111,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+112,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+113,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+114,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+115,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+116,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+117,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+118,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+119,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+120,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+121,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+122,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+123,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+124,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+125,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+126,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+127,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+128,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+129,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+130,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+131,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+132,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+133,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+134,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+135,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+136,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    bufp->fullCData(oldp+137,(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w),3);
    bufp->fullBit(oldp+138,(vlSelf->riscv_core__DOT__u0_idu__DOT__memtoreg_w));
    bufp->fullBit(oldp+139,(vlSelf->riscv_core__DOT__u0_idu__DOT__memwr_w));
    bufp->fullCData(oldp+140,(vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w),3);
    bufp->fullBit(oldp+141,(vlSelf->riscv_core__DOT__u0_idu__DOT__alua_src_w));
    bufp->fullCData(oldp+142,(vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w),2);
    bufp->fullBit(oldp+143,(vlSelf->riscv_core__DOT__data_hazard_stall));
    bufp->fullBit(oldp+144,(vlSelf->riscv_core__DOT__branch_taken));
    bufp->fullIData(oldp+145,(vlSelf->riscv_core__DOT__pc_if_id_o),32);
    bufp->fullBit(oldp+146,(vlSelf->riscv_core__DOT__reg_wr_id_ex_o));
    bufp->fullCData(oldp+147,(vlSelf->riscv_core__DOT__branch_op_id_ex_o),3);
    bufp->fullBit(oldp+148,(vlSelf->riscv_core__DOT__mem_to_reg_id_ex_o));
    bufp->fullBit(oldp+149,(vlSelf->riscv_core__DOT__mem_wr_id_ex_o));
    bufp->fullCData(oldp+150,(vlSelf->riscv_core__DOT__mem_op_id_ex_o),3);
    bufp->fullCData(oldp+151,(vlSelf->riscv_core__DOT__rd_idx_id_ex_o),5);
    bufp->fullCData(oldp+152,(vlSelf->riscv_core__DOT__branch_op_ex_mem_o),3);
    bufp->fullIData(oldp+153,(vlSelf->riscv_core__DOT__rs1_val_alu_i),32);
    bufp->fullIData(oldp+154,(vlSelf->riscv_core__DOT__rs2_val_alu_i),32);
    bufp->fullIData(oldp+155,(vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i),32);
    bufp->fullIData(oldp+156,(vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i),32);
    bufp->fullBit(oldp+157,((0U == vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w)));
    bufp->fullIData(oldp+158,(vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w),32);
    bufp->fullIData(oldp+159,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               ^ vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+160,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+161,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               | vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+162,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl),32);
    bufp->fullIData(oldp+163,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr),32);
    bufp->fullIData(oldp+164,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub),32);
    bufp->fullIData(oldp+165,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add),32);
    bufp->fullIData(oldp+166,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set),32);
    bufp->fullSData(oldp+167,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+168,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+169,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+170,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+171,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+172,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+173,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+174,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+175,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r),32);
    bufp->fullBit(oldp+176,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1));
    bufp->fullBit(oldp+177,(vlSelf->riscv_core__DOT____Vcellinp__u0_idu__flush));
    bufp->fullBit(oldp+178,(vlSelf->riscv_core__DOT__u0_idu__DOT__regwr_w));
    bufp->fullBit(oldp+179,(vlSelf->clk));
    bufp->fullBit(oldp+180,(vlSelf->rst));
    bufp->fullIData(oldp+181,(vlSelf->inst_i),32);
    bufp->fullIData(oldp+182,(vlSelf->inst_addr_o),32);
    bufp->fullBit(oldp+183,(vlSelf->inst_ce_o));
    bufp->fullIData(oldp+184,(vlSelf->data_i),32);
    bufp->fullBit(oldp+185,(vlSelf->data_we_o));
    bufp->fullBit(oldp+186,(vlSelf->data_ce_o));
    bufp->fullIData(oldp+187,(vlSelf->data_addr_o),32);
    bufp->fullIData(oldp+188,(vlSelf->data_o),32);
    bufp->fullIData(oldp+189,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+190,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+191,(vlSelf->riscv_core__DOT__rs1_val_id_ex_o),32);
    bufp->fullIData(oldp+192,(vlSelf->riscv_core__DOT__rs2_val_id_ex_o),32);
    bufp->fullIData(oldp+193,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 0xfU)) 
                                   == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))
                                ? vlSelf->riscv_core__DOT__rd_val
                                : vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                               [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+194,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                   & (4U != (0x1fU 
                                             & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                >> 2U)))))
                                ? vlSelf->riscv_core__DOT__rd_val
                                : vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                               [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0x14U))])),32);
    bufp->fullCData(oldp+195,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                 & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o))) 
                                << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))),3);
    bufp->fullCData(oldp+196,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                 & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                               >> 0x14U)) 
                                     == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                    & (4U != (0x1fU 
                                              & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                 >> 2U))))) 
                                << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))),3);
    bufp->fullBit(oldp+197,(((2U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o))) 
                             & vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set)));
    bufp->fullBit(oldp+198,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1)) 
                                & ((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                   == (IData)(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o))))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1)) 
                                & (((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                    == (IData)(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o)) 
                                   & (4U != (IData)(vlSelf->riscv_core__DOT__opcode_id_ex_o)))))));
    bufp->fullIData(oldp+200,(((0U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                ? (((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                >> 0x14U))
                                : ((2U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                    ? (((- (IData)(
                                                   (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 7U))))
                                    : ((3U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                        ? (((- (IData)(
                                                       (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                       >> 7U)))))
                                        : ((4U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                            ? (((- (IData)(
                                                           (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->riscv_core__DOT__inst_if_id_o) 
                                                  | ((0x800U 
                                                      & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                           >> 0x14U)))))
                                            : ((1U 
                                                == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                                ? (0xfffff000U 
                                                   & vlSelf->riscv_core__DOT__inst_if_id_o)
                                                : 0U)))))),32);
    bufp->fullCData(oldp+201,(vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w),3);
    bufp->fullCData(oldp+202,(vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w),4);
    bufp->fullIData(oldp+203,(((1U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                ? (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                   + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                : ((2U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                    ? (vlSelf->riscv_core__DOT__rs1_val_ex_mem_o 
                                       + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                    : ((4U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                        ? (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                           + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                        : ((5U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                            ? (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                               + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                            : ((6U 
                                                == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                                ? (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                                   + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                                    ? 
                                                   (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                                    + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                                    : 0U))))))),32);
    bufp->fullBit(oldp+204,(0U));
    bufp->fullBit(oldp+205,(vlSelf->riscv_core__DOT__u0_idu__DOT__u0_id_ex__DOT__stall));
    bufp->fullBit(oldp+206,(vlSelf->riscv_core__DOT__u0_lsu__DOT__stall));
    bufp->fullBit(oldp+207,(vlSelf->riscv_core__DOT__u0_lsu__DOT__flush));
}
