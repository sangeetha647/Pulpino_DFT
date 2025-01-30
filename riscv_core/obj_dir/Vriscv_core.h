// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_CORE_H_
#define _VRISCV_CORE_H_  // guard

#include "verilated.h"

//==========

class Vriscv_core__Syms;

//----------

VL_MODULE(Vriscv_core) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(clock_en_i,0,0);
    VL_IN8(test_en_i,0,0);
    VL_IN8(fregfile_disable_i,0,0);
    VL_IN8(core_id_i,3,0);
    VL_IN8(cluster_id_i,5,0);
    VL_OUT8(instr_req_o,0,0);
    VL_IN8(instr_gnt_i,0,0);
    VL_IN8(instr_rvalid_i,0,0);
    VL_OUT8(data_req_o,0,0);
    VL_IN8(data_gnt_i,0,0);
    VL_IN8(data_rvalid_i,0,0);
    VL_OUT8(data_we_o,0,0);
    VL_OUT8(data_be_o,3,0);
    VL_OUT8(data_atop_o,5,0);
    VL_OUT8(data_unaligned_o,0,0);
    VL_OUT8(apu_master_req_o,0,0);
    VL_OUT8(apu_master_ready_o,0,0);
    VL_IN8(apu_master_gnt_i,0,0);
    VL_OUT8(apu_master_op_o,5,0);
    VL_OUT8(apu_master_type_o,0,0);
    VL_IN8(apu_master_valid_i,0,0);
    VL_IN8(apu_master_flags_i,4,0);
    VL_IN8(irq_i,0,0);
    VL_IN8(irq_id_i,4,0);
    VL_OUT8(irq_ack_o,0,0);
    VL_OUT8(irq_id_o,4,0);
    VL_IN8(irq_sec_i,0,0);
    VL_OUT8(sec_lvl_o,0,0);
    VL_IN8(debug_req_i,0,0);
    VL_IN8(fetch_enable_i,0,0);
    VL_OUT8(core_busy_o,0,0);
    VL_IN8(ext_perf_counters_i,0,0);
    VL_OUT16(apu_master_flags_o,14,0);
    VL_IN(boot_addr_i,31,0);
    VL_OUT(instr_addr_o,31,0);
    VL_IN(instr_rdata_i,31,0);
    VL_OUT(data_addr_o,31,0);
    VL_OUT(data_wdata_o,31,0);
    VL_IN(data_rdata_i,31,0);
    VL_OUTW(apu_master_operands_o,95,0,3);
    VL_IN(apu_master_result_i,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv_core__DOT__clk;
        CData/*0:0*/ riscv_core__DOT__is_hwlp_id;
        CData/*1:0*/ riscv_core__DOT__hwlp_dec_cnt_id;
        CData/*0:0*/ riscv_core__DOT__instr_valid_id;
        CData/*0:0*/ riscv_core__DOT__is_compressed_id;
        CData/*0:0*/ riscv_core__DOT__is_fetch_failed_id;
        CData/*0:0*/ riscv_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ riscv_core__DOT__clear_instr_valid;
        CData/*0:0*/ riscv_core__DOT__pc_set;
        CData/*2:0*/ riscv_core__DOT__pc_mux_id;
        CData/*2:0*/ riscv_core__DOT__exc_pc_mux_id;
        CData/*5:0*/ riscv_core__DOT__exc_cause;
        CData/*0:0*/ riscv_core__DOT__trap_addr_mux;
        CData/*0:0*/ riscv_core__DOT__is_decoding;
        CData/*0:0*/ riscv_core__DOT__useincr_addr_ex;
        CData/*0:0*/ riscv_core__DOT__data_misaligned;
        CData/*0:0*/ riscv_core__DOT__mult_multicycle;
        CData/*0:0*/ riscv_core__DOT__branch_in_ex;
        CData/*0:0*/ riscv_core__DOT__ctrl_busy;
        CData/*0:0*/ riscv_core__DOT__alu_en_ex;
        CData/*6:0*/ riscv_core__DOT__alu_operator_ex;
        CData/*4:0*/ riscv_core__DOT__bmask_a_ex;
        CData/*4:0*/ riscv_core__DOT__bmask_b_ex;
        CData/*1:0*/ riscv_core__DOT__imm_vec_ext_ex;
        CData/*1:0*/ riscv_core__DOT__alu_vec_mode_ex;
        CData/*0:0*/ riscv_core__DOT__alu_is_clpx_ex;
        CData/*0:0*/ riscv_core__DOT__alu_is_subrot_ex;
        CData/*1:0*/ riscv_core__DOT__alu_clpx_shift_ex;
        CData/*2:0*/ riscv_core__DOT__mult_operator_ex;
        CData/*0:0*/ riscv_core__DOT__mult_en_ex;
        CData/*0:0*/ riscv_core__DOT__mult_sel_subword_ex;
        CData/*1:0*/ riscv_core__DOT__mult_signed_mode_ex;
        CData/*4:0*/ riscv_core__DOT__mult_imm_ex;
        CData/*1:0*/ riscv_core__DOT__mult_dot_signed_ex;
        CData/*0:0*/ riscv_core__DOT__mult_is_clpx_ex_o;
        CData/*1:0*/ riscv_core__DOT__mult_clpx_shift_ex;
        CData/*0:0*/ riscv_core__DOT__mult_clpx_img_ex;
        CData/*0:0*/ riscv_core__DOT__apu_en_ex;
        CData/*1:0*/ riscv_core__DOT__apu_lat_ex;
        CData/*5:0*/ riscv_core__DOT__regfile_waddr_ex;
        CData/*0:0*/ riscv_core__DOT__regfile_we_ex;
        CData/*0:0*/ riscv_core__DOT__regfile_we_wb;
        CData/*5:0*/ riscv_core__DOT__regfile_alu_waddr_ex;
        CData/*0:0*/ riscv_core__DOT__regfile_alu_we_ex;
        CData/*0:0*/ riscv_core__DOT__regfile_alu_we_fw;
        CData/*0:0*/ riscv_core__DOT__csr_access_ex;
        CData/*1:0*/ riscv_core__DOT__csr_op_ex;
        CData/*0:0*/ riscv_core__DOT__data_we_ex;
        CData/*5:0*/ riscv_core__DOT__data_atop_ex;
        CData/*1:0*/ riscv_core__DOT__data_type_ex;
        CData/*1:0*/ riscv_core__DOT__data_sign_ext_ex;
        CData/*0:0*/ riscv_core__DOT__data_req_ex;
        CData/*0:0*/ riscv_core__DOT__data_load_event_ex;
        CData/*0:0*/ riscv_core__DOT__data_misaligned_ex;
        CData/*0:0*/ riscv_core__DOT__halt_if;
        CData/*0:0*/ riscv_core__DOT__id_ready;
        CData/*0:0*/ riscv_core__DOT__ex_ready;
        CData/*0:0*/ riscv_core__DOT__id_valid;
        CData/*0:0*/ riscv_core__DOT__ex_valid;
        CData/*0:0*/ riscv_core__DOT__lsu_ready_ex;
        CData/*0:0*/ riscv_core__DOT__lsu_ready_wb;
        CData/*0:0*/ riscv_core__DOT__instr_req_int;
        CData/*0:0*/ riscv_core__DOT__csr_save_cause;
        CData/*0:0*/ riscv_core__DOT__csr_save_if;
    };
    struct {
        CData/*0:0*/ riscv_core__DOT__csr_save_id;
        CData/*5:0*/ riscv_core__DOT__csr_cause;
        CData/*0:0*/ riscv_core__DOT__csr_restore_mret_id;
        CData/*2:0*/ riscv_core__DOT__debug_cause;
        CData/*0:0*/ riscv_core__DOT__debug_csr_save;
        CData/*0:0*/ riscv_core__DOT__csr_hwlp_regid;
        CData/*2:0*/ riscv_core__DOT__csr_hwlp_we;
        CData/*0:0*/ riscv_core__DOT__perf_pipeline_stall;
        CData/*0:0*/ riscv_core__DOT__core_ctrl_firstfetch;
        CData/*0:0*/ riscv_core__DOT__core_busy_q;
        CData/*0:0*/ riscv_core__DOT__data_req_pmp;
        CData/*0:0*/ riscv_core__DOT__instr_req_pmp;
        CData/*0:0*/ riscv_core__DOT__core_clock_gate_i__DOT__clk_en;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__offset_fsm_cs;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__if_valid;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__valid;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_busy;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__branch_req;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_valid;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_ready;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__is_hwlp_id_q;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt_if;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_failed;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__illegal_c_insn;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr;
        CData/*2:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS;
        CData/*2:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS;
        CData/*2:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS;
        CData/*2:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative;
        CData/*3:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n;
        CData/*3:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int;
        CData/*3:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_n;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int;
        CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q;
        CData/*0:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__deassert_we;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__uret_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__rega_used_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__regb_used_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__regc_used_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__branch_taken_ex;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__jump_in_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__jr_stall;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__load_stall;
    };
    struct {
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_mask;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__halt_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__exc_ack;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__exc_kill;
        CData/*5:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id;
        CData/*5:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__alu_en;
        CData/*6:0*/ riscv_core__DOT__id_stage_i__DOT__alu_operator;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__regc_mux;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*3:0*/ riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__mult_operator;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mult_int_en;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mult_sel_subword;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__mult_signed_mode;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mult_dot_en;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__mult_dot_signed;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_we_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__data_we_id;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__data_type_id;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__data_req_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__data_load_event_id;
        CData/*5:0*/ riscv_core__DOT__id_stage_i__DOT__atop_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_regid;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_we;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_valid;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__csr_access;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__csr_status;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__prepost_useincr;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__bmask_a_mux;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__bmask_b_mux;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mult_imm_mux;
        CData/*4:0*/ riscv_core__DOT__id_stage_i__DOT__bmask_a_id_imm;
        CData/*4:0*/ riscv_core__DOT__id_stage_i__DOT__bmask_b_id_imm;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__alu_vec_mode;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__scalar_replication;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__is_clpx;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__is_subrot;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__mret_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__uret_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__dret_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we;
    };
    struct {
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req;
        CData/*2:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en;
        CData/*4:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        CData/*4:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_n;
        CData/*0:0*/ riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q;
        CData/*1:0*/ riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
        CData/*4:0*/ riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu;
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu;
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax;
        CData/*7:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel;
        CData/*3:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through;
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result;
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1;
        IData/*23:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2;
        SData/*15:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3;
        SData/*9:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4;
        WData/*159:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[5];
        WData/*159:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[5];
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SN;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SN;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SN;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP;
    };
    struct {
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP;
        CData/*5:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith;
        CData/*4:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword;
        CData/*1:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry;
        CData/*0:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
        CData/*2:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
        CData/*2:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__shamt;
        CData/*3:0*/ riscv_core__DOT__load_store_unit_i__DOT__mask_d;
        CData/*3:0*/ riscv_core__DOT__load_store_unit_i__DOT__mask_q;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__shamt_d;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__shamt_q;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__type_d;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__type_q;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__sign_ext_d;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__resp_state_d;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__resp_state_q;
        CData/*0:0*/ riscv_core__DOT__load_store_unit_i__DOT__ext_bit;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__state_d;
        CData/*1:0*/ riscv_core__DOT__load_store_unit_i__DOT__state_q;
        CData/*0:0*/ riscv_core__DOT__cs_registers_i__DOT__csr_we_int;
        CData/*6:0*/ riscv_core__DOT__cs_registers_i__DOT__mstatus_q;
        CData/*6:0*/ riscv_core__DOT__cs_registers_i__DOT__mstatus_n;
        CData/*5:0*/ riscv_core__DOT__cs_registers_i__DOT__mcause_q;
        CData/*5:0*/ riscv_core__DOT__cs_registers_i__DOT__mcause_n;
        CData/*0:0*/ riscv_core__DOT__cs_registers_i__DOT__id_valid_q;
        SData/*11:0*/ riscv_core__DOT__csr_addr_int;
        SData/*15:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex;
        SData/*15:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result;
        QData/*35:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a;
        QData/*35:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b;
        SData/*14:0*/ riscv_core__DOT__cs_registers_i__DOT__hpm_events;
        IData/*31:0*/ riscv_core__DOT__instr_rdata_id;
        IData/*31:0*/ riscv_core__DOT__pc_id;
        IData/*31:0*/ riscv_core__DOT__alu_operand_a_ex;
        IData/*31:0*/ riscv_core__DOT__alu_operand_b_ex;
        IData/*31:0*/ riscv_core__DOT__alu_operand_c_ex;
        IData/*31:0*/ riscv_core__DOT__mult_operand_a_ex;
        IData/*31:0*/ riscv_core__DOT__mult_operand_b_ex;
        IData/*31:0*/ riscv_core__DOT__mult_operand_c_ex;
        IData/*31:0*/ riscv_core__DOT__mult_dot_op_a_ex;
        IData/*31:0*/ riscv_core__DOT__mult_dot_op_b_ex;
        IData/*31:0*/ riscv_core__DOT__mult_dot_op_c_ex;
        IData/*31:0*/ riscv_core__DOT__regfile_alu_wdata_fw;
        IData/*31:0*/ riscv_core__DOT__lsu_rdata;
        IData/*31:0*/ riscv_core__DOT__data_addr_pmp;
        IData/*31:0*/ riscv_core__DOT__instr_addr_pmp;
    };
    struct {
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_rdata;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__fetch_addr;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__exc_pc;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__hwlp_target;
        IData/*23:0*/ riscv_core__DOT__if_stage_i__DOT__trap_base_addr;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__instr_decompressed;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q;
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[4];
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[4];
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[4];
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[4];
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[4];
        WData/*127:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[4];
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        IData/*31:0*/ riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__imm_i_type;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__imm_vu_type;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__imm_b;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__jump_target;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_target;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_start_int;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_cnt;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_int;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_b;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_b_vec;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__operand_c;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__alu_operand_a;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__alu_operand_b;
        WData/*1023:0*/ riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[32];
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec;
        IData/*31:0*/ riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec;
        IData/*25:0*/ riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu;
        QData/*63:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q;
        QData/*63:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q;
        QData/*63:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q;
        QData/*63:0*/ riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
    };
    struct {
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DN;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DN;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DN;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D;
        IData/*31:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D;
        IData/*16:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
        IData/*16:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
        WData/*71:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[3];
        QData/*33:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a;
        QData/*33:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b;
        IData/*31:0*/ riscv_core__DOT__load_store_unit_i__DOT__rdata_d;
        IData/*31:0*/ riscv_core__DOT__load_store_unit_i__DOT__rdata_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mepc_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mepc_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dcsr_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dcsr_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__depc_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__depc_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dscratch0_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dscratch0_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dscratch1_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__dscratch1_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mscratch_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mscratch_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__exception_pc;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__stack_base_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__stack_base_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__stack_size_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__stack_size_n;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mcounteren_d;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mcounteren_q;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        WData/*1023:0*/ riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32];
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment;
        IData/*31:0*/ riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower;
        WData/*1023:0*/ riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[32];
        WData/*1023:0*/ riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[32];
        QData/*35:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a;
        QData/*35:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b;
        QData/*36:0*/ riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded;
        QData/*33:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac;
        QData/*33:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result;
        QData/*32:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result;
        WData/*67:0*/ riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[3];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ riscv_core__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i;
    CData/*5:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    CData/*0:0*/ __Vclklast__TOP__riscv_core__DOT__clk;
    CData/*0:0*/ __Vchglast__TOP__riscv_core__DOT__ex_ready;
    CData/*0:0*/ __Vchglast__TOP__riscv_core__DOT__lsu_ready_ex;
    CData/*0:0*/ __Vchglast__TOP__riscv_core__DOT__lsu_ready_wb;
    CData/*0:0*/ __Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__valid;
    CData/*0:0*/ __Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__fetch_valid;
    CData/*4:0*/ __Vchglast__TOP__riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    WData/*159:0*/ __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[5];
    SData/*8:0*/ __Vtableidx2;
    WData/*95:0*/ riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[3];
    IData/*31:0*/ __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes;
    IData/*16:0*/ __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    IData/*16:0*/ __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    static CData/*0:0*/ __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[64];
    static CData/*0:0*/ __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[64];
    static CData/*0:0*/ __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[64];
    static CData/*0:0*/ __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[64];
    static CData/*3:0*/ __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[512];
    static CData/*1:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[64];
    static CData/*0:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[64];
    static CData/*0:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[64];
    static CData/*0:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[64];
    static CData/*0:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[64];
    static CData/*0:0*/ __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[64];
    static CData/*1:0*/ __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[64];
    static CData/*0:0*/ __Vtable4_riscv_core__DOT__data_req_pmp[64];
    static CData/*0:0*/ __Vtable4_riscv_core__DOT__lsu_ready_ex[64];
    static CData/*0:0*/ __Vtable4_riscv_core__DOT__lsu_ready_wb[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_core__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_core);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_core();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vriscv_core__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_core__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_core__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_core__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(Vriscv_core__Syms* __restrict vlSymsp);
    static void _combo__TOP__2(Vriscv_core__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(Vriscv_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_core__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__5(Vriscv_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vriscv_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vriscv_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vriscv_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
