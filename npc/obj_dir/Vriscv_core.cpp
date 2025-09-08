// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_core.h"
#include "Vriscv_core__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vriscv_core::Vriscv_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vriscv_core__Syms(contextp(), _vcname__, this)}
    , inst_i{vlSymsp->TOP.inst_i}
    , data_we_o{vlSymsp->TOP.data_we_o}
    , data_addr_o{vlSymsp->TOP.data_addr_o}
    , data_o{vlSymsp->TOP.data_o}
    , data_i{vlSymsp->TOP.data_i}
    , inst_addr_o{vlSymsp->TOP.inst_addr_o}
    , rst{vlSymsp->TOP.rst}
    , clk{vlSymsp->TOP.clk}
    , inst_ce_o{vlSymsp->TOP.inst_ce_o}
    , data_ce_o{vlSymsp->TOP.data_ce_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vriscv_core::Vriscv_core(const char* _vcname__)
    : Vriscv_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vriscv_core::~Vriscv_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_core___024root___eval_debug_assertions(Vriscv_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_core___024root___eval_static(Vriscv_core___024root* vlSelf);
void Vriscv_core___024root___eval_initial(Vriscv_core___024root* vlSelf);
void Vriscv_core___024root___eval_settle(Vriscv_core___024root* vlSelf);
void Vriscv_core___024root___eval(Vriscv_core___024root* vlSelf);

void Vriscv_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_core___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_core___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_core::eventsPending() { return false; }

uint64_t Vriscv_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vriscv_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vriscv_core___024root___eval_final(Vriscv_core___024root* vlSelf);

VL_ATTR_COLD void Vriscv_core::final() {
    Vriscv_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_core::hierName() const { return vlSymsp->name(); }
const char* Vriscv_core::modelName() const { return "Vriscv_core"; }
unsigned Vriscv_core::threads() const { return 2; }
std::unique_ptr<VerilatedTraceConfig> Vriscv_core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_core___024root__trace_init_top(Vriscv_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_core___024root*>(voidSelf);
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vriscv_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vriscv_core___024root__trace_register(Vriscv_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vriscv_core::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_core::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_core___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
