// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+72,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+74,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+78,"mem_to_reg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"inst_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+72,"inst_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+74,"data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"data_ce_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+78,"mem_to_reg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"ext_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+2,"reg_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"branch_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+4,"mem_to_reg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"mem_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+7,"alu_asrc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"alu_bsrc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+9,"alu_ctr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"npc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+81,"zero",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"rs2_val",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"inst_rs1_idx_field",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+83,"inst_rs2_idx_field",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+84,"inst_rd_idx_field",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+13,"rd_val",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"alu_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("u0_riscv_alu ");
    tracep->declBus(c+9,"alu_ctr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+14,"alu_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+81,"zero_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"alu_p_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"result_xor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"result_and",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"result_or",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"result_sl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"result_sr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"result_sub",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"result_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"result_set",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"shift_right_fill_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,16);
    tracep->declBus(c+25,"shift_right_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"shift_right_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"shift_right_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"shift_right_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"shift_left_1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"shift_left_2_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"shift_left_4_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"shift_left_8_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_control ");
    tracep->declBus(c+70,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"ExtOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+2,"RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"BranchOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+4,"MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"MemOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+7,"ALUAsrc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"ALUBsrc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+9,"ALUctr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_immgen ");
    tracep->declBus(c+70,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"ExtOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+10,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"I_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"S_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"B_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"J_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"U_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_npc ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"branch_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+10,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"pc_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+33,"PCAsrc_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"PCBsrc_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+35,"npc_add0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"npc_add1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_riscv_regfile ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"rs1_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+83,"rs2_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+84,"rd_idx_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+2,"rd_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"rd_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"rs1_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"rs2_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__ext_op),3);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__reg_wr));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__branch_op),3);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__mem_to_reg));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__mem_wr));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__mem_op),3);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__alu_asrc));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__alu_bsrc),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu_ctr),4);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__imm),32);
    bufp->fullBit(oldp+11,(((2U == (7U & (IData)(vlSelf->top__DOT__alu_ctr))) 
                            & vlSelf->top__DOT__u0_riscv_alu__DOT__result_set)));
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__rs1_val),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__rd_val),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__alu_a),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__alu_b),32);
    bufp->fullIData(oldp+16,((vlSelf->top__DOT__alu_a 
                              ^ vlSelf->top__DOT__alu_b)),32);
    bufp->fullIData(oldp+17,((vlSelf->top__DOT__alu_a 
                              & vlSelf->top__DOT__alu_b)),32);
    bufp->fullIData(oldp+18,((vlSelf->top__DOT__alu_a 
                              | vlSelf->top__DOT__alu_b)),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_add),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_set),32);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r),32);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o));
    bufp->fullIData(oldp+35,(((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                               ? vlSelf->top__DOT__imm
                               : 4U)),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    bufp->fullBit(oldp+68,(vlSelf->clk));
    bufp->fullBit(oldp+69,(vlSelf->rst));
    bufp->fullIData(oldp+70,(vlSelf->inst_i),32);
    bufp->fullIData(oldp+71,(vlSelf->inst_addr_o),32);
    bufp->fullBit(oldp+72,(vlSelf->inst_ce_o));
    bufp->fullIData(oldp+73,(vlSelf->data_i),32);
    bufp->fullBit(oldp+74,(vlSelf->data_we_o));
    bufp->fullBit(oldp+75,(vlSelf->data_ce_o));
    bufp->fullIData(oldp+76,(vlSelf->data_addr_o),32);
    bufp->fullIData(oldp+77,(vlSelf->data_o),32);
    bufp->fullBit(oldp+78,(vlSelf->mem_to_reg_o));
    bufp->fullIData(oldp+79,((((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                                ? vlSelf->top__DOT__imm
                                : 4U) + ((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
                                          ? vlSelf->top__DOT__rs1_val
                                          : vlSelf->top__DOT__pc))),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__pc),32);
    bufp->fullBit(oldp+81,((0U == vlSelf->data_addr_o)));
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->inst_i 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->inst_i 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->inst_i 
                                       >> 7U))),5);
    bufp->fullIData(oldp+85,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst_i 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+86,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst_i 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst_i 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+87,((((- (IData)((vlSelf->inst_i 
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
    bufp->fullIData(oldp+88,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst_i) 
                                            | ((0x800U 
                                                & (vlSelf->inst_i 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst_i 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+89,((0xfffff000U & vlSelf->inst_i)),32);
    bufp->fullIData(oldp+90,(((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
                               ? vlSelf->top__DOT__rs1_val
                               : vlSelf->top__DOT__pc)),32);
}
