// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VADBG_TOP_H_
#define _VADBG_TOP_H_  // guard

#include "verilated.h"

//==========

class Vadbg_top__Syms;

//----------

VL_MODULE(Vadbg_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(tck_i,0,0);
    VL_IN8(trstn_i,0,0);
    VL_IN8(axi_aclk,0,0);
    VL_IN8(axi_aresetn,0,0);
    VL_IN8(tdi_i,0,0);
    VL_OUT8(tdo_o,0,0);
    VL_IN8(shift_dr_i,0,0);
    VL_IN8(pause_dr_i,0,0);
    VL_IN8(update_dr_i,0,0);
    VL_IN8(capture_dr_i,0,0);
    VL_IN8(debug_select_i,0,0);
    VL_IN8(cpu_bp_i,3,0);
    VL_OUT8(cpu_stall_o,3,0);
    VL_OUT8(cpu_stb_o,3,0);
    VL_OUT8(cpu_we_o,3,0);
    VL_IN8(cpu_ack_i,3,0);
    VL_OUT8(cpu_rst_o,3,0);
    VL_OUT8(axi_master_aw_valid,0,0);
    VL_OUT8(axi_master_aw_prot,2,0);
    VL_OUT8(axi_master_aw_region,3,0);
    VL_OUT8(axi_master_aw_len,7,0);
    VL_OUT8(axi_master_aw_size,2,0);
    VL_OUT8(axi_master_aw_burst,1,0);
    VL_OUT8(axi_master_aw_lock,0,0);
    VL_OUT8(axi_master_aw_cache,3,0);
    VL_OUT8(axi_master_aw_qos,3,0);
    VL_OUT8(axi_master_aw_id,2,0);
    VL_OUT8(axi_master_aw_user,5,0);
    VL_IN8(axi_master_aw_ready,0,0);
    VL_OUT8(axi_master_ar_valid,0,0);
    VL_OUT8(axi_master_ar_prot,2,0);
    VL_OUT8(axi_master_ar_region,3,0);
    VL_OUT8(axi_master_ar_len,7,0);
    VL_OUT8(axi_master_ar_size,2,0);
    VL_OUT8(axi_master_ar_burst,1,0);
    VL_OUT8(axi_master_ar_lock,0,0);
    VL_OUT8(axi_master_ar_cache,3,0);
    VL_OUT8(axi_master_ar_qos,3,0);
    VL_OUT8(axi_master_ar_id,2,0);
    VL_OUT8(axi_master_ar_user,5,0);
    VL_IN8(axi_master_ar_ready,0,0);
    VL_OUT8(axi_master_w_valid,0,0);
    VL_OUT8(axi_master_w_strb,7,0);
    VL_OUT8(axi_master_w_user,5,0);
    VL_OUT8(axi_master_w_last,0,0);
    VL_IN8(axi_master_w_ready,0,0);
    VL_IN8(axi_master_r_valid,0,0);
    VL_IN8(axi_master_r_resp,1,0);
    VL_IN8(axi_master_r_last,0,0);
    VL_IN8(axi_master_r_id,2,0);
    VL_IN8(axi_master_r_user,5,0);
    VL_OUT8(axi_master_r_ready,0,0);
    VL_IN8(axi_master_b_valid,0,0);
    VL_IN8(axi_master_b_resp,1,0);
    VL_IN8(axi_master_b_id,2,0);
    VL_IN8(axi_master_b_user,5,0);
    VL_OUT8(axi_master_b_ready,0,0);
    VL_OUT64(cpu_addr_o,63,0);
    VL_INW(cpu_data_i,127,0,4);
    VL_OUTW(cpu_data_o,127,0,4);
    VL_OUT(axi_master_aw_addr,31,0);
    VL_OUT(axi_master_ar_addr,31,0);
    VL_OUT64(axi_master_w_data,63,0);
    VL_IN64(axi_master_r_data,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ adbg_top__DOT__module_id_reg;
        CData/*1:0*/ adbg_top__DOT__module_inhibit;
        CData/*5:0*/ adbg_top__DOT__i_dbg_axi__DOT__bit_count;
        CData/*3:0*/ adbg_top__DOT__i_dbg_axi__DOT__operation;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__addr_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__op_reg_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__word_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel;
        CData/*1:0*/ adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__biu_strobe;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__crc_clr;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__crc_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__crc_shift_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__intreg_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__error_reg_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__bit_count_max;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__biu_ready;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__rd_op;
        CData/*5:0*/ adbg_top__DOT__i_dbg_axi__DOT__word_size_bits;
        CData/*3:0*/ adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__crc_data_in;
        CData/*3:0*/ adbg_top__DOT__i_dbg_axi__DOT__module_state;
        CData/*3:0*/ adbg_top__DOT__i_dbg_axi__DOT__module_next_state;
        CData/*7:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en;
        CData/*7:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec;
        CData/*1:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state;
        CData/*1:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state;
        CData/*5:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation;
        CData/*2:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__internal_register_select;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__op_reg_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel;
        CData/*1:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_clr;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en;
    };
    struct {
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
        CData/*3:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state;
        CData/*0:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state;
        SData/*15:0*/ adbg_top__DOT__i_dbg_axi__DOT__word_count;
        SData/*15:0*/ adbg_top__DOT__i_dbg_axi__DOT__data_to_word_counter;
        SData/*15:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count;
        SData/*15:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter;
        IData/*31:0*/ adbg_top__DOT__i_dbg_axi__DOT__address_counter;
        WData/*64:0*/ adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[3];
        IData/*31:0*/ adbg_top__DOT__i_dbg_axi__DOT__data_to_addr_counter;
        WData/*64:0*/ adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[3];
        IData/*31:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
        IData/*31:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
        IData/*31:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
        IData/*31:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc;
        QData/*63:0*/ adbg_top__DOT__input_shift_reg;
        QData/*32:0*/ adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error;
        QData/*63:0*/ adbg_top__DOT__i_dbg_axi__DOT__data_to_biu;
        QData/*63:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg;
        QData/*63:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg;
        QData/*63:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i;
        QData/*63:0*/ adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o;
    CData/*0:0*/ adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*0:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready;
    CData/*0:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
    CData/*3:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
    CData/*0:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    CData/*0:0*/ __Vclklast__TOP__axi_aclk;
    CData/*0:0*/ __Vclklast__TOP__axi_aresetn;
    CData/*0:0*/ __Vclklast__TOP__tck_i;
    CData/*0:0*/ __Vclklast__TOP__trstn_i;
    QData/*63:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o;
    WData/*127:0*/ adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[4];
    static CData/*5:0*/ __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[16];
    static CData/*3:0*/ __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[16];
    static CData/*0:0*/ __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[16];
    static CData/*2:0*/ __Vtable2_axi_master_aw_size[16];
    static CData/*2:0*/ __Vtable2_axi_master_ar_size[16];
    static CData/*0:0*/ __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[16];
    static CData/*0:0*/ __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[16];
    static CData/*0:0*/ __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vadbg_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadbg_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vadbg_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vadbg_top();
    
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
    static void _eval_initial_loop(Vadbg_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vadbg_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vadbg_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vadbg_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(Vadbg_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vadbg_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(Vadbg_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vadbg_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vadbg_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vadbg_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vadbg_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__9(Vadbg_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vadbg_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vadbg_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vadbg_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vadbg_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vadbg_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
