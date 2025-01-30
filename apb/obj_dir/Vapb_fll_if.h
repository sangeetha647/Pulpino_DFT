// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_FLL_IF_H_
#define _VAPB_FLL_IF_H_  // guard

#include "verilated.h"

//==========

class Vapb_fll_if__Syms;

//----------

VL_MODULE(Vapb_fll_if) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(HCLK,0,0);
    VL_IN8(HRESETn,0,0);
    VL_IN8(PWRITE,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    VL_OUT8(fll1_req_o,0,0);
    VL_OUT8(fll1_wrn_o,0,0);
    VL_OUT8(fll1_add_o,1,0);
    VL_IN8(fll1_ack_i,0,0);
    VL_IN8(fll1_lock_i,0,0);
    VL_OUT8(fll2_req_o,0,0);
    VL_OUT8(fll2_wrn_o,0,0);
    VL_OUT8(fll2_add_o,1,0);
    VL_IN8(fll2_ack_i,0,0);
    VL_IN8(fll2_lock_i,0,0);
    VL_OUT8(fll3_req_o,0,0);
    VL_OUT8(fll3_wrn_o,0,0);
    VL_OUT8(fll3_add_o,1,0);
    VL_IN8(fll3_ack_i,0,0);
    VL_IN8(fll3_lock_i,0,0);
    VL_OUT8(bbgen_req_o,0,0);
    VL_OUT8(bbgen_wrn_o,0,0);
    VL_OUT8(bbgen_sel_o,0,0);
    VL_IN8(bbgen_ack_i,0,0);
    VL_IN8(bbgen_lock_i,3,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    VL_OUT(fll1_data_o,31,0);
    VL_IN(fll1_r_data_i,31,0);
    VL_OUT(fll2_data_o,31,0);
    VL_IN(fll2_r_data_i,31,0);
    VL_OUT(fll3_data_o,31,0);
    VL_IN(fll3_r_data_i,31,0);
    VL_OUT(bbgen_data_o,31,0);
    VL_IN(bbgen_r_data_i,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ apb_fll_if__DOT__s_fll1_rd_access;
    CData/*0:0*/ apb_fll_if__DOT__s_fll1_wr_access;
    CData/*0:0*/ apb_fll_if__DOT__s_fll2_rd_access;
    CData/*0:0*/ apb_fll_if__DOT__s_fll2_wr_access;
    CData/*0:0*/ apb_fll_if__DOT__s_fll3_rd_access;
    CData/*0:0*/ apb_fll_if__DOT__s_fll3_wr_access;
    CData/*0:0*/ apb_fll_if__DOT__s_bbgen_rd_access;
    CData/*0:0*/ apb_fll_if__DOT__s_bbgen_wr_access;
    CData/*0:0*/ apb_fll_if__DOT__s_read_ready;
    CData/*0:0*/ apb_fll_if__DOT__s_write_ready;
    CData/*0:0*/ apb_fll_if__DOT__s_rvalid;
    CData/*0:0*/ apb_fll_if__DOT__r_fll1_ack_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll1_ack_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_fll2_ack_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll2_ack_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_fll3_ack_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll3_ack_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_bbgen_ack_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_bbgen_ack_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_fll1_lock_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll1_lock_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_fll2_lock_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll2_lock_sync;
    CData/*0:0*/ apb_fll_if__DOT__r_fll3_lock_sync0;
    CData/*0:0*/ apb_fll_if__DOT__r_fll3_lock_sync;
    CData/*3:0*/ apb_fll_if__DOT__r_bbgen_lock_sync0;
    CData/*3:0*/ apb_fll_if__DOT__r_bbgen_lock_sync;
    CData/*0:0*/ apb_fll_if__DOT__s_fll1_valid;
    CData/*0:0*/ apb_fll_if__DOT__s_fll2_valid;
    CData/*0:0*/ apb_fll_if__DOT__s_fll3_valid;
    CData/*0:0*/ apb_fll_if__DOT__s_bbgen_valid;
    CData/*4:0*/ apb_fll_if__DOT__state;
    CData/*4:0*/ apb_fll_if__DOT__state_next;
    IData/*31:0*/ apb_fll_if__DOT__s_read_data;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_fll_if__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_fll_if);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_fll_if(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_fll_if();
    
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
    static void _eval_initial_loop(Vapb_fll_if__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_fll_if__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_fll_if__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_fll_if__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vapb_fll_if__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_fll_if__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_fll_if__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_fll_if__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb_fll_if__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vapb_fll_if__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vapb_fll_if__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
