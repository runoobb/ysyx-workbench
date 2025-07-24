// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_hc288fb3e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hd160473a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hca1c778d_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v1 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v0 = 1U;
    } else if (((IData)(vlSelf->top__DOT__reg_wr) & 
                (0U == (0xf80U & vlSelf->inst_i)))) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v1 = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v2 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v3 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v4 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v5 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v6 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v7 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v8 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v9 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v62 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v63 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v2 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v4 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v6 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v8 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v10 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v12 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v62 = 1U;
    } else {
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v3 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v3 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x100U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v5 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v5 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x180U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v7 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v7 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x200U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v9 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v9 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x280U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v11 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v11 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x300U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v13 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v13 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xf80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v63 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v63 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v19 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v21 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v22 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v23 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v24 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v25 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v26 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v27 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v28 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v29 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v14 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v16 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v18 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v20 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v22 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v24 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v26 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v28 = 1U;
    } else {
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x380U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v15 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v15 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x400U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v17 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v17 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x480U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v19 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v19 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x500U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v21 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v21 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x580U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v23 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v23 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x600U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v25 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v25 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x680U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v27 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v27 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x700U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v29 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v29 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v30 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v31 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v32 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v33 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v34 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v35 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v36 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v37 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v38 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v39 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v40 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v41 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v42 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v43 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v44 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v45 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v30 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v32 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v34 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v36 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v38 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v40 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v42 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v44 = 1U;
    } else {
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x780U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v31 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v31 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x800U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v33 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v33 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x880U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v35 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v35 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x900U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v37 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v37 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0x980U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v39 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v39 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xa00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v41 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v41 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xa80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v43 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v43 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xb00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v45 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v45 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v46 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v47 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v48 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v49 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v50 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v51 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v52 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v53 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v54 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v55 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v56 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v57 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v58 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v59 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v60 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v61 = 0U;
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v46 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v48 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v50 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v52 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v54 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v56 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v58 = 1U;
        vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v60 = 1U;
    } else {
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xb80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v47 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v47 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xc00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v49 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v49 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xc80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v51 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v51 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xd00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v53 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v53 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xd80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v55 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v55 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xe00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v57 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v57 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xe80U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v59 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v59 = 1U;
        }
        if (((IData)(vlSelf->top__DOT__reg_wr) & (0xf00U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->inst_i)))) {
            vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v61 
                = vlSelf->top__DOT__rd_val;
            vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v61 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v0) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v1) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v2) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v3) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[1U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v3;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v4) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v5) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[2U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v5;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v6) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v7) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[3U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v7;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v8) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v9) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[4U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v9;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v10) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v11) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[5U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v12) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v13) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[6U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v14) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v15) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[7U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v16) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v17) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[8U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v18) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v19) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[9U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v20) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v21) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xaU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v21;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v22) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v23) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xbU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v23;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v24) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v25) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xcU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v25;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v26) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v27) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xdU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v27;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v28) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v29) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xeU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v29;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v30) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v31) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0xfU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v31;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v32) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v33) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x10U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v33;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v34) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v35) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x11U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v35;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v36) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v37) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x12U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v37;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v38) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v39) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x13U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v39;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v40) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v41) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x14U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v41;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v42) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v43) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x15U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v43;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v44) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v45) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x16U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v45;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v46) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v47) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x17U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v47;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v48) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v49) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x18U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v49;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v50) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v51) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x19U] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v51;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v52) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v53) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1aU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v53;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v54) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v55) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1bU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v55;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v56) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v57) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1cU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v57;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v58) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v59) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1dU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v59;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v60) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v61) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1eU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v61;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v62) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u0_riscv_regfile__DOT__regfile__v63) {
        vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile[0x1fU] 
            = vlSelf->__Vdlyvval__top__DOT__u0_riscv_regfile__DOT__regfile__v63;
    }
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[1U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [1U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[2U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [2U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[3U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [3U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[4U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [4U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[5U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [5U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[6U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [6U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[7U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [7U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[8U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [8U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[9U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [9U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xaU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xaU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xbU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xbU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xcU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xcU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xdU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xdU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xeU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xeU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0xfU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0xfU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x10U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x10U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x11U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x11U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x12U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x12U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x13U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x13U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x14U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x14U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x15U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x15U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x16U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x16U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x17U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x17U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x18U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x18U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x19U] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x19U];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1aU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1aU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1bU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1bU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1cU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1cU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1dU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1dU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1eU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1eU];
    vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o[0x1fU] 
        = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [0x1fU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst) ? 0x80000000U
                             : (((IData)(vlSelf->top__DOT__u0_riscv_npc__DOT__PCAsrc_o)
                                  ? vlSelf->top__DOT__imm
                                  : 4U) + vlSelf->top__DOT__u0_riscv_npc__DOT__npc_add1));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->inst_addr_o = vlSelf->top__DOT__pc;
}

void Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP(IData/*31:0*/ dut_pc, IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->top__DOT__w_regs[0x1fU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1fU];
    vlSelf->top__DOT__w_regs[0x1eU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1eU];
    vlSelf->top__DOT__w_regs[0x1dU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1dU];
    vlSelf->top__DOT__w_regs[0x1cU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1cU];
    vlSelf->top__DOT__w_regs[0x1bU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1bU];
    vlSelf->top__DOT__w_regs[0x1aU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x1aU];
    vlSelf->top__DOT__w_regs[0x19U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x19U];
    vlSelf->top__DOT__w_regs[0x18U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x18U];
    vlSelf->top__DOT__w_regs[0x17U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x17U];
    vlSelf->top__DOT__w_regs[0x16U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x16U];
    vlSelf->top__DOT__w_regs[0x15U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x15U];
    vlSelf->top__DOT__w_regs[0x14U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x14U];
    vlSelf->top__DOT__w_regs[0x13U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x13U];
    vlSelf->top__DOT__w_regs[0x12U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x12U];
    vlSelf->top__DOT__w_regs[0x11U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x11U];
    vlSelf->top__DOT__w_regs[0x10U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0x10U];
    vlSelf->top__DOT__w_regs[0xfU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xfU];
    vlSelf->top__DOT__w_regs[0xeU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xeU];
    vlSelf->top__DOT__w_regs[0xdU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xdU];
    vlSelf->top__DOT__w_regs[0xcU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xcU];
    vlSelf->top__DOT__w_regs[0xbU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xbU];
    vlSelf->top__DOT__w_regs[0xaU] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0xaU];
    vlSelf->top__DOT__w_regs[9U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [9U];
    vlSelf->top__DOT__w_regs[8U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [8U];
    vlSelf->top__DOT__w_regs[7U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [7U];
    vlSelf->top__DOT__w_regs[6U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [6U];
    vlSelf->top__DOT__w_regs[5U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [5U];
    vlSelf->top__DOT__w_regs[4U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [4U];
    vlSelf->top__DOT__w_regs[3U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [3U];
    vlSelf->top__DOT__w_regs[2U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [2U];
    vlSelf->top__DOT__w_regs[1U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [1U];
    vlSelf->top__DOT__w_regs[0U] = vlSelf->top__DOT____Vcellout__u0_riscv_regfile__regfile_o
        [0U];
    Vtop___024root____Vdpiimwrap_top__DOT__get_dut_regs_TOP(vlSelf->top__DOT__pc, 
                                                            vlSelf->top__DOT__w_regs
                                                            [0U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [1U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [2U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [3U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [4U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [5U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [6U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [7U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [8U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [9U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xaU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xbU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xcU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xdU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xeU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0xfU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x10U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x11U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x12U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x13U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x14U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x15U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x16U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x17U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x18U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x19U], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1aU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1bU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1cU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1dU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1eU], 
                                                            vlSelf->top__DOT__w_regs
                                                            [0x1fU]);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->data_o = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [(0x1fU & (vlSelf->inst_i >> 0x14U))];
    vlSelf->top__DOT__rs1_val = vlSelf->top__DOT__u0_riscv_regfile__DOT__regfile
        [(0x1fU & (vlSelf->inst_i >> 0xfU))];
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

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/ykwang/Templates/ysyx-workbench/npc/vsrc/top.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ykwang/Templates/ysyx-workbench/npc/vsrc/top.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ykwang/Templates/ysyx-workbench/npc/vsrc/top.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
