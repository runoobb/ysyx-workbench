// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __Vm_mtaskstate_10(2U)
    , __Vm_mtaskstate_11(1U)
    , __Vm_mtaskstate_7(1U)
    , __Vm_mtaskstate_5(1U)
    , __Vm_mtaskstate_1(1U)
    , __Vm_mtaskstate_12(1U)
    , __Vm_mtaskstate_final__nba(2U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
