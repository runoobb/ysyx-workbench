// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void get_dut_regs(const svLogicVecVal* dut_pc, const svLogicVecVal* dut_x0, const svLogicVecVal* dut_x1, const svLogicVecVal* dut_x2, const svLogicVecVal* dut_x3, const svLogicVecVal* dut_x4, const svLogicVecVal* dut_x5, const svLogicVecVal* dut_x6, const svLogicVecVal* dut_x7, const svLogicVecVal* dut_x8, const svLogicVecVal* dut_x9, const svLogicVecVal* dut_x10, const svLogicVecVal* dut_x11, const svLogicVecVal* dut_x12, const svLogicVecVal* dut_x13, const svLogicVecVal* dut_x14, const svLogicVecVal* dut_x15, const svLogicVecVal* dut_x16, const svLogicVecVal* dut_x17, const svLogicVecVal* dut_x18, const svLogicVecVal* dut_x19, const svLogicVecVal* dut_x20, const svLogicVecVal* dut_x21, const svLogicVecVal* dut_x22, const svLogicVecVal* dut_x23, const svLogicVecVal* dut_x24, const svLogicVecVal* dut_x25, const svLogicVecVal* dut_x26, const svLogicVecVal* dut_x27, const svLogicVecVal* dut_x28, const svLogicVecVal* dut_x29, const svLogicVecVal* dut_x30, const svLogicVecVal* dut_x31);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP(IData/*31:0*/ dut_pc, IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP\n"); );
    // Body
    svLogicVecVal dut_pc__Vcvt[1];
    for (size_t dut_pc__Vidx = 0; dut_pc__Vidx < 1; ++dut_pc__Vidx) VL_SET_SVLV_I(32, dut_pc__Vcvt + 1 * dut_pc__Vidx, dut_pc);
    svLogicVecVal dut_x0__Vcvt[1];
    for (size_t dut_x0__Vidx = 0; dut_x0__Vidx < 1; ++dut_x0__Vidx) VL_SET_SVLV_I(32, dut_x0__Vcvt + 1 * dut_x0__Vidx, dut_x0);
    svLogicVecVal dut_x1__Vcvt[1];
    for (size_t dut_x1__Vidx = 0; dut_x1__Vidx < 1; ++dut_x1__Vidx) VL_SET_SVLV_I(32, dut_x1__Vcvt + 1 * dut_x1__Vidx, dut_x1);
    svLogicVecVal dut_x2__Vcvt[1];
    for (size_t dut_x2__Vidx = 0; dut_x2__Vidx < 1; ++dut_x2__Vidx) VL_SET_SVLV_I(32, dut_x2__Vcvt + 1 * dut_x2__Vidx, dut_x2);
    svLogicVecVal dut_x3__Vcvt[1];
    for (size_t dut_x3__Vidx = 0; dut_x3__Vidx < 1; ++dut_x3__Vidx) VL_SET_SVLV_I(32, dut_x3__Vcvt + 1 * dut_x3__Vidx, dut_x3);
    svLogicVecVal dut_x4__Vcvt[1];
    for (size_t dut_x4__Vidx = 0; dut_x4__Vidx < 1; ++dut_x4__Vidx) VL_SET_SVLV_I(32, dut_x4__Vcvt + 1 * dut_x4__Vidx, dut_x4);
    svLogicVecVal dut_x5__Vcvt[1];
    for (size_t dut_x5__Vidx = 0; dut_x5__Vidx < 1; ++dut_x5__Vidx) VL_SET_SVLV_I(32, dut_x5__Vcvt + 1 * dut_x5__Vidx, dut_x5);
    svLogicVecVal dut_x6__Vcvt[1];
    for (size_t dut_x6__Vidx = 0; dut_x6__Vidx < 1; ++dut_x6__Vidx) VL_SET_SVLV_I(32, dut_x6__Vcvt + 1 * dut_x6__Vidx, dut_x6);
    svLogicVecVal dut_x7__Vcvt[1];
    for (size_t dut_x7__Vidx = 0; dut_x7__Vidx < 1; ++dut_x7__Vidx) VL_SET_SVLV_I(32, dut_x7__Vcvt + 1 * dut_x7__Vidx, dut_x7);
    svLogicVecVal dut_x8__Vcvt[1];
    for (size_t dut_x8__Vidx = 0; dut_x8__Vidx < 1; ++dut_x8__Vidx) VL_SET_SVLV_I(32, dut_x8__Vcvt + 1 * dut_x8__Vidx, dut_x8);
    svLogicVecVal dut_x9__Vcvt[1];
    for (size_t dut_x9__Vidx = 0; dut_x9__Vidx < 1; ++dut_x9__Vidx) VL_SET_SVLV_I(32, dut_x9__Vcvt + 1 * dut_x9__Vidx, dut_x9);
    svLogicVecVal dut_x10__Vcvt[1];
    for (size_t dut_x10__Vidx = 0; dut_x10__Vidx < 1; ++dut_x10__Vidx) VL_SET_SVLV_I(32, dut_x10__Vcvt + 1 * dut_x10__Vidx, dut_x10);
    svLogicVecVal dut_x11__Vcvt[1];
    for (size_t dut_x11__Vidx = 0; dut_x11__Vidx < 1; ++dut_x11__Vidx) VL_SET_SVLV_I(32, dut_x11__Vcvt + 1 * dut_x11__Vidx, dut_x11);
    svLogicVecVal dut_x12__Vcvt[1];
    for (size_t dut_x12__Vidx = 0; dut_x12__Vidx < 1; ++dut_x12__Vidx) VL_SET_SVLV_I(32, dut_x12__Vcvt + 1 * dut_x12__Vidx, dut_x12);
    svLogicVecVal dut_x13__Vcvt[1];
    for (size_t dut_x13__Vidx = 0; dut_x13__Vidx < 1; ++dut_x13__Vidx) VL_SET_SVLV_I(32, dut_x13__Vcvt + 1 * dut_x13__Vidx, dut_x13);
    svLogicVecVal dut_x14__Vcvt[1];
    for (size_t dut_x14__Vidx = 0; dut_x14__Vidx < 1; ++dut_x14__Vidx) VL_SET_SVLV_I(32, dut_x14__Vcvt + 1 * dut_x14__Vidx, dut_x14);
    svLogicVecVal dut_x15__Vcvt[1];
    for (size_t dut_x15__Vidx = 0; dut_x15__Vidx < 1; ++dut_x15__Vidx) VL_SET_SVLV_I(32, dut_x15__Vcvt + 1 * dut_x15__Vidx, dut_x15);
    svLogicVecVal dut_x16__Vcvt[1];
    for (size_t dut_x16__Vidx = 0; dut_x16__Vidx < 1; ++dut_x16__Vidx) VL_SET_SVLV_I(32, dut_x16__Vcvt + 1 * dut_x16__Vidx, dut_x16);
    svLogicVecVal dut_x17__Vcvt[1];
    for (size_t dut_x17__Vidx = 0; dut_x17__Vidx < 1; ++dut_x17__Vidx) VL_SET_SVLV_I(32, dut_x17__Vcvt + 1 * dut_x17__Vidx, dut_x17);
    svLogicVecVal dut_x18__Vcvt[1];
    for (size_t dut_x18__Vidx = 0; dut_x18__Vidx < 1; ++dut_x18__Vidx) VL_SET_SVLV_I(32, dut_x18__Vcvt + 1 * dut_x18__Vidx, dut_x18);
    svLogicVecVal dut_x19__Vcvt[1];
    for (size_t dut_x19__Vidx = 0; dut_x19__Vidx < 1; ++dut_x19__Vidx) VL_SET_SVLV_I(32, dut_x19__Vcvt + 1 * dut_x19__Vidx, dut_x19);
    svLogicVecVal dut_x20__Vcvt[1];
    for (size_t dut_x20__Vidx = 0; dut_x20__Vidx < 1; ++dut_x20__Vidx) VL_SET_SVLV_I(32, dut_x20__Vcvt + 1 * dut_x20__Vidx, dut_x20);
    svLogicVecVal dut_x21__Vcvt[1];
    for (size_t dut_x21__Vidx = 0; dut_x21__Vidx < 1; ++dut_x21__Vidx) VL_SET_SVLV_I(32, dut_x21__Vcvt + 1 * dut_x21__Vidx, dut_x21);
    svLogicVecVal dut_x22__Vcvt[1];
    for (size_t dut_x22__Vidx = 0; dut_x22__Vidx < 1; ++dut_x22__Vidx) VL_SET_SVLV_I(32, dut_x22__Vcvt + 1 * dut_x22__Vidx, dut_x22);
    svLogicVecVal dut_x23__Vcvt[1];
    for (size_t dut_x23__Vidx = 0; dut_x23__Vidx < 1; ++dut_x23__Vidx) VL_SET_SVLV_I(32, dut_x23__Vcvt + 1 * dut_x23__Vidx, dut_x23);
    svLogicVecVal dut_x24__Vcvt[1];
    for (size_t dut_x24__Vidx = 0; dut_x24__Vidx < 1; ++dut_x24__Vidx) VL_SET_SVLV_I(32, dut_x24__Vcvt + 1 * dut_x24__Vidx, dut_x24);
    svLogicVecVal dut_x25__Vcvt[1];
    for (size_t dut_x25__Vidx = 0; dut_x25__Vidx < 1; ++dut_x25__Vidx) VL_SET_SVLV_I(32, dut_x25__Vcvt + 1 * dut_x25__Vidx, dut_x25);
    svLogicVecVal dut_x26__Vcvt[1];
    for (size_t dut_x26__Vidx = 0; dut_x26__Vidx < 1; ++dut_x26__Vidx) VL_SET_SVLV_I(32, dut_x26__Vcvt + 1 * dut_x26__Vidx, dut_x26);
    svLogicVecVal dut_x27__Vcvt[1];
    for (size_t dut_x27__Vidx = 0; dut_x27__Vidx < 1; ++dut_x27__Vidx) VL_SET_SVLV_I(32, dut_x27__Vcvt + 1 * dut_x27__Vidx, dut_x27);
    svLogicVecVal dut_x28__Vcvt[1];
    for (size_t dut_x28__Vidx = 0; dut_x28__Vidx < 1; ++dut_x28__Vidx) VL_SET_SVLV_I(32, dut_x28__Vcvt + 1 * dut_x28__Vidx, dut_x28);
    svLogicVecVal dut_x29__Vcvt[1];
    for (size_t dut_x29__Vidx = 0; dut_x29__Vidx < 1; ++dut_x29__Vidx) VL_SET_SVLV_I(32, dut_x29__Vcvt + 1 * dut_x29__Vidx, dut_x29);
    svLogicVecVal dut_x30__Vcvt[1];
    for (size_t dut_x30__Vidx = 0; dut_x30__Vidx < 1; ++dut_x30__Vidx) VL_SET_SVLV_I(32, dut_x30__Vcvt + 1 * dut_x30__Vidx, dut_x30);
    svLogicVecVal dut_x31__Vcvt[1];
    for (size_t dut_x31__Vidx = 0; dut_x31__Vidx < 1; ++dut_x31__Vidx) VL_SET_SVLV_I(32, dut_x31__Vcvt + 1 * dut_x31__Vidx, dut_x31);
    get_dut_regs(dut_pc__Vcvt, dut_x0__Vcvt, dut_x1__Vcvt, dut_x2__Vcvt, dut_x3__Vcvt, dut_x4__Vcvt, dut_x5__Vcvt, dut_x6__Vcvt, dut_x7__Vcvt, dut_x8__Vcvt, dut_x9__Vcvt, dut_x10__Vcvt, dut_x11__Vcvt, dut_x12__Vcvt, dut_x13__Vcvt, dut_x14__Vcvt, dut_x15__Vcvt, dut_x16__Vcvt, dut_x17__Vcvt, dut_x18__Vcvt, dut_x19__Vcvt, dut_x20__Vcvt, dut_x21__Vcvt, dut_x22__Vcvt, dut_x23__Vcvt, dut_x24__Vcvt, dut_x25__Vcvt, dut_x26__Vcvt, dut_x27__Vcvt, dut_x28__Vcvt, dut_x29__Vcvt, dut_x30__Vcvt, dut_x31__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vtop___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vtop___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vtop___024root____Vthread__nba__1(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);

void Vtop___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vthread__nba__0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(4);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_6.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_9.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(1);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);

void Vtop___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vthread__nba__1\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_9.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
