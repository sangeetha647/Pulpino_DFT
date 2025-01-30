// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_TIMER_H_
#define _VAPB_TIMER_H_  // guard

#include "verilated.h"

//==========

class Vapb_timer__Syms;

//----------

VL_MODULE(Vapb_timer) {
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
    VL_OUT8(irq_o,3,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ apb_timer__DOT__psel_int;
    CData/*1:0*/ apb_timer__DOT__pready;
    CData/*1:0*/ apb_timer__DOT__pslverr;
    QData/*63:0*/ apb_timer__DOT__prdata;
    WData/*127:0*/ apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[4];
    WData/*127:0*/ apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[4];
    IData/*31:0*/ apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n;
    IData/*31:0*/ apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q;
    WData/*127:0*/ apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[4];
    WData/*127:0*/ apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[4];
    IData/*31:0*/ apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n;
    IData/*31:0*/ apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o;
    CData/*1:0*/ apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o;
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    IData/*31:0*/ apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA;
    IData/*31:0*/ apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_timer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_timer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_timer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_timer();
    
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
    static void _eval_initial_loop(Vapb_timer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_timer__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_timer__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_timer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vapb_timer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_timer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vapb_timer__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vapb_timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
