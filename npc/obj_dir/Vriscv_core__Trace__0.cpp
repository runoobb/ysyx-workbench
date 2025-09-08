// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vriscv_core__Syms.h"


void Vriscv_core___024root__trace_chg_sub_0(Vriscv_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vriscv_core___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_core___024root*>(voidSelf);
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_core___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_core___024root__trace_chg_sub_0(Vriscv_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o),5);
        bufp->chgCData(oldp+1,(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o),5);
        bufp->chgBit(oldp+2,(vlSelf->riscv_core__DOT__alu_asrc_id_ex_o));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+3,(vlSelf->riscv_core__DOT__opcode_id_ex_o),5);
        bufp->chgCData(oldp+4,(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o),2);
        bufp->chgBit(oldp+5,(vlSelf->riscv_core__DOT__reg_wr_ex_mem_o));
        bufp->chgCData(oldp+6,(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o),5);
        bufp->chgBit(oldp+7,(vlSelf->riscv_core__DOT__mem_to_reg_mem_wb_o));
        bufp->chgIData(oldp+8,(vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_w),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+9,(vlSelf->riscv_core__DOT__inst_if_id_o),32);
        bufp->chgIData(oldp+10,(vlSelf->riscv_core__DOT__rd_val),32);
        bufp->chgCData(oldp+11,(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o),4);
        bufp->chgIData(oldp+12,(vlSelf->riscv_core__DOT__pc_id_ex_o),32);
        bufp->chgIData(oldp+13,(vlSelf->riscv_core__DOT__imm_id_ex_o),32);
        bufp->chgBit(oldp+14,(vlSelf->riscv_core__DOT__mem_to_reg_ex_mem_o));
        bufp->chgBit(oldp+15,(vlSelf->riscv_core__DOT__mem_wr_ex_mem_o));
        bufp->chgCData(oldp+16,(vlSelf->riscv_core__DOT__mem_op_ex_mem_o),3);
        bufp->chgIData(oldp+17,(vlSelf->riscv_core__DOT__rs1_val_ex_mem_o),32);
        bufp->chgIData(oldp+18,(vlSelf->riscv_core__DOT__rs2_val_ex_mem_o),32);
        bufp->chgIData(oldp+19,(vlSelf->riscv_core__DOT__pc_ex_mem_o),32);
        bufp->chgIData(oldp+20,(vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o),32);
        bufp->chgBit(oldp+21,(vlSelf->riscv_core__DOT__zero_ex_mem_o));
        bufp->chgBit(oldp+22,(vlSelf->riscv_core__DOT__less_ex_mem_o));
        bufp->chgIData(oldp+23,(vlSelf->riscv_core__DOT__imm_ex_mem_o),32);
        bufp->chgBit(oldp+24,(vlSelf->riscv_core__DOT__reg_wr_mem_wb_o));
        bufp->chgIData(oldp+25,(vlSelf->riscv_core__DOT__alu_p_val_mem_wb_o),32);
        bufp->chgIData(oldp+26,(vlSelf->riscv_core__DOT__mem_rd_val_mem_wb_o),32);
        bufp->chgCData(oldp+27,(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 7U))),5);
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                          >> 2U))),5);
        bufp->chgBit(oldp+32,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                               & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0xfU)) 
                                  == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))));
        bufp->chgBit(oldp+33,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                               & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 0x14U)) 
                                   == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                  & (4U != (0x1fU & 
                                            (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 2U)))))));
        bufp->chgIData(oldp+35,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+36,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+37,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
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
        bufp->chgIData(oldp+38,((((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->riscv_core__DOT__inst_if_id_o) 
                                               | ((0x800U 
                                                   & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+39,((0xfffff000U & vlSelf->riscv_core__DOT__inst_if_id_o)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+40,(vlSelf->riscv_core__DOT__w_regs[0]),32);
        bufp->chgIData(oldp+41,(vlSelf->riscv_core__DOT__w_regs[1]),32);
        bufp->chgIData(oldp+42,(vlSelf->riscv_core__DOT__w_regs[2]),32);
        bufp->chgIData(oldp+43,(vlSelf->riscv_core__DOT__w_regs[3]),32);
        bufp->chgIData(oldp+44,(vlSelf->riscv_core__DOT__w_regs[4]),32);
        bufp->chgIData(oldp+45,(vlSelf->riscv_core__DOT__w_regs[5]),32);
        bufp->chgIData(oldp+46,(vlSelf->riscv_core__DOT__w_regs[6]),32);
        bufp->chgIData(oldp+47,(vlSelf->riscv_core__DOT__w_regs[7]),32);
        bufp->chgIData(oldp+48,(vlSelf->riscv_core__DOT__w_regs[8]),32);
        bufp->chgIData(oldp+49,(vlSelf->riscv_core__DOT__w_regs[9]),32);
        bufp->chgIData(oldp+50,(vlSelf->riscv_core__DOT__w_regs[10]),32);
        bufp->chgIData(oldp+51,(vlSelf->riscv_core__DOT__w_regs[11]),32);
        bufp->chgIData(oldp+52,(vlSelf->riscv_core__DOT__w_regs[12]),32);
        bufp->chgIData(oldp+53,(vlSelf->riscv_core__DOT__w_regs[13]),32);
        bufp->chgIData(oldp+54,(vlSelf->riscv_core__DOT__w_regs[14]),32);
        bufp->chgIData(oldp+55,(vlSelf->riscv_core__DOT__w_regs[15]),32);
        bufp->chgIData(oldp+56,(vlSelf->riscv_core__DOT__w_regs[16]),32);
        bufp->chgIData(oldp+57,(vlSelf->riscv_core__DOT__w_regs[17]),32);
        bufp->chgIData(oldp+58,(vlSelf->riscv_core__DOT__w_regs[18]),32);
        bufp->chgIData(oldp+59,(vlSelf->riscv_core__DOT__w_regs[19]),32);
        bufp->chgIData(oldp+60,(vlSelf->riscv_core__DOT__w_regs[20]),32);
        bufp->chgIData(oldp+61,(vlSelf->riscv_core__DOT__w_regs[21]),32);
        bufp->chgIData(oldp+62,(vlSelf->riscv_core__DOT__w_regs[22]),32);
        bufp->chgIData(oldp+63,(vlSelf->riscv_core__DOT__w_regs[23]),32);
        bufp->chgIData(oldp+64,(vlSelf->riscv_core__DOT__w_regs[24]),32);
        bufp->chgIData(oldp+65,(vlSelf->riscv_core__DOT__w_regs[25]),32);
        bufp->chgIData(oldp+66,(vlSelf->riscv_core__DOT__w_regs[26]),32);
        bufp->chgIData(oldp+67,(vlSelf->riscv_core__DOT__w_regs[27]),32);
        bufp->chgIData(oldp+68,(vlSelf->riscv_core__DOT__w_regs[28]),32);
        bufp->chgIData(oldp+69,(vlSelf->riscv_core__DOT__w_regs[29]),32);
        bufp->chgIData(oldp+70,(vlSelf->riscv_core__DOT__w_regs[30]),32);
        bufp->chgIData(oldp+71,(vlSelf->riscv_core__DOT__w_regs[31]),32);
        bufp->chgIData(oldp+72,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0]),32);
        bufp->chgIData(oldp+73,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[1]),32);
        bufp->chgIData(oldp+74,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[2]),32);
        bufp->chgIData(oldp+75,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[3]),32);
        bufp->chgIData(oldp+76,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[4]),32);
        bufp->chgIData(oldp+77,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[5]),32);
        bufp->chgIData(oldp+78,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[6]),32);
        bufp->chgIData(oldp+79,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[7]),32);
        bufp->chgIData(oldp+80,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[8]),32);
        bufp->chgIData(oldp+81,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[9]),32);
        bufp->chgIData(oldp+82,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[10]),32);
        bufp->chgIData(oldp+83,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[11]),32);
        bufp->chgIData(oldp+84,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[12]),32);
        bufp->chgIData(oldp+85,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[13]),32);
        bufp->chgIData(oldp+86,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[14]),32);
        bufp->chgIData(oldp+87,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[15]),32);
        bufp->chgIData(oldp+88,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[16]),32);
        bufp->chgIData(oldp+89,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[17]),32);
        bufp->chgIData(oldp+90,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[18]),32);
        bufp->chgIData(oldp+91,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[19]),32);
        bufp->chgIData(oldp+92,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[20]),32);
        bufp->chgIData(oldp+93,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[21]),32);
        bufp->chgIData(oldp+94,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[22]),32);
        bufp->chgIData(oldp+95,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[23]),32);
        bufp->chgIData(oldp+96,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[24]),32);
        bufp->chgIData(oldp+97,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[25]),32);
        bufp->chgIData(oldp+98,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[26]),32);
        bufp->chgIData(oldp+99,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[27]),32);
        bufp->chgIData(oldp+100,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[28]),32);
        bufp->chgIData(oldp+101,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[29]),32);
        bufp->chgIData(oldp+102,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[30]),32);
        bufp->chgIData(oldp+103,(vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[31]),32);
        bufp->chgIData(oldp+104,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[4]),32);
        bufp->chgIData(oldp+109,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[5]),32);
        bufp->chgIData(oldp+110,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[6]),32);
        bufp->chgIData(oldp+111,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[7]),32);
        bufp->chgIData(oldp+112,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[8]),32);
        bufp->chgIData(oldp+113,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[9]),32);
        bufp->chgIData(oldp+114,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[10]),32);
        bufp->chgIData(oldp+115,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[11]),32);
        bufp->chgIData(oldp+116,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[12]),32);
        bufp->chgIData(oldp+117,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[13]),32);
        bufp->chgIData(oldp+118,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[14]),32);
        bufp->chgIData(oldp+119,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[15]),32);
        bufp->chgIData(oldp+120,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[16]),32);
        bufp->chgIData(oldp+121,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[17]),32);
        bufp->chgIData(oldp+122,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[18]),32);
        bufp->chgIData(oldp+123,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[19]),32);
        bufp->chgIData(oldp+124,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[20]),32);
        bufp->chgIData(oldp+125,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[21]),32);
        bufp->chgIData(oldp+126,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[22]),32);
        bufp->chgIData(oldp+127,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[23]),32);
        bufp->chgIData(oldp+128,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[24]),32);
        bufp->chgIData(oldp+129,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[25]),32);
        bufp->chgIData(oldp+130,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[26]),32);
        bufp->chgIData(oldp+131,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[27]),32);
        bufp->chgIData(oldp+132,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[28]),32);
        bufp->chgIData(oldp+133,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[29]),32);
        bufp->chgIData(oldp+134,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[30]),32);
        bufp->chgIData(oldp+135,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+136,(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w),3);
        bufp->chgBit(oldp+137,(vlSelf->riscv_core__DOT__u0_idu__DOT__memtoreg_w));
        bufp->chgBit(oldp+138,(vlSelf->riscv_core__DOT__u0_idu__DOT__memwr_w));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+139,(vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w),3);
        bufp->chgBit(oldp+140,(vlSelf->riscv_core__DOT__u0_idu__DOT__alua_src_w));
        bufp->chgCData(oldp+141,(vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+142,(vlSelf->riscv_core__DOT__data_hazard_stall));
        bufp->chgBit(oldp+143,(vlSelf->riscv_core__DOT__branch_taken));
        bufp->chgIData(oldp+144,(vlSelf->riscv_core__DOT__pc_if_id_o),32);
        bufp->chgBit(oldp+145,(vlSelf->riscv_core__DOT__reg_wr_id_ex_o));
        bufp->chgCData(oldp+146,(vlSelf->riscv_core__DOT__branch_op_id_ex_o),3);
        bufp->chgBit(oldp+147,(vlSelf->riscv_core__DOT__mem_to_reg_id_ex_o));
        bufp->chgBit(oldp+148,(vlSelf->riscv_core__DOT__mem_wr_id_ex_o));
        bufp->chgCData(oldp+149,(vlSelf->riscv_core__DOT__mem_op_id_ex_o),3);
        bufp->chgCData(oldp+150,(vlSelf->riscv_core__DOT__rd_idx_id_ex_o),5);
        bufp->chgCData(oldp+151,(vlSelf->riscv_core__DOT__branch_op_ex_mem_o),3);
        bufp->chgIData(oldp+152,(vlSelf->riscv_core__DOT__rs1_val_alu_i),32);
        bufp->chgIData(oldp+153,(vlSelf->riscv_core__DOT__rs2_val_alu_i),32);
        bufp->chgIData(oldp+154,(vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i),32);
        bufp->chgIData(oldp+155,(vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i),32);
        bufp->chgBit(oldp+156,((0U == vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w)));
        bufp->chgIData(oldp+157,(vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w),32);
        bufp->chgIData(oldp+158,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                                  ^ vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
        bufp->chgIData(oldp+159,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                                  & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
        bufp->chgIData(oldp+160,((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                                  | vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)),32);
        bufp->chgIData(oldp+161,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl),32);
        bufp->chgIData(oldp+162,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr),32);
        bufp->chgIData(oldp+163,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub),32);
        bufp->chgIData(oldp+164,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add),32);
        bufp->chgIData(oldp+165,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set),32);
        bufp->chgSData(oldp+166,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+167,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+168,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+169,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+170,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+171,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+172,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+173,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+174,(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r),32);
        bufp->chgBit(oldp+175,(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1));
        bufp->chgBit(oldp+176,(vlSelf->riscv_core__DOT____Vcellinp__u0_idu__flush));
        bufp->chgBit(oldp+177,(vlSelf->riscv_core__DOT__u0_idu__DOT__regwr_w));
    }
    bufp->chgBit(oldp+178,(vlSelf->clk));
    bufp->chgBit(oldp+179,(vlSelf->rst));
    bufp->chgIData(oldp+180,(vlSelf->inst_i),32);
    bufp->chgIData(oldp+181,(vlSelf->inst_addr_o),32);
    bufp->chgBit(oldp+182,(vlSelf->inst_ce_o));
    bufp->chgIData(oldp+183,(vlSelf->data_i),32);
    bufp->chgBit(oldp+184,(vlSelf->data_we_o));
    bufp->chgBit(oldp+185,(vlSelf->data_ce_o));
    bufp->chgIData(oldp+186,(vlSelf->data_addr_o),32);
    bufp->chgIData(oldp+187,(vlSelf->data_o),32);
    bufp->chgIData(oldp+188,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                             [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+189,(vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                             [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+190,(vlSelf->riscv_core__DOT__rs1_val_id_ex_o),32);
    bufp->chgIData(oldp+191,(vlSelf->riscv_core__DOT__rs2_val_id_ex_o),32);
    bufp->chgIData(oldp+192,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                               & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                            >> 0xfU)) 
                                  == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)))
                               ? vlSelf->riscv_core__DOT__rd_val
                               : vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0xfU))])),32);
    bufp->chgIData(oldp+193,((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                               & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 0x14U)) 
                                   == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                  & (4U != (0x1fU & 
                                            (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 2U)))))
                               ? vlSelf->riscv_core__DOT__rd_val
                               : vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
                              [(0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                         >> 0x14U))])),32);
    bufp->chgCData(oldp+194,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                & ((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                             >> 0xfU)) 
                                   == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o))) 
                               << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))),3);
    bufp->chgCData(oldp+195,(((((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                                & (((0x1fU & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)) 
                                   & (4U != (0x1fU 
                                             & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                >> 2U))))) 
                               << 2U) | (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))),3);
    bufp->chgBit(oldp+196,(((2U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o))) 
                            & vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set)));
    bufp->chgBit(oldp+197,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                            & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1)) 
                               & ((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                  == (IData)(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o))))));
    bufp->chgBit(oldp+198,(((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                            & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1)) 
                               & (((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                                   == (IData)(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o)) 
                                  & (4U != (IData)(vlSelf->riscv_core__DOT__opcode_id_ex_o)))))));
    bufp->chgIData(oldp+199,(((0U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                               ? (((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->riscv_core__DOT__inst_if_id_o 
                                               >> 0x14U))
                               : ((2U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                   ? (((- (IData)((vlSelf->riscv_core__DOT__inst_if_id_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->riscv_core__DOT__inst_if_id_o 
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
                                           : ((1U == (IData)(vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w))
                                               ? (0xfffff000U 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)
                                               : 0U)))))),32);
    bufp->chgCData(oldp+200,(vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w),3);
    bufp->chgCData(oldp+201,(vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w),4);
    bufp->chgIData(oldp+202,(((1U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
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
                                           : ((6U == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                               ? (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                                  + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                               : ((7U 
                                                   == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o))
                                                   ? 
                                                  (vlSelf->riscv_core__DOT__pc_ex_mem_o 
                                                   + vlSelf->riscv_core__DOT__imm_ex_mem_o)
                                                   : 0U))))))),32);
}

void Vriscv_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root__trace_cleanup\n"); );
    // Init
    Vriscv_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_core___024root*>(voidSelf);
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
