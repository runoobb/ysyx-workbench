// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfoo.h for the primary calling header

#ifndef VERILATED_VFOO___024ROOT_H_
#define VERILATED_VFOO___024ROOT_H_  // guard

#include "verilated.h"

class Vfoo__Syms;

class Vfoo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfoo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfoo___024root(Vfoo__Syms* symsp, const char* v__name);
    ~Vfoo___024root();
    VL_UNCOPYABLE(Vfoo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
