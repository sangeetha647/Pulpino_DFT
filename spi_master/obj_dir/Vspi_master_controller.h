// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPI_MASTER_CONTROLLER_H_
#define _VSPI_MASTER_CONTROLLER_H_  // guard

#include "verilated.h"

//==========

class Vspi_master_controller__Syms;

//----------

VL_MODULE(Vspi_master_controller) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(eot,0,0);
    VL_IN8(spi_clk_div,7,0);
    VL_IN8(spi_clk_div_valid,0,0);
    VL_OUT8(spi_status,6,0);
    VL_IN8(spi_addr_len,5,0);
    VL_IN8(spi_cmd_len,5,0);
    VL_IN8(spi_csreg,3,0);
    VL_IN8(spi_swrst,0,0);
    VL_IN8(spi_rd,0,0);
    VL_IN8(spi_wr,0,0);
    VL_IN8(spi_qrd,0,0);
    VL_IN8(spi_qwr,0,0);
    VL_IN8(spi_ctrl_data_tx_valid,0,0);
    VL_OUT8(spi_ctrl_data_tx_ready,0,0);
    VL_OUT8(spi_ctrl_data_rx_valid,0,0);
    VL_IN8(spi_ctrl_data_rx_ready,0,0);
    VL_OUT8(spi_clk,0,0);
    VL_OUT8(spi_csn0,0,0);
    VL_OUT8(spi_csn1,0,0);
    VL_OUT8(spi_csn2,0,0);
    VL_OUT8(spi_csn3,0,0);
    VL_OUT8(spi_mode,1,0);
    VL_OUT8(spi_sdo0,0,0);
    VL_OUT8(spi_sdo1,0,0);
    VL_OUT8(spi_sdo2,0,0);
    VL_OUT8(spi_sdo3,0,0);
    VL_IN8(spi_sdi0,0,0);
    VL_IN8(spi_sdi1,0,0);
    VL_IN8(spi_sdi2,0,0);
    VL_IN8(spi_sdi3,0,0);
    VL_IN16(spi_data_len,15,0);
    VL_IN16(spi_dummy_rd,15,0);
    VL_IN16(spi_dummy_wr,15,0);
    VL_IN(spi_addr,31,0);
    VL_IN(spi_cmd,31,0);
    VL_IN(spi_ctrl_data_tx,31,0);
    VL_OUT(spi_ctrl_data_rx,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ spi_master_controller__DOT__spi_rise;
    CData/*0:0*/ spi_master_controller__DOT__spi_fall;
    CData/*0:0*/ spi_master_controller__DOT__spi_clock_en;
    CData/*0:0*/ spi_master_controller__DOT__spi_en_tx;
    CData/*0:0*/ spi_master_controller__DOT__spi_en_rx;
    CData/*0:0*/ spi_master_controller__DOT__counter_tx_valid;
    CData/*0:0*/ spi_master_controller__DOT__counter_rx_valid;
    CData/*0:0*/ spi_master_controller__DOT__data_to_tx_valid;
    CData/*0:0*/ spi_master_controller__DOT__data_to_tx_ready;
    CData/*0:0*/ spi_master_controller__DOT__en_quad;
    CData/*0:0*/ spi_master_controller__DOT__en_quad_int;
    CData/*0:0*/ spi_master_controller__DOT__do_rx;
    CData/*1:0*/ spi_master_controller__DOT__s_spi_mode;
    CData/*0:0*/ spi_master_controller__DOT__ctrl_data_valid;
    CData/*0:0*/ spi_master_controller__DOT__spi_cs;
    CData/*0:0*/ spi_master_controller__DOT__tx_clk_en;
    CData/*0:0*/ spi_master_controller__DOT__rx_clk_en;
    CData/*2:0*/ spi_master_controller__DOT__ctrl_data_mux;
    CData/*4:0*/ spi_master_controller__DOT__state;
    CData/*4:0*/ spi_master_controller__DOT__state_next;
    CData/*7:0*/ spi_master_controller__DOT__u_clkgen__DOT__counter_trgt;
    CData/*7:0*/ spi_master_controller__DOT__u_clkgen__DOT__counter_trgt_next;
    CData/*7:0*/ spi_master_controller__DOT__u_clkgen__DOT__counter;
    CData/*7:0*/ spi_master_controller__DOT__u_clkgen__DOT__counter_next;
    CData/*0:0*/ spi_master_controller__DOT__u_clkgen__DOT__spi_clk_next;
    CData/*0:0*/ spi_master_controller__DOT__u_clkgen__DOT__running;
    CData/*0:0*/ spi_master_controller__DOT__u_txreg__DOT__done;
    CData/*0:0*/ spi_master_controller__DOT__u_txreg__DOT__reg_done;
    CData/*0:0*/ spi_master_controller__DOT__u_txreg__DOT__tx_CS;
    CData/*0:0*/ spi_master_controller__DOT__u_txreg__DOT__tx_NS;
    CData/*0:0*/ spi_master_controller__DOT__u_rxreg__DOT__done;
    CData/*0:0*/ spi_master_controller__DOT__u_rxreg__DOT__reg_done;
    CData/*1:0*/ spi_master_controller__DOT__u_rxreg__DOT__rx_CS;
    CData/*1:0*/ spi_master_controller__DOT__u_rxreg__DOT__rx_NS;
    SData/*15:0*/ spi_master_controller__DOT__counter_tx;
    SData/*15:0*/ spi_master_controller__DOT__counter_rx;
    SData/*15:0*/ spi_master_controller__DOT__u_txreg__DOT__counter;
    SData/*15:0*/ spi_master_controller__DOT__u_txreg__DOT__counter_trgt;
    SData/*15:0*/ spi_master_controller__DOT__u_txreg__DOT__counter_next;
    SData/*15:0*/ spi_master_controller__DOT__u_txreg__DOT__counter_trgt_next;
    SData/*15:0*/ spi_master_controller__DOT__u_rxreg__DOT__counter;
    SData/*15:0*/ spi_master_controller__DOT__u_rxreg__DOT__counter_trgt;
    SData/*15:0*/ spi_master_controller__DOT__u_rxreg__DOT__counter_next;
    SData/*15:0*/ spi_master_controller__DOT__u_rxreg__DOT__counter_trgt_next;
    IData/*31:0*/ spi_master_controller__DOT__data_to_tx;
    IData/*31:0*/ spi_master_controller__DOT__u_txreg__DOT__data_int;
    IData/*31:0*/ spi_master_controller__DOT__u_txreg__DOT__data_int_next;
    IData/*31:0*/ spi_master_controller__DOT__u_rxreg__DOT__data_int;
    IData/*31:0*/ spi_master_controller__DOT__u_rxreg__DOT__data_int_next;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rstn;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vspi_master_controller__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vspi_master_controller);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vspi_master_controller(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vspi_master_controller();
    
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
    static void _eval_initial_loop(Vspi_master_controller__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vspi_master_controller__Syms* symsp, bool first);
  private:
    static QData _change_request(Vspi_master_controller__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vspi_master_controller__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vspi_master_controller__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vspi_master_controller__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vspi_master_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vspi_master_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vspi_master_controller__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vspi_master_controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
