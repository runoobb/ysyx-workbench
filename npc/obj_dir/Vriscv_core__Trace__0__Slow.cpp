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
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+194,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+196,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+197,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+198,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+200,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("riscv_core ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+194,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+196,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+197,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+198,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+200,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,"rs1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,"rs2_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,"data_hazard_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"data_hazard_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"control_hazard_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+109,"inst_if_id_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,"pc_if_id_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,"rd_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,"reg_wr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+143,"branch_op_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,"mem_to_reg_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"mem_wr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"mem_op_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,"alu_ctr_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,"rs1_val_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,"rs2_val_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"rs1_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,"rs2_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,"rd_idx_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,"pc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,"imm_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,"opcode_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,"alu_asrc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+4,"alu_bsrc_id_ex_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+206,"rs1_val_id_ex_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,"rs2_val_id_ex_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,"reg_wr_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+116,"branch_op_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,"mem_to_reg_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"mem_wr_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+118,"rd_idx_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,"mem_op_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,"rs1_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"rs2_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"pc_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"alu_p_val_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,"zero_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"less_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+123,"imm_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,"forwarda",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+209,"forwardb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+200,"forward_ex_mem_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,"forward_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,"mem_to_reg_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"reg_wr_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+10,"alu_p_val_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"mem_rd_val_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,"rd_idx_mem_wb_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+148,"valid_ifu_idu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"ready_idu_ifu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"valid_exu_ifu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"ready_ifu_exu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"inst_rs1_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+127,"inst_rs2_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,"inst_rd_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+152,"ready_exu_idu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+153,"valid_idu_exu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+167,"rs1_val_alu_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_val_alu_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,"alu_a_val_ex_mem_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"alu_b_val_ex_mem_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,"ready_lsu_exu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"valid_exu_lsu_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"valid_lsu_regfile_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"w_regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("u0_control_hazard ");
    tracep->declBus(c+116,"branchop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+122,"zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"branchtaken",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_data_hazard ");
    tracep->declBit(c+144,"id_ex_memtoreg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"id_ex_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+126,"if_id_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"if_id_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+139,"stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_exu ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+169,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"regwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"branchop_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+144,"memtoreg_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"memwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"memop_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+167,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+113,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+220,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+116,"branchop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+5,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"memwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+119,"memop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+6,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"alup_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+123,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+122,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"upstream_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"upstream_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"downstream_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"downstream_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"downstream_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+171,"zero_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+210,"less_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+172,"alu_p_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("u0_alu ");
    tracep->declBus(c+1,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+169,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+171,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+172,"alu_p_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+173,"result_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,"result_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,"result_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,"result_sl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,"result_sr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,"result_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,"result_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,"result_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,"shift_right_fill_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,16);
    tracep->declBus(c+182,"shift_right_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,"shift_right_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,"shift_right_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,"shift_right_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,"shift_left_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,"shift_left_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,"shift_left_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,"shift_left_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_ex_mem ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"branchop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+144,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"memwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"memop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+167,"rs1_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"pc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+172,"alup_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+171,"zero_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"less_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+113,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+156,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+116,"branchop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+5,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"memwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+119,"memop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+6,"rs1_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"rs2_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"alup_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+122,"zero_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"less_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_forward ");
    tracep->declBit(c+115,"ex_mem_regwr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"mem_wb_regwr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"mem_wb_memtoreg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+118,"ex_mem_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"mem_wb_rd_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+129,"if_id_opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+126,"if_id_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"if_id_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+114,"id_ex_opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"id_ex_rs1_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+111,"id_ex_rs2_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+7,"forward_ex_mem_alu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"forward_mem_wb_alu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"forward_mem_wb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"forward_ex_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"forward_mem_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+208,"forwarda",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+209,"forwardb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+190,"forwarda_C1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"forwarda_C2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"forwarda_C3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"forwardb_cond1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"forwardb_cond2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"forwardb_cond3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_idu ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"branchop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+144,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"memwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"memop_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"alua_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"alub_src_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1,"aluctr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+206,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+207,"rs2_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"rs1_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+111,"rs2_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+204,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+112,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"opcode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+157,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"upstream_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"upstream_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"downstream_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"downstream_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"downstream_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+212,"extop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+213,"imm_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+214,"regwr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+215,"branchop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+158,"memtoreg_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+159,"memwr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+216,"memop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+217,"alua_src_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+218,"alub_src_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,"aluctr_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("u0_id_ex ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+215,"branchop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+158,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"memwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"memop_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+191,"aluctr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+217,"aluasrc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+218,"alubsrc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+126,"rs1_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"rs2_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+206,"rs1_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+207,"rs2_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+141,"pc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+213,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"opcode_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+160,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"branchop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+144,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"memwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"memop_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1,"aluctr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+3,"aluasrc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"alubsrc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+2,"rs1_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+111,"rs2_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+204,"rs1_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"rs2_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+112,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_control ");
    tracep->declBus(c+109,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+212,"extop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+214,"regwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+215,"branchop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+158,"memtoreg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"memwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"memop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+217,"alua_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+218,"alub_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+191,"aluctr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_immgen ");
    tracep->declBus(c+109,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+212,"extop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+213,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"i_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,"s_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,"b_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,"j_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,"u_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_ifu ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"branch_taken",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+116,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+123,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+194,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+150,"upstream_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"upstream_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"downstream_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"downstream_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"pc_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,"pc_icache_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"pc_icache_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+221,"icache_pc_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"ifu_icache_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"icache_ifu_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"icache_ifu_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"ifu_idu_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("u0_if_id ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+194,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+163,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_npc ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"branch_taken",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+116,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+123,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+164,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+219,"npc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_lsu ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"memtoreg_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"regwr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"alup_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"memrd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+220,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"memtoreg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"regwr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"alup_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"memrd_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"rd_idx_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+150,"upstream_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"upstream_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"downstream_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"downstream_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"downstream_handshake",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("u0_mem_wb ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"memtoreg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"regwr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"alup_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"memrd_val_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"rd_idx_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+165,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"memtoreg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"regwr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"alup_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"memrd_val_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"rd_idx_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_riscv_regfile ");
    tracep->declBit(c+192,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"rs1_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"rs2_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+166,"rd_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+110,"rd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+202,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+203,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"regfile_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+77+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o),4);
    bufp->fullCData(oldp+2,(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o),5);
    bufp->fullBit(oldp+3,(vlSelf->riscv_core__DOT__alu_asrc_id_ex_o));
    bufp->fullCData(oldp+4,(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o),2);
    bufp->fullBit(oldp+5,(vlSelf->riscv_core__DOT__mem_to_reg_ex_mem_o));
    bufp->fullIData(oldp+6,(vlSelf->riscv_core__DOT__rs1_val_ex_mem_o),32);
    bufp->fullIData(oldp+7,(vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o),32);
    bufp->fullBit(oldp+8,(vlSelf->riscv_core__DOT__less_ex_mem_o));
    bufp->fullBit(oldp+9,(vlSelf->riscv_core__DOT__mem_to_reg_mem_wb_o));
    bufp->fullIData(oldp+10,(vlSelf->riscv_core__DOT__alu_p_val_mem_wb_o),32);
    bufp->fullIData(oldp+11,(vlSelf->riscv_core__DOT__mem_rd_val_mem_wb_o),32);
    bufp->fullIData(oldp+12,(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_w),32);
    bufp->fullIData(oldp+13,(vlSelf->riscv_core__DOT__w_regs[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->riscv_core__DOT__w_regs[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->riscv_core__DOT__w_regs[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->riscv_core__DOT__w_regs[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->riscv_core__DOT__w_regs[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->riscv_core__DOT__w_regs[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->riscv_core__DOT__w_regs[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->riscv_core__DOT__w_regs[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->riscv_core__DOT__w_regs[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->riscv_core__DOT__w_regs[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->riscv_core__DOT__w_regs[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->riscv_core__DOT__w_regs[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->riscv_core__DOT__w_regs[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->riscv_core__DOT__w_regs[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->riscv_core__DOT__w_regs[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->riscv_core__DOT__w_regs[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->riscv_core__DOT__w_regs[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->riscv_core__DOT__w_regs[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->riscv_core__DOT__w_regs[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->riscv_core__DOT__w_regs[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->riscv_core__DOT__w_regs[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->riscv_core__DOT__w_regs[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->riscv_core__DOT__w_regs[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->riscv_core__DOT__w_regs[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->riscv_core__DOT__w_regs[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->riscv_core__DOT__w_regs[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->riscv_core__DOT__w_regs[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->riscv_core__DOT__w_regs[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->riscv_core__DOT__w_regs[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->riscv_core__DOT__w_regs[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv_core__DOT__w_regs[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->riscv_core__DOT__w_regs[31]),32);
    bufp->fullIData(oldp+45,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[8]),32);
    bufp->fullIData(oldp+54,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[9]),32);
    bufp->fullIData(oldp+55,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[10]),32);
    bufp->fullIData(oldp+56,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[11]),32);
    bufp->fullIData(oldp+57,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[12]),32);
    bufp->fullIData(oldp+58,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[13]),32);
    bufp->fullIData(oldp+59,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[14]),32);
    bufp->fullIData(oldp+60,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[15]),32);
    bufp->fullIData(oldp+61,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[16]),32);
    bufp->fullIData(oldp+62,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[17]),32);
    bufp->fullIData(oldp+63,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[18]),32);
    bufp->fullIData(oldp+64,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[19]),32);
    bufp->fullIData(oldp+65,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[20]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[21]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[22]),32);
    bufp->fullIData(oldp+68,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[23]),32);
    bufp->fullIData(oldp+69,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[24]),32);
    bufp->fullIData(oldp+70,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[25]),32);
    bufp->fullIData(oldp+71,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[26]),32);
    bufp->fullIData(oldp+72,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[27]),32);
    bufp->fullIData(oldp+73,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[28]),32);
    bufp->fullIData(oldp+74,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[29]),32);
    bufp->fullIData(oldp+75,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[30]),32);
    bufp->fullIData(oldp+76,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[31]),32);
    bufp->fullIData(oldp+77,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+82,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+83,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+84,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+85,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+86,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+87,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+88,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+89,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+90,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+91,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+92,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+93,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+94,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+95,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+96,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+97,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+98,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+99,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+100,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+101,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+102,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+103,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+104,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+105,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+106,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+107,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+108,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    bufp->fullIData(oldp+109,(vlSelf->riscv_core__DOT__inst_if_id_o),32);
    bufp->fullIData(oldp+110,(vlSelf->riscv_core__DOT__rd_val),32);
    bufp->fullCData(oldp+111,(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o),5);
    bufp->fullIData(oldp+112,(vlSelf->riscv_core__DOT__pc_id_ex_o),32);
    bufp->fullIData(oldp+113,(vlSelf->riscv_core__DOT__imm_id_ex_o),32);
    bufp->fullCData(oldp+114,(vlSelf->riscv_core__DOT__opcode_id_ex_o),5);
    bufp->fullBit(oldp+115,(vlSelf->riscv_core__DOT__reg_wr_ex_mem_o));
    bufp->fullCData(oldp+116,(vlSelf->riscv_core__DOT__branch_op_ex_mem_o),3);
    bufp->fullBit(oldp+117,(vlSelf->riscv_core__DOT__mem_wr_ex_mem_o));
    bufp->fullCData(oldp+118,(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o),5);
    bufp->fullCData(oldp+119,(vlSelf->riscv_core__DOT__mem_op_ex_mem_o),3);
    bufp->fullIData(oldp+120,(vlSelf->riscv_core__DOT__rs2_val_ex_mem_o),32);
    bufp->fullIData(oldp+121,(vlSelf->riscv_core__DOT__pc_ex_mem_o),32);
    bufp->fullBit(oldp+122,(vlSelf->riscv_core__DOT__zero_ex_mem_o));
    bufp->fullIData(oldp+123,(vlSelf->riscv_core__DOT__imm_ex_mem_o),32);
    bufp->fullBit(oldp+124,(vlSelf->riscv_core__DOT__reg_wr_mem_wb_o));
    bufp->fullCData(oldp+125,(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o),5);
    bufp->fullCData(oldp+126,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+127,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+128,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 7U))),5);
    bufp->fullCData(oldp+129,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 2U))),5);
    bufp->fullBit(oldp+130,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0xfU)) 
                                == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))));
    bufp->fullBit(oldp+131,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1)) 
                                & (((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                    == (IData)(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o)) 
                                   & (4U != (IData)(vlSelf->riscv_core__DOT__opcode_id_ex_o)))))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                & (4U != (0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                   >> 2U)))))));
    bufp->fullIData(oldp+134,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+135,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+136,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
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
    bufp->fullIData(oldp+137,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->riscv_core__DOT__inst_if_id_o) 
                                             | ((0x800U 
                                                 & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+138,((0xfffff000U & vlSelf->riscv_core__DOT__inst_if_id_o)),32);
    bufp->fullBit(oldp+139,(vlSelf->riscv_core__DOT__data_hazard_stall));
    bufp->fullBit(oldp+140,(vlSelf->riscv_core__DOT__branch_taken));
    bufp->fullIData(oldp+141,(vlSelf->riscv_core__DOT__pc_if_id_o),32);
    bufp->fullBit(oldp+142,(vlSelf->riscv_core__DOT__reg_wr_id_ex_o));
    bufp->fullCData(oldp+143,(vlSelf->riscv_core__DOT__branch_op_id_ex_o),3);
    bufp->fullBit(oldp+144,(vlSelf->riscv_core__DOT__mem_to_reg_id_ex_o));
    bufp->fullBit(oldp+145,(vlSelf->riscv_core__DOT__mem_wr_id_ex_o));
    bufp->fullCData(oldp+146,(vlSelf->riscv_core__DOT__mem_op_id_ex_o),3);
    bufp->fullCData(oldp+147,(vlSelf->riscv_core__DOT__rd_idx_id_ex_o),5);
    bufp->fullBit(oldp+148,(vlSelf->riscv_core__DOT__valid_ifu_idu_w));
    bufp->fullBit(oldp+149,(vlSelf->riscv_core__DOT__u0_idu__DOT__downstream_handshake));
    bufp->fullBit(oldp+150,(vlSelf->riscv_core__DOT__valid_exu_lsu_w));
    bufp->fullBit(oldp+151,(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_icache_valid));
    bufp->fullBit(oldp+152,(vlSelf->riscv_core__DOT__ready_exu_idu_w));
    bufp->fullBit(oldp+153,(vlSelf->riscv_core__DOT__valid_idu_exu_w));
    bufp->fullBit(oldp+154,(vlSelf->riscv_core__DOT__valid_lsu_regfile_w));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_icache_valid) 
                             & (IData)(vlSelf->riscv_core__DOT__valid_lsu_regfile_w))));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->riscv_core__DOT__valid_idu_exu_w)))));
    bufp->fullBit(oldp+157,(vlSelf->riscv_core__DOT____Vcellinp__u0_idu__flush));
    bufp->fullBit(oldp+158,(vlSelf->riscv_core__DOT__u0_idu__DOT__memtoreg_w));
    bufp->fullBit(oldp+159,(vlSelf->riscv_core__DOT__u0_idu__DOT__memwr_w));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->riscv_core__DOT__valid_ifu_idu_w)))));
    bufp->fullBit(oldp+161,(vlSelf->riscv_core__DOT__u0_ifu__DOT__ifu_icache_ready));
    bufp->fullBit(oldp+162,(((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__ifu_icache_ready) 
                             & (IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_icache_valid))));
    bufp->fullBit(oldp+163,(vlSelf->riscv_core__DOT__u0_ifu__DOT____Vcellinp__u0_if_id__stall));
    bufp->fullBit(oldp+164,((1U & ((~ (IData)(vlSelf->riscv_core__DOT__valid_exu_lsu_w)) 
                                   | (IData)(vlSelf->riscv_core__DOT__data_hazard_stall)))));
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->riscv_core__DOT__valid_exu_lsu_w)))));
    bufp->fullBit(oldp+166,(vlSelf->riscv_core__DOT____Vcellinp__u0_riscv_regfile__rd_we_i));
    bufp->fullIData(oldp+167,(vlSelf->riscv_core__DOT__rs1_val_alu_i),32);
    bufp->fullIData(oldp+168,(vlSelf->riscv_core__DOT__rs2_val_alu_i),32);
    bufp->fullIData(oldp+169,(vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i),32);
    bufp->fullIData(oldp+170,(vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i),32);
    bufp->fullBit(oldp+171,((0U == vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w)));
    bufp->fullIData(oldp+172,(vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w),32);
    bufp->fullIData(oldp+173,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               ^ vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+174,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+175,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                               | vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
    bufp->fullIData(oldp+176,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl),32);
    bufp->fullIData(oldp+177,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr),32);
    bufp->fullIData(oldp+178,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub),32);
    bufp->fullIData(oldp+179,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add),32);
    bufp->fullIData(oldp+180,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set),32);
    bufp->fullSData(oldp+181,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+182,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+183,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+184,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+185,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+186,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+187,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+188,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+189,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r),32);
    bufp->fullBit(oldp+190,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1));
    bufp->fullCData(oldp+191,(vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w),4);
    bufp->fullBit(oldp+192,(vlSelf->clk));
    bufp->fullBit(oldp+193,(vlSelf->rst));
    bufp->fullIData(oldp+194,(vlSelf->inst_i),32);
    bufp->fullIData(oldp+195,(vlSelf->inst_addr_o),32);
    bufp->fullBit(oldp+196,(vlSelf->inst_ce_o));
    bufp->fullIData(oldp+197,(vlSelf->data_i),32);
    bufp->fullBit(oldp+198,(vlSelf->data_we_o));
    bufp->fullBit(oldp+199,(vlSelf->data_ce_o));
    bufp->fullIData(oldp+200,(vlSelf->data_addr_o),32);
    bufp->fullIData(oldp+201,(vlSelf->data_o),32);
    bufp->fullIData(oldp+202,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+203,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+204,(vlSelf->riscv_core__DOT__rs1_val_id_ex_o),32);
    bufp->fullIData(oldp+205,(vlSelf->riscv_core__DOT__rs2_val_id_ex_o),32);
    bufp->fullIData(oldp+206,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 0xfU)) 
                                   == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))
                                ? vlSelf->riscv_core__DOT__rd_val
                                : vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                               [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+207,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
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
    bufp->fullCData(oldp+208,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                 & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o))) 
                                << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))),3);
    bufp->fullCData(oldp+209,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                 & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                               >> 0x14U)) 
                                     == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                    & (4U != (0x1fU 
                                              & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                 >> 2U))))) 
                                << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))),3);
    bufp->fullBit(oldp+210,(((2U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o))) 
                             & vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set)));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                             & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1)) 
                                & ((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                   == (IData)(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o))))));
    bufp->fullCData(oldp+212,(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w),3);
    bufp->fullIData(oldp+213,(((0U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
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
    bufp->fullBit(oldp+214,(vlSelf->riscv_core__DOT__u0_idu__DOT__regwr_w));
    bufp->fullCData(oldp+215,(vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w),3);
    bufp->fullCData(oldp+216,(vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w),3);
    bufp->fullBit(oldp+217,(vlSelf->riscv_core__DOT__u0_idu__DOT__alua_src_w));
    bufp->fullCData(oldp+218,(vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w),2);
    bufp->fullIData(oldp+219,(((1U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
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
    bufp->fullBit(oldp+220,(0U));
    bufp->fullBit(oldp+221,(1U));
}
