// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfoo.h for the primary calling header

#include "verilated.h"

#include "Vfoo__Syms.h"
#include "Vfoo___024root.h"

void Vfoo___024root___ctor_var_reset(Vfoo___024root* vlSelf);

Vfoo___024root::Vfoo___024root(Vfoo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfoo___024root___ctor_var_reset(this);
}

void Vfoo___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfoo___024root::~Vfoo___024root() {
}
