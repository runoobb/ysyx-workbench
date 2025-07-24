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
                     | vlSelf->__Vm_traceActivity[4U]))) {
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
        bufp->chgIData(oldp+35,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[31]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__w_regs[0]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__w_regs[1]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__w_regs[2]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__w_regs[3]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__w_regs[4]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__w_regs[5]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__w_regs[6]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__w_regs[7]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__w_regs[8]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__w_regs[9]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__w_regs[10]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__w_regs[11]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__w_regs[12]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__w_regs[13]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__w_regs[14]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__w_regs[15]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__w_regs[16]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__w_regs[17]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__w_regs[18]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__w_regs[19]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__w_regs[20]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__w_regs[21]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__w_regs[22]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__w_regs[23]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__w_regs[24]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__w_regs[25]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__w_regs[26]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__w_regs[27]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__w_regs[28]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__w_regs[29]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__w_regs[30]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__w_regs[31]),32);
    }
    bufp->chgBit(oldp+131,(vlSelf->clk));
    bufp->chgBit(oldp+132,(vlSelf->rst));
    bufp->chgIData(oldp+133,(vlSelf->inst_i),32);
    bufp->chgIData(oldp+134,(vlSelf->inst_addr_o),32);
    bufp->chgBit(oldp+135,(vlSelf->inst_ce_o));
    bufp->chgIData(oldp+136,(vlSelf->data_i),32);
    bufp->chgBit(oldp+137,(vlSelf->data_we_o));
    bufp->chgBit(oldp+138,(vlSelf->data_ce_o));
    bufp->chgIData(oldp+139,(vlSelf->data_addr_o),32);
    bufp->chgIData(oldp+140,(vlSelf->data_o),32);
    bufp->chgBit(oldp+141,(vlSelf->mem_to_reg_o));
    bufp->chgIData(oldp+142,((((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                                ? vlSelf->top__DOT__imm
                                : 4U) + ((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
                                          ? vlSelf->top__DOT__rs1_val
                                          : vlSelf->top__DOT__pc))),32);
    bufp->chgIData(oldp+143,(vlSelf->top__DOT__pc),32);
    bufp->chgBit(oldp+144,((0U == vlSelf->data_addr_o)));
    bufp->chgCData(oldp+145,((0x1fU & (vlSelf->inst_i 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+146,((0x1fU & (vlSelf->inst_i 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+147,((0x1fU & (vlSelf->inst_i 
                                       >> 7U))),5);
    bufp->chgIData(oldp+148,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst_i 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+149,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst_i 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst_i 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+150,((((- (IData)((vlSelf->inst_i 
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
    bufp->chgIData(oldp+151,((((- (IData)((vlSelf->inst_i 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst_i) 
                                            | ((0x800U 
                                                & (vlSelf->inst_i 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst_i 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+152,((0xfffff000U & vlSelf->inst_i)),32);
    bufp->chgIData(oldp+153,(((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
