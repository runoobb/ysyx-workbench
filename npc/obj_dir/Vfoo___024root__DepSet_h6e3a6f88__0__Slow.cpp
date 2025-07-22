// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfoo.h for the primary calling header

#include "verilated.h"

#include "Vfoo___024root.h"

VL_ATTR_COLD void Vfoo___024root___eval_static(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfoo___024root___eval_initial__TOP(Vfoo___024root* vlSelf);

VL_ATTR_COLD void Vfoo___024root___eval_initial(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_initial\n"); );
    // Body
    Vfoo___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vfoo___024root___eval_initial__TOP(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Fuck yourself\n");
    VL_FINISH_MT("vsrc/foo.v", 4, "");
}

VL_ATTR_COLD void Vfoo___024root___eval_final(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vfoo___024root___eval_settle(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfoo___024root___dump_triggers__act(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfoo___024root___dump_triggers__nba(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfoo___024root___ctor_var_reset(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___ctor_var_reset\n"); );
}
