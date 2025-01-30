// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_UART_SV_H_
#define _VAPB_UART_SV_H_  // guard

#include "verilated.h"

//==========

class Vapb_uart_sv__Syms;

//----------

VL_MODULE(Vapb_uart_sv) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RSTN,0,0);
    VL_IN8(PWRITE,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    VL_IN8(rx_i,0,0);
    VL_OUT8(tx_o,0,0);
    VL_OUT8(event_o,0,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    WData/*79:0*/ apb_uart_sv__DOT__regs_q[3];
    WData/*79:0*/ apb_uart_sv__DOT__regs_n[3];
    CData/*1:0*/ apb_uart_sv__DOT__trigger_level_n;
    CData/*1:0*/ apb_uart_sv__DOT__trigger_level_q;
    CData/*0:0*/ apb_uart_sv__DOT__parity_error;
    CData/*3:0*/ apb_uart_sv__DOT__clr_int;
    CData/*0:0*/ apb_uart_sv__DOT__tx_ready;
    CData/*0:0*/ apb_uart_sv__DOT__rx_valid;
    CData/*0:0*/ apb_uart_sv__DOT__tx_fifo_clr_n;
    CData/*0:0*/ apb_uart_sv__DOT__tx_fifo_clr_q;
    CData/*0:0*/ apb_uart_sv__DOT__rx_fifo_clr_n;
    CData/*0:0*/ apb_uart_sv__DOT__rx_fifo_clr_q;
    CData/*0:0*/ apb_uart_sv__DOT__fifo_tx_valid;
    CData/*0:0*/ apb_uart_sv__DOT__tx_valid;
    CData/*0:0*/ apb_uart_sv__DOT__fifo_rx_valid;
    CData/*0:0*/ apb_uart_sv__DOT__fifo_rx_ready;
    CData/*7:0*/ apb_uart_sv__DOT__fifo_tx_data;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__CS;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__NS;
    CData/*7:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__reg_data;
    CData/*7:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__reg_data_next;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count_next;
    CData/*2:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__sampleData;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__bit_done;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__start_bit;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall;
    CData/*2:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__CS;
    CData/*2:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__NS;
    CData/*7:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__reg_data;
    CData/*7:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__reg_data_next;
    CData/*2:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count;
    CData/*2:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count_next;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__sampleData;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__bit_done;
    CData/*3:0*/ apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in;
    CData/*3:0*/ apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out;
    CData/*4:0*/ apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements;
    CData/*0:0*/ apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full;
    CData/*3:0*/ apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in;
    CData/*3:0*/ apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out;
    CData/*4:0*/ apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements;
    CData/*0:0*/ apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full;
    CData/*3:0*/ apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n;
    CData/*3:0*/ apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q;
    CData/*0:0*/ apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached;
    SData/*8:0*/ apb_uart_sv__DOT__fifo_rx_data;
    SData/*15:0*/ apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt;
    SData/*15:0*/ apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt;
    SData/*8:0*/ apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[16];
    CData/*7:0*/ apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vclklast__TOP__RSTN;
    static CData/*0:0*/ __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_uart_sv__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_uart_sv);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_uart_sv(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_uart_sv();
    
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
    static void _eval_initial_loop(Vapb_uart_sv__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_uart_sv__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_uart_sv__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_uart_sv__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vapb_uart_sv__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_uart_sv__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_uart_sv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_uart_sv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb_uart_sv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vapb_uart_sv__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vapb_uart_sv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
