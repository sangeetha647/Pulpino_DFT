// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_NODE_H_
#define _VAPB_NODE_H_  // guard

#include "verilated.h"

//==========

class Vapb_node__Syms;

//----------

VL_MODULE(Vapb_node) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(penable_i,0,0);
    VL_IN8(pwrite_i,0,0);
    VL_IN8(psel_i,0,0);
    VL_OUT8(pready_o,0,0);
    VL_OUT8(pslverr_o,0,0);
    VL_OUT8(penable_o,7,0);
    VL_OUT8(pwrite_o,7,0);
    VL_OUT8(psel_o,7,0);
    VL_IN8(pready_i,7,0);
    VL_IN8(pslverr_i,7,0);
    VL_IN(paddr_i,31,0);
    VL_IN(pwdata_i,31,0);
    VL_OUT(prdata_o,31,0);
    VL_OUTW(paddr_o,255,0,8);
    VL_OUTW(pwdata_o,255,0,8);
    VL_INW(prdata_i,255,0,8);
    VL_INW(START_ADDR_i,255,0,8);
    VL_INW(END_ADDR_i,255,0,8);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_node__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_node);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_node(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_node();
    
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
    static void _eval_initial_loop(Vapb_node__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_node__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_node__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_node__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vapb_node__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_node__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_node__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_node__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
