// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->inst_ce_o = 1U;
    vlSelf->data_ce_o = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ykwang/Templates/ysyx-workbench/npc/vsrc/top.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP(IData/*31:0*/ dut_pc, IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31);
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_hc288fb3e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hd160473a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hca1c778d_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP(vlSelf->top__DOT__pc, 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [1U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [2U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [3U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [4U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [5U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [6U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [7U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [8U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [9U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xaU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xbU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xcU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xdU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xeU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0xfU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x10U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x11U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x12U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x13U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x14U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x15U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x16U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x17U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x18U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x19U], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1aU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1bU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1cU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1dU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1eU], 
                                                            vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
                                                            [0x1fU]);
    if ((0x33U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 8U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 4U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 6U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 7U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 1U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 5U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0xdU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0xaU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 7U;
    } else if ((0x13U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x4013U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 4U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x6013U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 6U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x7013U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 7U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 1U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 5U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0xdU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x2013U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x3013U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0xaU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((3U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 0U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x1003U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 1U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x2003U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 2U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x4003U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 4U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x5003U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 5U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x23U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 0U;
        vlSelf->top__DOT__mem_wr = 1U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 2U;
    } else if ((0x1023U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 1U;
        vlSelf->top__DOT__mem_wr = 1U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 2U;
    } else if ((0x2023U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 2U;
        vlSelf->top__DOT__mem_wr = 1U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 2U;
    } else if ((0x63U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 4U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x1063U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 5U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x4063U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 6U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x5063U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 7U;
        vlSelf->top__DOT__alu_ctr = 2U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x6063U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 6U;
        vlSelf->top__DOT__alu_ctr = 0xaU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x7063U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 0U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 7U;
        vlSelf->top__DOT__alu_ctr = 0xaU;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 0U;
        vlSelf->top__DOT__ext_op = 3U;
    } else if ((0x6fU == (0x7fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 1U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 1U;
        vlSelf->top__DOT__alu_bsrc = 2U;
        vlSelf->top__DOT__ext_op = 4U;
    } else if ((0x67U == (0x707fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 2U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 1U;
        vlSelf->top__DOT__alu_bsrc = 2U;
        vlSelf->top__DOT__ext_op = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 3U;
        vlSelf->top__DOT__alu_asrc = 0U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 1U;
    } else if ((0x17U == (0x7fU & vlSelf->inst_i))) {
        vlSelf->top__DOT__reg_wr = 1U;
        vlSelf->top__DOT__mem_op = 7U;
        vlSelf->top__DOT__mem_wr = 0U;
        vlSelf->top__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__branch_op = 0U;
        vlSelf->top__DOT__alu_ctr = 0U;
        vlSelf->top__DOT__alu_asrc = 1U;
        vlSelf->top__DOT__alu_bsrc = 1U;
        vlSelf->top__DOT__ext_op = 1U;
    }
    vlSelf->inst_addr_o = vlSelf->top__DOT__pc;
    vlSelf->data_o = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [(0x1fU & (vlSelf->inst_i >> 0x14U))];
    vlSelf->top__DOT__rs1_val = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [(0x1fU & (vlSelf->inst_i >> 0xfU))];
    vlSelf->data_we_o = vlSelf->top__DOT__mem_wr;
    vlSelf->mem_to_reg_o = vlSelf->top__DOT__mem_to_reg;
    vlSelf->top__DOT__imm = ((0U == (IData)(vlSelf->top__DOT__ext_op))
                              ? (((- (IData)((vlSelf->inst_i 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->inst_i 
                                              >> 0x14U))
                              : ((2U == (IData)(vlSelf->top__DOT__ext_op))
                                  ? (((- (IData)((vlSelf->inst_i 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->inst_i 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst_i 
                                                        >> 7U))))
                                  : ((3U == (IData)(vlSelf->top__DOT__ext_op))
                                      ? (((- (IData)(
                                                     (vlSelf->inst_i 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->inst_i 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->inst_i 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->inst_i 
                                                     >> 7U)))))
                                      : ((4U == (IData)(vlSelf->top__DOT__ext_op))
                                          ? (((- (IData)(
                                                         (vlSelf->inst_i 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->inst_i) 
                                                | ((0x800U 
                                                    & (vlSelf->inst_i 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->inst_i 
                                                         >> 0x14U)))))
                                          : ((1U == (IData)(vlSelf->top__DOT__ext_op))
                                              ? (0xfffff000U 
                                                 & vlSelf->inst_i)
                                              : 0U)))));
    vlSelf->top__DOT__alu_a = ((IData)(vlSelf->top__DOT__alu_asrc)
                                ? vlSelf->top__DOT__pc
                                : vlSelf->top__DOT__rs1_val);
    vlSelf->top__DOT__alu_b = ((0U == (IData)(vlSelf->top__DOT__alu_bsrc))
                                ? vlSelf->data_o : 
                               ((1U == (IData)(vlSelf->top__DOT__alu_bsrc))
                                 ? vlSelf->top__DOT__imm
                                 : ((2U == (IData)(vlSelf->top__DOT__alu_bsrc))
                                     ? 4U : 0U)));
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r 
        = ((1U & vlSelf->top__DOT__alu_b) ? (vlSelf->top__DOT__alu_a 
                                             << 1U)
            : vlSelf->top__DOT__alu_a);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r 
        = ((2U & vlSelf->top__DOT__alu_b) ? (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r 
                                             << 2U)
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r 
        = ((4U & vlSelf->top__DOT__alu_b) ? (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r 
                                             << 4U)
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r 
        = ((8U & vlSelf->top__DOT__alu_b) ? (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r 
                                             << 8U)
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r 
        = (((vlSelf->top__DOT__alu_a >> 0x1fU) & ((IData)(vlSelf->top__DOT__alu_ctr) 
                                                  >> 3U))
            ? 0xffffU : 0U);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r 
        = ((1U & vlSelf->top__DOT__alu_b) ? ((0x80000000U 
                                              & ((IData)(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r) 
                                                 << 0x10U)) 
                                             | (vlSelf->top__DOT__alu_a 
                                                >> 1U))
            : vlSelf->top__DOT__alu_a);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r 
        = ((2U & vlSelf->top__DOT__alu_b) ? ((0xc0000000U 
                                              & ((IData)(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r) 
                                                 << 0x10U)) 
                                             | (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r 
                                                >> 2U))
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r 
        = ((4U & vlSelf->top__DOT__alu_b) ? ((0xf0000000U 
                                              & ((IData)(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r) 
                                                 << 0x10U)) 
                                             | (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r 
                                                >> 4U))
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r 
        = ((8U & vlSelf->top__DOT__alu_b) ? ((0xff000000U 
                                              & ((IData)(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r) 
                                                 << 0x10U)) 
                                             | (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r 
                                                >> 8U))
            : vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r);
    if ((0x10U & vlSelf->top__DOT__alu_b)) {
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl 
            = (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r 
               << 0x10U);
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr 
            = (((IData)(vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r) 
                << 0x10U) | (vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r 
                             >> 0x10U));
    } else {
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl 
            = vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r;
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr 
            = vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r;
    }
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub 
        = (vlSelf->top__DOT__alu_a - vlSelf->top__DOT__alu_b);
    if ((8U & (IData)(vlSelf->top__DOT__alu_ctr))) {
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_add 
            = vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub;
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_set 
            = ((vlSelf->top__DOT__alu_a < vlSelf->top__DOT__alu_b)
                ? 1U : 0U);
    } else {
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_add 
            = (vlSelf->top__DOT__alu_a + vlSelf->top__DOT__alu_b);
        vlSelf->top__DOT__u0_riscv_alu__DOT__result_set 
            = (((vlSelf->top__DOT__alu_a >> 0x1fU) 
                == (vlSelf->top__DOT__alu_b >> 0x1fU))
                ? ((vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub 
                    >> 0x1fU) ? 1U : 0U) : ((vlSelf->top__DOT__alu_a 
                                             >> 0x1fU)
                                             ? 1U : 0U));
    }
    vlSelf->data_addr_o = ((0U == (7U & (IData)(vlSelf->top__DOT__alu_ctr)))
                            ? vlSelf->top__DOT__u0_riscv_alu__DOT__result_add
                            : ((1U == (7U & (IData)(vlSelf->top__DOT__alu_ctr)))
                                ? vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl
                                : ((2U == (7U & (IData)(vlSelf->top__DOT__alu_ctr)))
                                    ? vlSelf->top__DOT__u0_riscv_alu__DOT__result_set
                                    : ((3U == (7U & (IData)(vlSelf->top__DOT__alu_ctr)))
                                        ? vlSelf->top__DOT__alu_b
                                        : ((4U == (7U 
                                                   & (IData)(vlSelf->top__DOT__alu_ctr)))
                                            ? (vlSelf->top__DOT__alu_a 
                                               ^ vlSelf->top__DOT__alu_b)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->top__DOT__alu_ctr)))
                                                ? vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr
                                                : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__alu_ctr)))
                                                    ? 
                                                   (vlSelf->top__DOT__alu_a 
                                                    | vlSelf->top__DOT__alu_b)
                                                    : vlSelf->top__DOT__u0_riscv_alu__DOT__result_add)))))));
    vlSelf->top__DOT__rd_val = ((IData)(vlSelf->top__DOT__mem_to_reg)
                                 ? vlSelf->data_i : vlSelf->data_addr_o);
    vlSelf->__Vtableidx1 = ((((2U == (7U & (IData)(vlSelf->top__DOT__alu_ctr))) 
                              & vlSelf->top__DOT__u0_riscv_alu__DOT__result_set) 
                             << 4U) | (((0U == vlSelf->data_addr_o) 
                                        << 3U) | (IData)(vlSelf->top__DOT__branch_op)));
    if ((1U & Vtop__ConstPool__TABLE_hc288fb3e_0[vlSelf->__Vtableidx1])) {
        vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o 
            = Vtop__ConstPool__TABLE_hd160473a_0[vlSelf->__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_hc288fb3e_0[vlSelf->__Vtableidx1])) {
        vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o 
            = Vtop__ConstPool__TABLE_hca1c778d_0[vlSelf->__Vtableidx1];
    }
    vlSelf->top__DOT__u0_riscv_npc__DOT__npc_add1 = 
        ((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o)
          ? vlSelf->top__DOT__rs1_val : vlSelf->top__DOT__pc);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
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
    vlSelf->mem_to_reg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ext_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__alu_asrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_bsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__alu_ctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs1_val = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rd_val = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u0_riscv_npc__DOT__PCBsrc_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u0_riscv_npc__DOT__npc_add1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_sl = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_sr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_sub = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__result_set = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_fill_r = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_1_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_2_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_4_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_right_8_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_1_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_2_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_4_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u0_riscv_alu__DOT__shift_left_8_r = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v1 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v3 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v4 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v5 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v6 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v7 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v8 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v9 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v11 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v13 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v15 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v17 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v18 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v19 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v19 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v21 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v21 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v22 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v23 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v23 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v24 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v25 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v25 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v26 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v27 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v27 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v28 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v29 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v29 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v30 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v31 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v31 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v32 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v33 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v33 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v34 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v35 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v35 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v36 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v37 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v37 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v38 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v39 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v39 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v40 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v41 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v41 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v42 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v43 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v43 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v44 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v45 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v45 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v46 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v47 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v47 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v48 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v49 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v49 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v50 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v51 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v51 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v52 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v53 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v53 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v54 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v55 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v55 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v56 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v57 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v57 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v58 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v59 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v59 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v60 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v61 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v61 = 0;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v62 = 0;
    vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v63 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v63 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
