// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_SPI_MASTER_H_
#define _VAPB_SPI_MASTER_H_  // guard

#include "verilated.h"

//==========

class Vapb_spi_master__Syms;

//----------

VL_MODULE(Vapb_spi_master) {
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
    VL_OUT8(events_o,1,0);
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
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ apb_spi_master__DOT__spi_clk_div;
        CData/*0:0*/ apb_spi_master__DOT__spi_clk_div_valid;
        CData/*5:0*/ apb_spi_master__DOT__spi_addr_len;
        CData/*5:0*/ apb_spi_master__DOT__spi_cmd_len;
        CData/*0:0*/ apb_spi_master__DOT__spi_swrst;
        CData/*0:0*/ apb_spi_master__DOT__spi_rd;
        CData/*0:0*/ apb_spi_master__DOT__spi_wr;
        CData/*0:0*/ apb_spi_master__DOT__spi_qrd;
        CData/*0:0*/ apb_spi_master__DOT__spi_qwr;
        CData/*3:0*/ apb_spi_master__DOT__spi_csreg;
        CData/*0:0*/ apb_spi_master__DOT__spi_data_tx_valid;
        CData/*0:0*/ apb_spi_master__DOT__spi_data_rx_valid;
        CData/*0:0*/ apb_spi_master__DOT__spi_data_rx_ready;
        CData/*6:0*/ apb_spi_master__DOT__spi_ctrl_status;
        CData/*0:0*/ apb_spi_master__DOT__spi_ctrl_data_tx_valid;
        CData/*0:0*/ apb_spi_master__DOT__spi_ctrl_data_tx_ready;
        CData/*0:0*/ apb_spi_master__DOT__spi_ctrl_data_rx_valid;
        CData/*0:0*/ apb_spi_master__DOT__s_eot;
        CData/*4:0*/ apb_spi_master__DOT__r_counter_tx;
        CData/*4:0*/ apb_spi_master__DOT__r_counter_rx;
        CData/*4:0*/ apb_spi_master__DOT__s_th_tx;
        CData/*4:0*/ apb_spi_master__DOT__s_th_rx;
        CData/*4:0*/ apb_spi_master__DOT__s_cnt_tx;
        CData/*4:0*/ apb_spi_master__DOT__s_cnt_rx;
        CData/*0:0*/ apb_spi_master__DOT__s_int_tx;
        CData/*0:0*/ apb_spi_master__DOT__s_int_rx;
        CData/*0:0*/ apb_spi_master__DOT__s_int_en;
        CData/*0:0*/ apb_spi_master__DOT__s_int_cnt_en;
        CData/*0:0*/ apb_spi_master__DOT__s_int_rd_intsta;
        CData/*1:0*/ apb_spi_master__DOT__r_state_rx;
        CData/*1:0*/ apb_spi_master__DOT__s_state_rx_next;
        CData/*1:0*/ apb_spi_master__DOT__r_state_tx;
        CData/*1:0*/ apb_spi_master__DOT__s_state_tx_next;
        CData/*3:0*/ apb_spi_master__DOT__u_txfifo__DOT__pointer_in;
        CData/*3:0*/ apb_spi_master__DOT__u_txfifo__DOT__pointer_out;
        CData/*4:0*/ apb_spi_master__DOT__u_txfifo__DOT__elements;
        CData/*0:0*/ apb_spi_master__DOT__u_txfifo__DOT__full;
        CData/*3:0*/ apb_spi_master__DOT__u_rxfifo__DOT__pointer_in;
        CData/*3:0*/ apb_spi_master__DOT__u_rxfifo__DOT__pointer_out;
        CData/*4:0*/ apb_spi_master__DOT__u_rxfifo__DOT__elements;
        CData/*0:0*/ apb_spi_master__DOT__u_rxfifo__DOT__full;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_rise;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_fall;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__en_quad;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__en_quad_int;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__do_rx;
        CData/*1:0*/ apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__spi_cs;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en;
        CData/*2:0*/ apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux;
        CData/*4:0*/ apb_spi_master__DOT__u_spictrl__DOT__state;
        CData/*4:0*/ apb_spi_master__DOT__u_spictrl__DOT__state_next;
        CData/*7:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt;
        CData/*7:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next;
        CData/*7:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter;
    };
    struct {
        CData/*7:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_next;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done;
        CData/*0:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done;
        CData/*1:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS;
        CData/*1:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS;
        SData/*15:0*/ apb_spi_master__DOT__spi_data_len;
        SData/*15:0*/ apb_spi_master__DOT__spi_dummy_rd;
        SData/*15:0*/ apb_spi_master__DOT__spi_dummy_wr;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__counter_tx;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__counter_rx;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next;
        SData/*15:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next;
        IData/*31:0*/ apb_spi_master__DOT__spi_addr;
        IData/*31:0*/ apb_spi_master__DOT__spi_cmd;
        IData/*31:0*/ apb_spi_master__DOT__u_spictrl__DOT__data_to_tx;
        IData/*31:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int;
        IData/*31:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next;
        IData/*31:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int;
        IData/*31:0*/ apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
        IData/*31:0*/ apb_spi_master__DOT__u_txfifo__DOT__buffer[10];
        IData/*31:0*/ apb_spi_master__DOT__u_rxfifo__DOT__buffer[10];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    IData/*31:0*/ apb_spi_master__DOT__u_txfifo__DOT____Vlvbound1;
    IData/*31:0*/ apb_spi_master__DOT__u_rxfifo__DOT____Vlvbound1;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_spi_master__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_spi_master);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_spi_master(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_spi_master();
    
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
    static void _eval_initial_loop(Vapb_spi_master__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_spi_master__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_spi_master__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_spi_master__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vapb_spi_master__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vapb_spi_master__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_spi_master__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_spi_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_spi_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb_spi_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vapb_spi_master__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vapb_spi_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
