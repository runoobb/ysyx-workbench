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
    tracep->declBit(c+132,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+134,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+138,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"mem_to_reg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("riscv_core ");
    tracep->declBit(c+132,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+134,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+138,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"mem_to_reg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reg_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"branch_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,"mem_to_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"mem_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+5,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,"alu_asrc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"alu_bsrc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,"alu_ctr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,"npc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,"zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+9,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,"rs2_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,"inst_rs1_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,"inst_rs2_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,"inst_rd_idx_field",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,"rd_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,"alu_p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"w_regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+14,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("u0_exu ");
    tracep->declBus(c+8,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+14,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+145,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"alu_p_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("u0_riscv_alu ");
    tracep->declBus(c+8,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+14,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+145,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"alu_p_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"result_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"result_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,"result_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"result_sl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"result_sr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"result_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,"result_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,"result_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,"shift_right_fill_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,16);
    tracep->declBus(c+25,"shift_right_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"shift_right_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"shift_right_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"shift_right_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"shift_left_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"shift_left_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"shift_left_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"shift_left_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_idu ");
    tracep->declBus(c+134,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"regwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"branchop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"memtoreg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"memwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"memop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+6,"alua_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"alub_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+8,"aluctr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+9,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"extop_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->pushNamePrefix("u0_riscv_control ");
    tracep->declBus(c+134,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"extop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1,"regwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"branchop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"memtoreg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"memwr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"memop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+6,"alua_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"alub_src",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+8,"aluctr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_immgen ");
    tracep->declBus(c+134,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"extop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+9,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+149,"i_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,"s_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,"b_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,"j_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,"u_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_ifu ");
    tracep->declBit(c+132,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+9,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"pc_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("u0_riscv_npc ");
    tracep->declBit(c+132,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+9,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"pc_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+33,"pc_a_src_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"pc_b_src_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+35,"npc_add0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,"npc_add1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u0_riscv_regfile ");
    tracep->declBit(c+132,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"rs1_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+147,"rs2_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+148,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1,"rd_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"rd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"regfile_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->riscv_core__DOT__reg_wr));
    bufp->fullCData(oldp+2,(vlSelf->riscv_core__DOT__branch_op),3);
    bufp->fullBit(oldp+3,(vlSelf->riscv_core__DOT__mem_to_reg));
    bufp->fullBit(oldp+4,(vlSelf->riscv_core__DOT__mem_wr));
    bufp->fullCData(oldp+5,(vlSelf->riscv_core__DOT__mem_op),3);
    bufp->fullBit(oldp+6,(vlSelf->riscv_core__DOT__alu_asrc));
    bufp->fullCData(oldp+7,(vlSelf->riscv_core__DOT__alu_bsrc),2);
    bufp->fullCData(oldp+8,(vlSelf->riscv_core__DOT__alu_ctr),4);
    bufp->fullIData(oldp+9,(vlSelf->riscv_core__DOT__imm),32);
    bufp->fullCData(oldp+10,(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w),3);
    bufp->fullBit(oldp+11,(((2U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr))) 
                            & vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_set)));
    bufp->fullIData(oldp+12,(vlSelf->riscv_core__DOT__rs1_val),32);
    bufp->fullIData(oldp+13,(vlSelf->riscv_core__DOT__rd_val),32);
    bufp->fullIData(oldp+14,(vlSelf->riscv_core__DOT__alu_a),32);
    bufp->fullIData(oldp+15,(vlSelf->riscv_core__DOT__alu_b),32);
    bufp->fullIData(oldp+16,((vlSelf->riscv_core__DOT__alu_a 
                              ^ vlSelf->riscv_core__DOT__alu_b)),32);
    bufp->fullIData(oldp+17,((vlSelf->riscv_core__DOT__alu_a 
                              & vlSelf->riscv_core__DOT__alu_b)),32);
    bufp->fullIData(oldp+18,((vlSelf->riscv_core__DOT__alu_a 
                              | vlSelf->riscv_core__DOT__alu_b)),32);
    bufp->fullIData(oldp+19,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_sl),32);
    bufp->fullIData(oldp+20,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_sr),32);
    bufp->fullIData(oldp+21,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_sub),32);
    bufp->fullIData(oldp+22,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_add),32);
    bufp->fullIData(oldp+23,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__result_set),32);
    bufp->fullSData(oldp+24,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+25,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+26,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+27,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+28,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+29,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+30,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+31,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+32,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_riscv_alu__DOT__shift_left_8_r),32);
    bufp->fullBit(oldp+33,(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_a_src_o));
    bufp->fullBit(oldp+34,(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_b_src_o));
    bufp->fullIData(oldp+35,(((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_a_src_o)
                               ? vlSelf->riscv_core__DOT__imm
                               : 4U)),32);
    bufp->fullIData(oldp+36,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[31]),32);
    bufp->fullIData(oldp+68,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+73,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+74,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+75,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+76,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+77,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+78,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+79,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+80,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+81,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+82,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+83,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+84,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+85,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+86,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+87,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+88,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+89,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+90,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+91,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+92,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+93,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+94,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+95,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+96,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+97,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+98,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+99,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    bufp->fullIData(oldp+100,(vlSelf->riscv_core__DOT__w_regs[0]),32);
    bufp->fullIData(oldp+101,(vlSelf->riscv_core__DOT__w_regs[1]),32);
    bufp->fullIData(oldp+102,(vlSelf->riscv_core__DOT__w_regs[2]),32);
    bufp->fullIData(oldp+103,(vlSelf->riscv_core__DOT__w_regs[3]),32);
    bufp->fullIData(oldp+104,(vlSelf->riscv_core__DOT__w_regs[4]),32);
    bufp->fullIData(oldp+105,(vlSelf->riscv_core__DOT__w_regs[5]),32);
    bufp->fullIData(oldp+106,(vlSelf->riscv_core__DOT__w_regs[6]),32);
    bufp->fullIData(oldp+107,(vlSelf->riscv_core__DOT__w_regs[7]),32);
    bufp->fullIData(oldp+108,(vlSelf->riscv_core__DOT__w_regs[8]),32);
    bufp->fullIData(oldp+109,(vlSelf->riscv_core__DOT__w_regs[9]),32);
    bufp->fullIData(oldp+110,(vlSelf->riscv_core__DOT__w_regs[10]),32);
    bufp->fullIData(oldp+111,(vlSelf->riscv_core__DOT__w_regs[11]),32);
    bufp->fullIData(oldp+112,(vlSelf->riscv_core__DOT__w_regs[12]),32);
    bufp->fullIData(oldp+113,(vlSelf->riscv_core__DOT__w_regs[13]),32);
    bufp->fullIData(oldp+114,(vlSelf->riscv_core__DOT__w_regs[14]),32);
    bufp->fullIData(oldp+115,(vlSelf->riscv_core__DOT__w_regs[15]),32);
    bufp->fullIData(oldp+116,(vlSelf->riscv_core__DOT__w_regs[16]),32);
    bufp->fullIData(oldp+117,(vlSelf->riscv_core__DOT__w_regs[17]),32);
    bufp->fullIData(oldp+118,(vlSelf->riscv_core__DOT__w_regs[18]),32);
    bufp->fullIData(oldp+119,(vlSelf->riscv_core__DOT__w_regs[19]),32);
    bufp->fullIData(oldp+120,(vlSelf->riscv_core__DOT__w_regs[20]),32);
    bufp->fullIData(oldp+121,(vlSelf->riscv_core__DOT__w_regs[21]),32);
    bufp->fullIData(oldp+122,(vlSelf->riscv_core__DOT__w_regs[22]),32);
    bufp->fullIData(oldp+123,(vlSelf->riscv_core__DOT__w_regs[23]),32);
    bufp->fullIData(oldp+124,(vlSelf->riscv_core__DOT__w_regs[24]),32);
    bufp->fullIData(oldp+125,(vlSelf->riscv_core__DOT__w_regs[25]),32);
    bufp->fullIData(oldp+126,(vlSelf->riscv_core__DOT__w_regs[26]),32);
    bufp->fullIData(oldp+127,(vlSelf->riscv_core__DOT__w_regs[27]),32);
    bufp->fullIData(oldp+128,(vlSelf->riscv_core__DOT__w_regs[28]),32);
    bufp->fullIData(oldp+129,(vlSelf->riscv_core__DOT__w_regs[29]),32);
    bufp->fullIData(oldp+130,(vlSelf->riscv_core__DOT__w_regs[30]),32);
    bufp->fullIData(oldp+131,(vlSelf->riscv_core__DOT__w_regs[31]),32);
    bufp->fullBit(oldp+132,(vlSelf->clk));
    bufp->fullBit(oldp+133,(vlSelf->rst));
    bufp->fullIData(oldp+134,(vlSelf->inst_i),32);
    bufp->fullIData(oldp+135,(vlSelf->inst_addr_o),32);
    bufp->fullBit(oldp+136,(vlSelf->inst_ce_o));
    bufp->fullIData(oldp+137,(vlSelf->data_i),32);
    bufp->fullBit(oldp+138,(vlSelf->data_we_o));
    bufp->fullBit(oldp+139,(vlSelf->data_ce_o));
    bufp->fullIData(oldp+140,(vlSelf->data_addr_o),32);
    bufp->fullIData(oldp+141,(vlSelf->data_o),32);
    bufp->fullBit(oldp+142,(vlSelf->mem_to_reg_o));
    bufp->fullIData(oldp+143,((((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_a_src_o)
                                 ? vlSelf->riscv_core__DOT__imm
                                 : 4U) + ((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_b_src_o)
                                           ? vlSelf->riscv_core__DOT__rs1_val
                                           : vlSelf->riscv_core__DOT__pc))),32);
    bufp->fullIData(oldp+144,(vlSelf->riscv_core__DOT__pc),32);
    bufp->fullBit(oldp+145,((0U == vlSelf->data_addr_o)));
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->inst_i 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->inst_i 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+148,((0x1fU & (vlSelf->inst_i 
                                        >> 7U))),5);
    bufp->fullIData(oldp+149,((((- (IData)((vlSelf->inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst_i 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+150,((((- (IData)((vlSelf->inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst_i 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst_i 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+151,((((- (IData)((vlSelf->inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->inst_i 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->inst_i 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->inst_i 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+152,((((- (IData)((vlSelf->inst_i 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst_i) 
                                             | ((0x800U 
                                                 & (vlSelf->inst_i 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst_i 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+153,((0xfffff000U & vlSelf->inst_i)),32);
    bufp->fullIData(oldp+154,(((IData)(vlSelf->riscv_core__DOT__u0_ifu__DOT__u0_riscv_npc__DOT__pc_b_src_o)
                                ? vlSelf->riscv_core__DOT__rs1_val
                                : vlSelf->riscv_core__DOT__pc)),32);
}
