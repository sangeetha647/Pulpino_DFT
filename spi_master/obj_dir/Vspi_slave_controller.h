// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPI_SLAVE_CONTROLLER_H_
#define _VSPI_SLAVE_CONTROLLER_H_  // guard

#include "verilated.h"

//==========

class Vspi_slave_controller__Syms;

//----------

VL_MODULE(Vspi_slave_controller) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(sclk,0,0);
    VL_IN8(sys_rstn,0,0);
    VL_IN8(cs,0,0);
    VL_OUT8(en_quad,0,0);
    VL_OUT8(pad_mode,1,0);
    VL_OUT8(rx_counter,7,0);
    VL_OUT8(rx_counter_upd,0,0);
    VL_IN8(rx_data_valid,0,0);
    VL_OUT8(tx_counter,7,0);
    VL_OUT8(tx_counter_upd,0,0);
    VL_OUT8(tx_data_valid,0,0);
    VL_IN8(tx_done,0,0);
    VL_OUT8(ctrl_rd_wr,0,0);
    VL_OUT8(ctrl_addr_valid,0,0);
    VL_OUT8(ctrl_data_rx_valid,0,0);
    VL_IN8(ctrl_data_rx_ready,0,0);
    VL_IN8(ctrl_data_tx_valid,0,0);
    VL_OUT8(ctrl_data_tx_ready,0,0);
    VL_OUT16(wrap_length,15,0);
    VL_IN(rx_data,31,0);
    VL_OUT(tx_data,31,0);
    VL_OUT(ctrl_addr,31,0);
    VL_OUT(ctrl_data_rx,31,0);
    VL_IN(ctrl_data_tx,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ spi_slave_controller__DOT__state;
    CData/*2:0*/ spi_slave_controller__DOT__state_next;
    CData/*0:0*/ spi_slave_controller__DOT__decode_cmd_comb;
    CData/*7:0*/ spi_slave_controller__DOT__cmd_reg;
    CData/*0:0*/ spi_slave_controller__DOT__sample_ADDR;
    CData/*0:0*/ spi_slave_controller__DOT__sample_CMD;
    CData/*0:0*/ spi_slave_controller__DOT__get_addr;
    CData/*0:0*/ spi_slave_controller__DOT__wait_dummy;
    CData/*0:0*/ spi_slave_controller__DOT__get_data;
    CData/*0:0*/ spi_slave_controller__DOT__send_data;
    CData/*0:0*/ spi_slave_controller__DOT__enable_cont;
    CData/*0:0*/ spi_slave_controller__DOT__enable_regs;
    CData/*1:0*/ spi_slave_controller__DOT__reg_sel;
    CData/*0:0*/ spi_slave_controller__DOT__reg_valid;
    CData/*0:0*/ spi_slave_controller__DOT__ctrl_data_tx_ready_next;
    CData/*7:0*/ spi_slave_controller__DOT__tx_counter_next;
    CData/*0:0*/ spi_slave_controller__DOT__tx_counter_upd_next;
    CData/*0:0*/ spi_slave_controller__DOT__tx_data_valid_next;
    CData/*0:0*/ spi_slave_controller__DOT__tx_done_reg;
    CData/*7:0*/ spi_slave_controller__DOT__u_spiregs__DOT__reg0;
    CData/*7:0*/ spi_slave_controller__DOT__u_spiregs__DOT__reg1;
    CData/*7:0*/ spi_slave_controller__DOT__u_spiregs__DOT__reg2;
    CData/*7:0*/ spi_slave_controller__DOT__u_spiregs__DOT__reg3;
    IData/*31:0*/ spi_slave_controller__DOT__addr_reg;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__sclk;
    CData/*0:0*/ __Vclklast__TOP__sys_rstn;
    CData/*0:0*/ __Vclklast__TOP__cs;
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__get_addr[256];
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__get_data[256];
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__send_data[256];
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__enable_cont[256];
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__enable_regs[256];
    static CData/*0:0*/ __Vtable1_spi_slave_controller__DOT__wait_dummy[256];
    static CData/*1:0*/ __Vtable1_spi_slave_controller__DOT__reg_sel[256];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vspi_slave_controller__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vspi_slave_controller);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vspi_slave_controller(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vspi_slave_controller();
    
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
    static void _eval_initial_loop(Vspi_slave_controller__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vspi_slave_controller__Syms* symsp, bool first);
  private:
    static QData _change_request(Vspi_slave_controller__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vspi_slave_controller__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vspi_slave_controller__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vspi_slave_controller__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vspi_slave_controller__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vspi_slave_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vspi_slave_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vspi_slave_controller__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vspi_slave_controller__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vspi_slave_controller__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vspi_slave_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
