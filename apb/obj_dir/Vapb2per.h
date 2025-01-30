// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB2PER_H_
#define _VAPB2PER_H_  // guard

#include "verilated.h"

//==========

class Vapb2per__Syms;

//----------

VL_MODULE(Vapb2per) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(PWRITE,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    VL_OUT8(per_master_req_o,0,0);
    VL_OUT8(per_master_we_o,0,0);
    VL_OUT8(per_master_be_o,3,0);
    VL_IN8(per_master_gnt_i,0,0);
    VL_IN8(per_master_r_valid_i,0,0);
    VL_IN8(per_master_r_opc_i,0,0);
    VL_IN(PADDR,31,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    VL_OUT(per_master_add_o,31,0);
    VL_OUT(per_master_wdata_o,31,0);
    VL_IN(per_master_r_rdata_i,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ apb2per__DOT__CS;
    CData/*0:0*/ apb2per__DOT__NS;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    static CData/*0:0*/ __Vtable1_per_master_we_o[64];
    static CData/*0:0*/ __Vtable1_per_master_req_o[64];
    static CData/*0:0*/ __Vtable1_PREADY[64];
    static CData/*0:0*/ __Vtable1_apb2per__DOT__NS[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb2per__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb2per);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb2per(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb2per();
    
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
    static void _eval_initial_loop(Vapb2per__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb2per__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb2per__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb2per__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vapb2per__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vapb2per__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb2per__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb2per__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb2per__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb2per__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vapb2per__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vapb2per__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
