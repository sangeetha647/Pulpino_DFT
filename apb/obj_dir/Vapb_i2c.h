// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_I2C_H_
#define _VAPB_I2C_H_  // guard

#include "verilated.h"

//==========

class Vapb_i2c__Syms;

//----------

VL_MODULE(Vapb_i2c) {
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
    VL_OUT8(interrupt_o,0,0);
    VL_IN8(scl_pad_i,0,0);
    VL_OUT8(scl_pad_o,0,0);
    VL_OUT8(scl_padoen_o,0,0);
    VL_IN8(sda_pad_i,0,0);
    VL_OUT8(sda_pad_o,0,0);
    VL_OUT8(sda_padoen_o,0,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ apb_i2c__DOT__r_ctrl;
    CData/*7:0*/ apb_i2c__DOT__r_tx;
    CData/*7:0*/ apb_i2c__DOT__r_cmd;
    CData/*7:0*/ apb_i2c__DOT__s_status;
    CData/*0:0*/ apb_i2c__DOT__s_done;
    CData/*0:0*/ apb_i2c__DOT__s_irxack;
    CData/*0:0*/ apb_i2c__DOT__rxack;
    CData/*0:0*/ apb_i2c__DOT__tip;
    CData/*0:0*/ apb_i2c__DOT__irq_flag;
    CData/*0:0*/ apb_i2c__DOT__i2c_busy;
    CData/*0:0*/ apb_i2c__DOT__i2c_al;
    CData/*0:0*/ apb_i2c__DOT__al;
    CData/*3:0*/ apb_i2c__DOT__byte_controller__DOT__core_cmd;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__core_txd;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__core_ack;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__core_rxd;
    CData/*7:0*/ apb_i2c__DOT__byte_controller__DOT__sr;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__shift;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__ld;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__go;
    CData/*2:0*/ apb_i2c__DOT__byte_controller__DOT__dcnt;
    CData/*4:0*/ apb_i2c__DOT__byte_controller__DOT__c_state;
    CData/*1:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    CData/*1:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    CData/*2:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    CData/*2:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSCL;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSDA;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition;
    CData/*0:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop;
    SData/*15:0*/ apb_i2c__DOT__r_pre;
    SData/*15:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    SData/*13:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt;
    IData/*17:0*/ apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    CData/*2:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    CData/*0:0*/ __Vdly__scl_padoen_o;
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_i2c__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_i2c);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_i2c(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_i2c();
    
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
    static void _eval_initial_loop(Vapb_i2c__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_i2c__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_i2c__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_i2c__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(Vapb_i2c__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_i2c__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_i2c__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_i2c__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb_i2c__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vapb_i2c__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vapb_i2c__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vapb_i2c__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vapb_i2c__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
