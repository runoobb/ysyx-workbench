// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__ext_op),3);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__reg_wr));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__branch_op),3);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__mem_to_reg));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__mem_wr));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__mem_op),3);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__alu_asrc));
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__alu_bsrc),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__alu_ctr),4);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__imm),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+10,(((2U == (7U & (IData)(vlSelf->top__DOT__alu_ctr))) 
                               & vlSelf->top__DOT__u0_riscv_alu__DOT__result_set)));
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__rs1_val),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__rd_val),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__alu_a),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__alu_b),32);
        bufp->chgIData(oldp+15,((vlSelf->top__DOT__alu_a 
                                 ^ vlSelf->top__DOT__alu_b)),32);
        bufp->chgIData(oldp+16,((vlSelf->top__DOT__alu_a 
                                 & vlSelf->top__DOT__alu_b)),32);
        bufp->chgIData(oldp+17,((vlSelf->top__DOT__alu_a 
                                 | vlSelf->top__DOT__alu_b)),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_add),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__u0_riscv_alu__DOT__result_set),32);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r),32);
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o));
        bufp->chgIData(oldp+34,(((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                                  ? vlSelf->top__DOT__imm
                                  : 4U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
    bufp->chgBit(oldp+68,(vlSelf->rst));
    bufp->chgIData(oldp+69,(vlSelf->inst_i),32);
    bufp->chgIData(oldp+70,(vlSelf->inst_addr_o),32);
    bufp->chgBit(oldp+71,(vlSelf->inst_ce_o));
    bufp->chgIData(oldp+72,(vlSelf->data_i),32);
    bufp->chgBit(oldp+73,(vlSelf->data_we_o));
    bufp->chgBit(oldp+74,(vlSelf->data_ce_o));
    bufp->chgIData(oldp+75,(vlSelf->data_addr_o),32);
    bufp->chgIData(oldp+76,(vlSelf->data_o),32);
    bufp->chgBit(oldp+77,(vlSelf->mem_to_reg_o));
    bufp->chgIData(oldp+78,((((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                               ? vlSelf->top__DOT__imm
                               : 4U) + ((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
                                         ? vlSelf->top__DOT__rs1_val
                                         : vlSelf->top__DOT__pc))),32);
    bufp->chgIData(oldp+79,(vlSelf->top__DOT__pc),32);
    bufp->chgBit(oldp+80,((0U == vlSelf->data_addr_o)));
    bufp->chgCData(oldp+81,((0x1fU & (vlSelf->inst_i 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+82,((0x1fU & (vlSelf->inst_i 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+83,((0x1fU & (vlSelf->inst_i 
                                      >> 7U))),5);
    bufp->chgIData(oldp+84,((((- (IData)((vlSelf->inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->inst_i 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+85,((((- (IData)((vlSelf->inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->inst_i 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->inst_i 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+86,((((- (IData)((vlSelf->inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelf->inst_i 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelf->inst_i 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelf->inst_i 
                                                   >> 7U)))))),32);
    bufp->chgIData(oldp+87,((((- (IData)((vlSelf->inst_i 
                                          >> 0x1fU))) 
                              << 0x14U) | ((0xff000U 
                                            & vlSelf->inst_i) 
                                           | ((0x800U 
                                               & (vlSelf->inst_i 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->inst_i 
                                                    >> 0x14U)))))),32);
    bufp->chgIData(oldp+88,((0xfffff000U & vlSelf->inst_i)),32);
    bufp->chgIData(oldp+89,(((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
                              ? vlSelf->top__DOT__rs1_val
                              : vlSelf->top__DOT__pc)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
