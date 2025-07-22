// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFOO__SYMS_H_
#define VERILATED_VFOO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfoo.h"

// INCLUDE MODULE CLASSES
#include "Vfoo___024root.h"

// SYMS CLASS (contains all model state)
class Vfoo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfoo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfoo___024root                 TOP;

    // CONSTRUCTORS
    Vfoo__Syms(VerilatedContext* contextp, const char* namep, Vfoo* modelp);
    ~Vfoo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
