// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfoo.h for the primary calling header

#include "verilated.h"

#include "Vfoo__Syms.h"
#include "Vfoo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfoo___024root___dump_triggers__act(Vfoo___024root* vlSelf);
#endif  // VL_DEBUG

void Vfoo___024root___eval_triggers__act(Vfoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfoo___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfoo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
