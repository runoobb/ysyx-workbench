// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_core___024root.h"

VL_ATTR_COLD void Vriscv_core___024root___eval_static(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vriscv_core___024root___eval_initial__TOP(Vriscv_core___024root* vlSelf);

VL_ATTR_COLD void Vriscv_core___024root___eval_initial(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_initial\n"); );
    // Body
    Vriscv_core___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

void Vriscv_core___024root____Vdpiimwrap_riscv_core__DOT__get_diff_skip_TOP(CData/*0:0*/ skip);

VL_ATTR_COLD void Vriscv_core___024root___eval_initial__TOP(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_initial__TOP\n"); );
    // Body
    Vriscv_core___024root____Vdpiimwrap_riscv_core__DOT__get_diff_skip_TOP(0U);
    vlSelf->inst_ce_o = 1U;
    vlSelf->data_ce_o = 1U;
}

VL_ATTR_COLD void Vriscv_core___024root___eval_final(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vriscv_core___024root___eval_triggers__stl(Vriscv_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_core___024root___dump_triggers__stl(Vriscv_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vriscv_core___024root___eval_stl(Vriscv_core___024root* vlSelf);

VL_ATTR_COLD void Vriscv_core___024root___eval_settle(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vriscv_core___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vriscv_core___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ykwang/Templates/ysyx-workbench/npc/vsrc/riscv_core.sv", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vriscv_core___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_core___024root___dump_triggers__stl(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vriscv_core___024root____Vdpiimwrap_riscv_core__DOT__get_dut_regs_TOP(IData/*31:0*/ dut_pc, IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31);

VL_ATTR_COLD void Vriscv_core___024root___stl_sequent__TOP__0(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x33U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 8U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 4U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 6U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 7U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 1U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 5U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xdU;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x4013U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 4U;
    } else if ((0x6013U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 6U;
    } else if ((0x7013U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 7U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 5U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xdU;
    } else if ((0x2013U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
    } else if ((0x3013U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xaU;
    } else if ((3U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x1003U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x2003U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 2U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x4003U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 4U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x5003U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 5U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x23U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 2U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x1023U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 2U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else if ((0x2023U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
        vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 2U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 2U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
        vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
    } else {
        if ((0x63U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 4U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
        } else if ((0x1063U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 5U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
        } else if ((0x4063U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 6U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
        } else if ((0x5063U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 7U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 2U;
        } else if ((0x6063U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 6U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xaU;
        } else if ((0x7063U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 3U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 7U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0xaU;
        } else if ((0x6fU == (0x7fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 4U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 1U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 2U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
        } else if ((0x67U == (0x707fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
            vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 0U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 2U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 2U;
            vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
        } else {
            if ((0x37U == (0x7fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
                vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 1U;
                vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
                vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 3U;
            } else {
                if ((0x17U == (0x7fU & vlSelf->riscv_core__DOT__inst_if_id_o))) {
                    vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 1U;
                    vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 1U;
                } else {
                    vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = 7U;
                    vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = 0U;
                }
                vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = 0U;
            }
            vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = 0U;
        }
        vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = 7U;
    }
    vlSelf->riscv_core__DOT__u0_idu__DOT__regwr_w = 
        ((0x33U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
         | ((0x40000033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
            | ((0x4033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
               | ((0x6033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                  | ((0x7033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                     | ((0x1033U == (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                        | ((0x5033U == (0xfe00707fU 
                                        & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                           | ((0x40005033U == (0xfe00707fU 
                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                              | ((0x2033U == (0xfe00707fU 
                                              & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                 | ((0x3033U == (0xfe00707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                    | ((0x13U == (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                       | ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                          | ((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                             | ((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                | ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                   | ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                      | ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                         | ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                            | ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                               | ((3U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                  | ((0x1003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                     | ((0x2003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                        | ((0x4003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                           | ((0x5003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                              | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o))))))))))))))))))))))))))))))))))))));
    vlSelf->riscv_core__DOT__u0_idu__DOT__memtoreg_w 
        = ((0x33U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
           & ((0x40000033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
              & ((0x4033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                 & ((0x6033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                    & ((0x7033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                       & ((0x1033U != (0xfe00707fU 
                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                          & ((0x5033U != (0xfe00707fU 
                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                             & ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                & ((0x2033U != (0xfe00707fU 
                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                      & ((0x13U != 
                                          (0x707fU 
                                           & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                         & ((0x4013U 
                                             != (0x707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                            & ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                  & ((0x1013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                        & ((0x40005013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                           & ((0x2013U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                              & ((0x3013U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                 & ((3U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                    | ((0x1003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                       | ((0x2003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                          | ((0x4003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                             | (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)))))))))))))))))))))))));
    vlSelf->riscv_core__DOT__u0_idu__DOT__memwr_w = 
        ((0x33U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
         & ((0x40000033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
            & ((0x4033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
               & ((0x6033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                  & ((0x7033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                     & ((0x1033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                        & ((0x5033U != (0xfe00707fU 
                                        & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                           & ((0x40005033U != (0xfe00707fU 
                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                              & ((0x2033U != (0xfe00707fU 
                                              & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                 & ((0x3033U != (0xfe00707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                    & ((0x13U != (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                       & ((0x4013U 
                                           != (0x707fU 
                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                          & ((0x6013U 
                                              != (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                             & ((0x7013U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                & ((0x1013U 
                                                    != 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                   & ((0x5013U 
                                                       != 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                      & ((0x40005013U 
                                                          != 
                                                          (0xfc00707fU 
                                                           & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                         & ((0x2013U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                            & ((0x3013U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                               & ((3U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                  & ((0x1003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                     & ((0x2003U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                        & ((0x4003U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                           & ((0x5003U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                              & ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o))))))))))))))))))))))))))));
    vlSelf->riscv_core__DOT__u0_idu__DOT__alua_src_w 
        = ((0x33U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
           & ((0x40000033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
              & ((0x4033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                 & ((0x6033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                    & ((0x7033U != (0xfe00707fU & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                       & ((0x1033U != (0xfe00707fU 
                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                          & ((0x5033U != (0xfe00707fU 
                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                             & ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                & ((0x2033U != (0xfe00707fU 
                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                      & ((0x13U != 
                                          (0x707fU 
                                           & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                         & ((0x4013U 
                                             != (0x707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                            & ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                  & ((0x1013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                        & ((0x40005013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                           & ((0x2013U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                              & ((0x3013U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                 & ((3U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                    & ((0x1003U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                       & ((0x2003U 
                                                                           != 
                                                                           (0x707fU 
                                                                            & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                          & ((0x4003U 
                                                                              != 
                                                                              (0x707fU 
                                                                               & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                             & ((0x5003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                | ((0x37U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o)) 
                                                                                & (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_core__DOT__inst_if_id_o))))))))))))))))))))))))))))))))))))));
    vlSelf->data_we_o = vlSelf->riscv_core__DOT__mem_wr_ex_mem_o;
    vlSelf->data_addr_o = vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o;
    vlSelf->data_o = vlSelf->riscv_core__DOT__rs2_val_ex_mem_o;
    vlSelf->inst_addr_o = vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_w;
    vlSelf->riscv_core__DOT__branch_taken = ((0U != (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                             & ((1U 
                                                 == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                | ((2U 
                                                    == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                   | (((4U 
                                                        == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                       & (IData)(vlSelf->riscv_core__DOT__zero_ex_mem_o)) 
                                                      | (((5U 
                                                           == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                          & (~ (IData)(vlSelf->riscv_core__DOT__zero_ex_mem_o))) 
                                                         | (((6U 
                                                              == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                             & (IData)(vlSelf->riscv_core__DOT__less_ex_mem_o)) 
                                                            | ((7U 
                                                                == (IData)(vlSelf->riscv_core__DOT__branch_op_ex_mem_o)) 
                                                               & (~ (IData)(vlSelf->riscv_core__DOT__less_ex_mem_o)))))))));
    vlSelf->riscv_core__DOT__data_hazard_stall = ((IData)(vlSelf->riscv_core__DOT__mem_to_reg_id_ex_o) 
                                                  & ((((IData)(vlSelf->riscv_core__DOT__rd_idx_id_ex_o) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                           >> 0xfU))) 
                                                      | ((IData)(vlSelf->riscv_core__DOT__rd_idx_id_ex_o) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->riscv_core__DOT__inst_if_id_o 
                                                             >> 0x14U)))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->riscv_core__DOT__rd_idx_id_ex_o))));
    vlSelf->riscv_core__DOT__rd_val = ((IData)(vlSelf->riscv_core__DOT__mem_to_reg_mem_wb_o)
                                        ? vlSelf->riscv_core__DOT__mem_rd_val_mem_wb_o
                                        : vlSelf->riscv_core__DOT__alu_p_val_mem_wb_o);
    vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0 
        = ((IData)(vlSelf->riscv_core__DOT__reg_wr_mem_wb_o) 
           & (0U != (IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o)));
    vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h4508ef60__0 
        = ((IData)(vlSelf->riscv_core__DOT__reg_wr_ex_mem_o) 
           & (0U != (IData)(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o)));
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[1U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [1U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[2U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [2U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[3U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [3U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[4U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [4U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[5U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [5U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[6U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [6U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[7U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [7U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[8U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [8U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[9U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [9U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xaU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xaU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xbU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xbU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xcU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xcU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xdU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xdU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xeU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xeU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xfU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0xfU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x10U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x10U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x11U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x11U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x12U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x12U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x13U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x13U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x14U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x14U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x15U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x15U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x16U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x16U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x17U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x17U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x18U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x18U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x19U] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x19U];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1aU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1aU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1bU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1bU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1cU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1cU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1dU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1dU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1eU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1eU];
    vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1fU] 
        = vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile
        [0x1fU];
    vlSelf->riscv_core__DOT____Vcellinp__u0_idu__flush 
        = ((IData)(vlSelf->riscv_core__DOT__branch_taken) 
           | (IData)(vlSelf->riscv_core__DOT__data_hazard_stall));
    vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1 
        = ((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h4508ef60__0) 
           & ((IData)(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o) 
              == (IData)(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o)));
    vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1 
        = ((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h4508ef60__0) 
           & (((IData)(vlSelf->riscv_core__DOT__rd_idx_ex_mem_o) 
               == (IData)(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o)) 
              & (4U != (IData)(vlSelf->riscv_core__DOT__opcode_id_ex_o))));
    vlSelf->riscv_core__DOT__w_regs[0x1fU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1fU];
    vlSelf->riscv_core__DOT__w_regs[0x1eU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1eU];
    vlSelf->riscv_core__DOT__w_regs[0x1dU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1dU];
    vlSelf->riscv_core__DOT__w_regs[0x1cU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1cU];
    vlSelf->riscv_core__DOT__w_regs[0x1bU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1bU];
    vlSelf->riscv_core__DOT__w_regs[0x1aU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1aU];
    vlSelf->riscv_core__DOT__w_regs[0x19U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x19U];
    vlSelf->riscv_core__DOT__w_regs[0x18U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x18U];
    vlSelf->riscv_core__DOT__w_regs[0x17U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x17U];
    vlSelf->riscv_core__DOT__w_regs[0x16U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x16U];
    vlSelf->riscv_core__DOT__w_regs[0x15U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x15U];
    vlSelf->riscv_core__DOT__w_regs[0x14U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x14U];
    vlSelf->riscv_core__DOT__w_regs[0x13U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x13U];
    vlSelf->riscv_core__DOT__w_regs[0x12U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x12U];
    vlSelf->riscv_core__DOT__w_regs[0x11U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x11U];
    vlSelf->riscv_core__DOT__w_regs[0x10U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x10U];
    vlSelf->riscv_core__DOT__w_regs[0xfU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xfU];
    vlSelf->riscv_core__DOT__w_regs[0xeU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xeU];
    vlSelf->riscv_core__DOT__w_regs[0xdU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xdU];
    vlSelf->riscv_core__DOT__w_regs[0xcU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xcU];
    vlSelf->riscv_core__DOT__w_regs[0xbU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xbU];
    vlSelf->riscv_core__DOT__w_regs[0xaU] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xaU];
    vlSelf->riscv_core__DOT__w_regs[9U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [9U];
    vlSelf->riscv_core__DOT__w_regs[8U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [8U];
    vlSelf->riscv_core__DOT__w_regs[7U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [7U];
    vlSelf->riscv_core__DOT__w_regs[6U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [6U];
    vlSelf->riscv_core__DOT__w_regs[5U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [5U];
    vlSelf->riscv_core__DOT__w_regs[4U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [4U];
    vlSelf->riscv_core__DOT__w_regs[3U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [3U];
    vlSelf->riscv_core__DOT__w_regs[2U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [2U];
    vlSelf->riscv_core__DOT__w_regs[1U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [1U];
    vlSelf->riscv_core__DOT__w_regs[0U] = vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0U];
    vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0 
        = ((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1)
            ? 2U : (((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                     & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1)) 
                        & ((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                           == (IData)(vlSelf->riscv_core__DOT__rs1_idx_id_ex_o))))
                     ? 1U : 0U));
    vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0 
        = ((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1)
            ? 2U : (((IData)(vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0) 
                     & ((~ (IData)(vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1)) 
                        & (((IData)(vlSelf->riscv_core__DOT__rd_idx_mem_wb_o) 
                            == (IData)(vlSelf->riscv_core__DOT__rs2_idx_id_ex_o)) 
                           & (4U != (IData)(vlSelf->riscv_core__DOT__opcode_id_ex_o)))))
                     ? 1U : 0U));
    Vriscv_core___024root____Vdpiimwrap_riscv_core__DOT__get_dut_regs_TOP(vlSelf->inst_addr_o, 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [1U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [2U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [3U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [4U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [5U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [6U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [7U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [8U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [9U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xaU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xbU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xcU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xdU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xeU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0xfU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x10U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x11U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x12U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x13U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x14U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x15U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x16U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x17U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x18U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x19U], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1aU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1bU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1cU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1dU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1eU], 
                                                                          vlSelf->riscv_core__DOT__w_regs
                                                                          [0x1fU]);
    vlSelf->riscv_core__DOT__rs1_val_alu_i = ((0U == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))
                                               ? vlSelf->riscv_core__DOT__rs1_val_id_ex_o
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))
                                                   ? vlSelf->riscv_core__DOT__rd_val
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0))
                                                    ? vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o
                                                    : vlSelf->riscv_core__DOT__rs1_val_id_ex_o)));
    vlSelf->riscv_core__DOT__rs2_val_alu_i = ((0U == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))
                                               ? vlSelf->riscv_core__DOT__rs2_val_id_ex_o
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))
                                                   ? vlSelf->riscv_core__DOT__rd_val
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0))
                                                    ? vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o
                                                    : vlSelf->riscv_core__DOT__rs2_val_id_ex_o)));
    vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i = ((IData)(vlSelf->riscv_core__DOT__alu_asrc_id_ex_o)
                                                    ? vlSelf->riscv_core__DOT__pc_id_ex_o
                                                    : vlSelf->riscv_core__DOT__rs1_val_alu_i);
    vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i = (
                                                   (0U 
                                                    == (IData)(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o))
                                                    ? vlSelf->riscv_core__DOT__rs2_val_alu_i
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o))
                                                     ? vlSelf->riscv_core__DOT__imm_id_ex_o
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o))
                                                      ? 4U
                                                      : 0U)));
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r 
        = ((1U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
               << 1U) : vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r 
        = ((2U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r 
               << 2U) : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r 
        = ((4U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r 
               << 4U) : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r 
        = ((8U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r 
               << 8U) : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r 
        = (((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
             >> 0x1fU) & ((IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o) 
                          >> 3U)) ? 0xffffU : 0U);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r 
        = ((1U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? ((0x80000000U & ((IData)(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r) 
                               << 0x10U)) | (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                                             >> 1U))
            : vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r 
        = ((2U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? ((0xc0000000U & ((IData)(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r) 
                               << 0x10U)) | (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r 
                                             >> 2U))
            : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r 
        = ((4U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? ((0xf0000000U & ((IData)(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r) 
                               << 0x10U)) | (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r 
                                             >> 4U))
            : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r 
        = ((8U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
            ? ((0xff000000U & ((IData)(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r) 
                               << 0x10U)) | (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r 
                                             >> 8U))
            : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r);
    if ((0x10U & vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)) {
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl 
            = (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r 
               << 0x10U);
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr 
            = (((IData)(vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r) 
                << 0x10U) | (vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r 
                             >> 0x10U));
    } else {
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl 
            = vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r;
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr 
            = vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r;
    }
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub 
        = (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
           - vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i);
    if ((8U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o))) {
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set 
            = ((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                < vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
                ? 1U : 0U);
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add 
            = vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub;
    } else {
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set 
            = (((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                 >> 0x1fU) == (vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i 
                               >> 0x1fU)) ? ((vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub 
                                              >> 0x1fU)
                                              ? 1U : 0U)
                : ((vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                    >> 0x1fU) ? 1U : 0U));
        vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add 
            = (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
               + vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i);
    }
    vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w = 
        ((0U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
          ? vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add
          : ((1U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
              ? vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl
              : ((2U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
                  ? vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set
                  : ((3U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
                      ? vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i
                      : ((4U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
                          ? (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                             ^ vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
                          : ((5U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
                              ? vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr
                              : ((6U == (7U & (IData)(vlSelf->riscv_core__DOT__alu_ctr_id_ex_o)))
                                  ? (vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i 
                                     | vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i)
                                  : vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add)))))));
}

VL_ATTR_COLD void Vriscv_core___024root___eval_stl(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vriscv_core___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_core___024root___dump_triggers__act(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_core___024root___dump_triggers__nba(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_core___024root___ctor_var_reset(Vriscv_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_i = VL_RAND_RESET_I(32);
    vlSelf->inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->inst_ce_o = VL_RAND_RESET_I(1);
    vlSelf->data_i = VL_RAND_RESET_I(32);
    vlSelf->data_we_o = VL_RAND_RESET_I(1);
    vlSelf->data_ce_o = VL_RAND_RESET_I(1);
    vlSelf->data_addr_o = VL_RAND_RESET_I(32);
    vlSelf->data_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__data_hazard_stall = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__inst_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__pc_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rd_val = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__reg_wr_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__branch_op_id_ex_o = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__mem_to_reg_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__mem_wr_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__mem_op_id_ex_o = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__alu_ctr_id_ex_o = VL_RAND_RESET_I(4);
    vlSelf->riscv_core__DOT__rs1_val_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rs2_val_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rs1_idx_id_ex_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT__rs2_idx_id_ex_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT__rd_idx_id_ex_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT__pc_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__imm_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__opcode_id_ex_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT__alu_asrc_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__alu_bsrc_id_ex_o = VL_RAND_RESET_I(2);
    vlSelf->riscv_core__DOT__reg_wr_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__branch_op_ex_mem_o = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__mem_to_reg_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__mem_wr_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__rd_idx_ex_mem_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT__mem_op_ex_mem_o = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__rs1_val_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rs2_val_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__pc_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__alu_p_val_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__zero_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__less_ex_mem_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__imm_ex_mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__mem_to_reg_mem_wb_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__reg_wr_mem_wb_o = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__alu_p_val_mem_wb_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__mem_rd_val_mem_wb_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rd_idx_mem_wb_o = VL_RAND_RESET_I(5);
    vlSelf->riscv_core__DOT____Vcellinp__u0_idu__flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__rs1_val_alu_i = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__rs2_val_alu_i = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__alu_a_val_ex_mem_i = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__alu_b_val_ex_mem_i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_core__DOT__w_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_core__DOT____VdfgTmp_h49a7b528__0 = 0;
    vlSelf->riscv_core__DOT____VdfgTmp_hb43efe8a__0 = 0;
    vlSelf->riscv_core__DOT__u0_ifu__DOT__pc_w = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_idu__DOT__extop_w = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__u0_idu__DOT__regwr_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_idu__DOT__branchop_w = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__u0_idu__DOT__memtoreg_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_idu__DOT__memwr_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_idu__DOT__memop_w = VL_RAND_RESET_I(3);
    vlSelf->riscv_core__DOT__u0_idu__DOT__alua_src_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_idu__DOT__alub_src_w = VL_RAND_RESET_I(2);
    vlSelf->riscv_core__DOT__u0_idu__DOT__aluctr_w = VL_RAND_RESET_I(4);
    vlSelf->riscv_core__DOT__u0_idu__DOT__u0_id_ex__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_exu__DOT__alu_p_w = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r = VL_RAND_RESET_I(16);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r = VL_RAND_RESET_I(32);
    vlSelf->riscv_core__DOT__u0_lsu__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_lsu__DOT__flush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_core__DOT__u0_riscv_regfile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_core__DOT__u0_forward__DOT__forwarda_C1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_forward__DOT__forwardb_cond1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h4508ef60__0 = 0;
    vlSelf->riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0 = 0;
    vlSelf->__Vdly__riscv_core__DOT__inst_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__riscv_core__DOT__pc_if_id_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__riscv_core__DOT__alu_ctr_id_ex_o = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__riscv_core__DOT__mem_op_id_ex_o = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__riscv_core__DOT__mem_wr_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_core__DOT__mem_to_reg_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_core__DOT__branch_op_id_ex_o = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__riscv_core__DOT__reg_wr_id_ex_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_core__DOT__rd_idx_id_ex_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__riscv_core__DOT__pc_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__riscv_core__DOT__imm_id_ex_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__riscv_core__DOT__reg_wr_mem_wb_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_core__DOT__rd_idx_mem_wb_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v0 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v1 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v2 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v3 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v4 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v5 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v6 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v7 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v8 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v9 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v10 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v11 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v12 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v13 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v14 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v15 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v16 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v17 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v18 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v19 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v19 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v20 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v21 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v21 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v22 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v23 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v23 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v24 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v25 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v25 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v26 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v27 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v27 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v28 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v29 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v29 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v30 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v31 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v31 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v32 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v33 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v33 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v34 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v35 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v35 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v36 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v37 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v37 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v38 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v39 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v39 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v40 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v41 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v41 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v42 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v43 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v43 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v44 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v45 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v45 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v46 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v47 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v47 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v48 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v49 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v49 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v50 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v51 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v51 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v52 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v53 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v53 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v54 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v55 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v55 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v56 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v57 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v57 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v58 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v59 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v59 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v60 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v61 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v61 = 0;
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v62 = 0;
    vlSelf->__Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v63 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v63 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
