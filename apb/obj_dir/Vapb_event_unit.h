// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_EVENT_UNIT_H_
#define _VAPB_EVENT_UNIT_H_  // guard

#include "verilated.h"

//==========

class Vapb_event_unit__Syms;

//----------

VL_MODULE(Vapb_event_unit) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(HCLK,0,0);
    VL_IN8(HRESETn,0,0);
    VL_IN8(PWRITE,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    VL_IN8(fetch_enable_i,0,0);
    VL_OUT8(fetch_enable_o,0,0);
    VL_OUT8(clk_gate_core_o,0,0);
    VL_IN8(core_busy_i,0,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    VL_IN(irq_i,31,0);
    VL_IN(event_i,31,0);
    VL_OUT(irq_o,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ apb_event_unit__DOT__psel_int;
    CData/*2:0*/ apb_event_unit__DOT__pready;
    CData/*2:0*/ apb_event_unit__DOT__pslverr;
    CData/*0:0*/ apb_event_unit__DOT__fetch_enable_ff1;
    CData/*0:0*/ apb_event_unit__DOT__fetch_enable_ff2;
    CData/*0:0*/ apb_event_unit__DOT__fetch_enable_int;
    CData/*4:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int;
    CData/*4:0*/ apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int;
    CData/*1:0*/ apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N;
    CData/*1:0*/ apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q;
    CData/*0:0*/ apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int;
    IData/*31:0*/ apb_event_unit__DOT__events;
    WData/*95:0*/ apb_event_unit__DOT__prdata[3];
    WData/*127:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[4];
    WData/*127:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[4];
    IData/*31:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n;
    IData/*31:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__temp;
    IData/*31:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int;
    IData/*31:0*/ apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i;
    WData/*127:0*/ apb_event_unit__DOT__i_event_unit__DOT__regs_q[4];
    WData/*127:0*/ apb_event_unit__DOT__i_event_unit__DOT__regs_n[4];
    IData/*31:0*/ apb_event_unit__DOT__i_event_unit__DOT__irq_n;
    IData/*31:0*/ apb_event_unit__DOT__i_event_unit__DOT__temp;
    IData/*31:0*/ apb_event_unit__DOT__i_event_unit__DOT__pending_int;
    IData/*31:0*/ apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i;
    QData/*63:0*/ apb_event_unit__DOT__i_sleep_unit__DOT__regs_q;
    QData/*63:0*/ apb_event_unit__DOT__i_sleep_unit__DOT__regs_n;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ apb_event_unit__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    IData/*31:0*/ apb_event_unit__DOT____Vcellout__i_interrupt_unit__PRDATA;
    IData/*31:0*/ apb_event_unit__DOT____Vcellout__i_event_unit__PRDATA;
    IData/*31:0*/ apb_event_unit__DOT____Vcellout__i_sleep_unit__PRDATA;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_event_unit__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_event_unit);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_event_unit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_event_unit();
    
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
    static void _eval_initial_loop(Vapb_event_unit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_event_unit__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_event_unit__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_event_unit__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vapb_event_unit__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_event_unit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_event_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_event_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vapb_event_unit__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vapb_event_unit__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vapb_event_unit__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vapb_event_unit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
