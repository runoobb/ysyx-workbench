// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfoo.h"
#include "Vfoo__Syms.h"

//============================================================
// Constructors

Vfoo::Vfoo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfoo__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfoo::Vfoo(const char* _vcname__)
    : Vfoo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfoo::~Vfoo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfoo___024root___eval_debug_assertions(Vfoo___024root* vlSelf);
#endif  // VL_DEBUG
void Vfoo___024root___eval_static(Vfoo___024root* vlSelf);
void Vfoo___024root___eval_initial(Vfoo___024root* vlSelf);
void Vfoo___024root___eval_settle(Vfoo___024root* vlSelf);
void Vfoo___024root___eval(Vfoo___024root* vlSelf);

void Vfoo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfoo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfoo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfoo___024root___eval_static(&(vlSymsp->TOP));
        Vfoo___024root___eval_initial(&(vlSymsp->TOP));
        Vfoo___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfoo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfoo::eventsPending() { return false; }

uint64_t Vfoo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfoo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfoo___024root___eval_final(Vfoo___024root* vlSelf);

VL_ATTR_COLD void Vfoo::final() {
    Vfoo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfoo::hierName() const { return vlSymsp->name(); }
const char* Vfoo::modelName() const { return "Vfoo"; }
unsigned Vfoo::threads() const { return 1; }
