// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_core.h for the primary calling header

#ifndef VERILATED_VRISCV_CORE___024ROOT_H_
#define VERILATED_VRISCV_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vriscv_core__Syms;

class Vriscv_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        IData/*31:0*/ riscv_core__DOT__rs2_val_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__u0_forward__DOT____VdfgTmp_h10cb935f__0;
        IData/*31:0*/ riscv_core__DOT__rs1_val_id_ex_o;
        CData/*2:0*/ riscv_core__DOT__branch_op_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__mem_wr_ex_mem_o;
        CData/*2:0*/ riscv_core__DOT__mem_op_ex_mem_o;
        CData/*0:0*/ riscv_core__DOT__zero_ex_mem_o;
        CData/*0:0*/ riscv_core__DOT__less_ex_mem_o;
        CData/*0:0*/ riscv_core__DOT__u0_forward__DOT__forwardb_cond1;
        CData/*0:0*/ riscv_core__DOT__u0_forward__DOT____VdfgTmp_h4508ef60__0;
        CData/*2:0*/ __Vdly__riscv_core__DOT__branch_op_id_ex_o;
        IData/*31:0*/ riscv_core__DOT__rs2_val_ex_mem_o;
        IData/*31:0*/ riscv_core__DOT__alu_p_val_ex_mem_o;
        IData/*31:0*/ riscv_core__DOT__rs1_val_alu_i;
        IData/*31:0*/ riscv_core__DOT__rs2_val_alu_i;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__alu_p_w;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_set;
        CData/*0:0*/ riscv_core__DOT__mem_to_reg_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__mem_wr_id_ex_o;
        CData/*2:0*/ riscv_core__DOT__mem_op_id_ex_o;
        CData/*4:0*/ riscv_core__DOT__rs2_idx_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__alu_asrc_id_ex_o;
        IData/*31:0*/ riscv_core__DOT__pc_id_ex_o;
        IData/*31:0*/ riscv_core__DOT__imm_id_ex_o;
        CData/*4:0*/ riscv_core__DOT__rs1_idx_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__u0_idu__DOT__regwr_w;
        CData/*2:0*/ __Vdly__riscv_core__DOT__mem_op_id_ex_o;
        CData/*0:0*/ __Vdly__riscv_core__DOT__mem_wr_id_ex_o;
        CData/*0:0*/ __Vdly__riscv_core__DOT__mem_to_reg_id_ex_o;
        CData/*0:0*/ __Vdly__riscv_core__DOT__reg_wr_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__reg_wr_id_ex_o;
        IData/*31:0*/ riscv_core__DOT__pc_if_id_o;
        CData/*0:0*/ riscv_core__DOT__data_hazard_stall;
        CData/*4:0*/ riscv_core__DOT__rd_idx_id_ex_o;
        CData/*2:0*/ riscv_core__DOT__branch_op_ex_mem_o;
        CData/*4:0*/ __Vdly__riscv_core__DOT__rd_idx_id_ex_o;
        IData/*31:0*/ __Vdly__riscv_core__DOT__pc_if_id_o;
        VL_IN(inst_i,31,0);
        CData/*1:0*/ riscv_core__DOT__u0_idu__DOT__alub_src_w;
        CData/*3:0*/ riscv_core__DOT__u0_idu__DOT__aluctr_w;
        CData/*0:0*/ riscv_core__DOT__reg_wr_ex_mem_o;
        CData/*0:0*/ riscv_core__DOT__mem_to_reg_mem_wb_o;
        CData/*0:0*/ riscv_core__DOT__u0_lsu__DOT__stall;
        CData/*0:0*/ riscv_core__DOT__u0_lsu__DOT__flush;
        CData/*3:0*/ __Vdly__riscv_core__DOT__alu_ctr_id_ex_o;
        CData/*0:0*/ __Vdly__riscv_core__DOT__reg_wr_mem_wb_o;
        CData/*4:0*/ __Vdly__riscv_core__DOT__rd_idx_mem_wb_o;
        IData/*31:0*/ riscv_core__DOT__u0_ifu__DOT__pc_w;
        IData/*31:0*/ __Vdly__riscv_core__DOT__inst_if_id_o;
        CData/*0:0*/ riscv_core__DOT__branch_taken;
        CData/*3:0*/ riscv_core__DOT__alu_ctr_id_ex_o;
        CData/*4:0*/ riscv_core__DOT__opcode_id_ex_o;
        CData/*1:0*/ riscv_core__DOT__alu_bsrc_id_ex_o;
        CData/*0:0*/ riscv_core__DOT__mem_to_reg_ex_mem_o;
        CData/*4:0*/ riscv_core__DOT__rd_idx_ex_mem_o;
        IData/*31:0*/ riscv_core__DOT__rs1_val_ex_mem_o;
        IData/*31:0*/ riscv_core__DOT__pc_ex_mem_o;
        IData/*31:0*/ riscv_core__DOT__imm_ex_mem_o;
        VL_OUT8(data_we_o,0,0);
        CData/*1:0*/ riscv_core__DOT____VdfgTmp_h49a7b528__0;
        CData/*1:0*/ riscv_core__DOT____VdfgTmp_hb43efe8a__0;
        CData/*0:0*/ riscv_core__DOT__u0_forward__DOT__forwarda_C1;
        SData/*15:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_fill_r;
        VL_OUT(data_addr_o,31,0);
    };
    struct {
        VL_OUT(data_o,31,0);
        IData/*31:0*/ riscv_core__DOT__alu_a_val_ex_mem_i;
        IData/*31:0*/ riscv_core__DOT__alu_b_val_ex_mem_i;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sl;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sr;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_sub;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__result_add;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_1_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_2_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_4_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_right_8_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_1_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_2_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_4_r;
        IData/*31:0*/ riscv_core__DOT__u0_exu__DOT__u0_alu__DOT__shift_left_8_r;
        IData/*31:0*/ __Vdly__riscv_core__DOT__pc_id_ex_o;
        IData/*31:0*/ __Vdly__riscv_core__DOT__imm_id_ex_o;
        CData/*2:0*/ riscv_core__DOT__u0_idu__DOT__extop_w;
        CData/*0:0*/ riscv_core__DOT__u0_idu__DOT__memtoreg_w;
        CData/*0:0*/ riscv_core__DOT__u0_idu__DOT__memwr_w;
        CData/*2:0*/ riscv_core__DOT__u0_idu__DOT__memop_w;
        CData/*0:0*/ riscv_core__DOT__u0_idu__DOT__alua_src_w;
        VL_IN(data_i,31,0);
        IData/*31:0*/ riscv_core__DOT__alu_p_val_mem_wb_o;
        IData/*31:0*/ riscv_core__DOT__mem_rd_val_mem_wb_o;
        CData/*2:0*/ riscv_core__DOT__u0_idu__DOT__branchop_w;
        VL_OUT(inst_addr_o,31,0);
        VlUnpacked<IData/*31:0*/, 32> riscv_core__DOT__w_regs;
        VlUnpacked<IData/*31:0*/, 32> riscv_core__DOT____Vcellout__u0_riscv_regfile__regfile_o;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v0;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v1;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v2;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v3;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v4;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v5;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v6;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v7;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v56;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v57;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v58;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v59;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v60;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v61;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v62;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v63;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v3;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v5;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v7;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v57;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v59;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v61;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v63;
        VlUnpacked<IData/*31:0*/, 32> riscv_core__DOT__u0_riscv_regfile__DOT__regfile;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v8;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v9;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v10;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v11;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v12;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v13;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v14;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v15;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v16;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v17;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v18;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v19;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v20;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v21;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v22;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v23;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v24;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v25;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v26;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v27;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v28;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v29;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v30;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v31;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v32;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v33;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v34;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v35;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v36;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v37;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v38;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v39;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v9;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v11;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v13;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v15;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v17;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v19;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v21;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v23;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v25;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v27;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v29;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v31;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v33;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v35;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v37;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v39;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v40;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v41;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v42;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v43;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v44;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v45;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v46;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v47;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v48;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v49;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v50;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v51;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v52;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v53;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v54;
        CData/*0:0*/ __Vdlyvset__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v55;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v41;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v43;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v45;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v47;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v49;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v51;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v53;
        IData/*31:0*/ __Vdlyvval__riscv_core__DOT__u0_riscv_regfile__DOT__regfile__v55;
        CData/*0:0*/ riscv_core__DOT__u0_idu__DOT__u0_id_ex__DOT__stall;
        CData/*0:0*/ riscv_core__DOT__reg_wr_mem_wb_o;
        VL_IN8(rst,0,0);
    };
    struct {
        CData/*4:0*/ riscv_core__DOT__rd_idx_mem_wb_o;
        IData/*31:0*/ riscv_core__DOT__rd_val;
        CData/*0:0*/ riscv_core__DOT____Vcellinp__u0_idu__flush;
        IData/*31:0*/ riscv_core__DOT__inst_if_id_o;
        VL_IN8(clk,0,0);
        VL_OUT8(inst_ce_o,0,0);
        VL_OUT8(data_ce_o,0,0);
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_6;
    VlMTaskVertex __Vm_mtaskstate_11;
    VlMTaskVertex __Vm_mtaskstate_7;
    VlMTaskVertex __Vm_mtaskstate_8;
    VlMTaskVertex __Vm_mtaskstate_10;
    VlMTaskVertex __Vm_mtaskstate_final__nba;

    // INTERNAL VARIABLES
    Vriscv_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_core___024root(Vriscv_core__Syms* symsp, const char* v__name);
    ~Vriscv_core___024root();
    VL_UNCOPYABLE(Vriscv_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
