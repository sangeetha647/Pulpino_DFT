// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXI_NODE_INTF_WRAP_H_
#define _VAXI_NODE_INTF_WRAP_H_  // guard

#include "verilated.h"

//==========

class Vaxi_node_intf_wrap__Syms;
class Vaxi_node_intf_wrap_axi_request_block__pi1;
class Vaxi_node_intf_wrap_axi_response_block__pi2;


//----------

VL_MODULE(Vaxi_node_intf_wrap) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vaxi_node_intf_wrap_axi_request_block__pi1* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2* __PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(test_en_i,0,0);
    VL_INW(start_addr_i,127,0,4);
    VL_INW(end_addr_i,127,0,4);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vaxi_node_intf_wrap__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaxi_node_intf_wrap);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vaxi_node_intf_wrap(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vaxi_node_intf_wrap();
    
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
    static void _eval_initial_loop(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vaxi_node_intf_wrap__Syms* symsp, bool first);
  private:
    static QData _change_request(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
