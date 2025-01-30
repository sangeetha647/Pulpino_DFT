// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB_GPIO_H_
#define _VAPB_GPIO_H_  // guard

#include "verilated.h"

//==========

class Vapb_gpio__Syms;

//----------

VL_MODULE(Vapb_gpio) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(HCLK,0,0);
    VL_IN8(HRESETn,0,0);
    VL_IN8(dft_cg_enable_i,0,0);
    VL_IN8(PWRITE,0,0);
    VL_IN8(PSEL,0,0);
    VL_IN8(PENABLE,0,0);
    VL_OUT8(PREADY,0,0);
    VL_OUT8(PSLVERR,0,0);
    VL_OUTW(gpio_padcfg,127,0,4);
    VL_OUT8(__SYM__interrupt,0,0);
    VL_IN16(PADDR,11,0);
    VL_IN(PWDATA,31,0);
    VL_OUT(PRDATA,31,0);
    VL_IN(gpio_in,31,0);
    VL_OUT(gpio_in_sync,31,0);
    VL_OUT(gpio_out,31,0);
    VL_OUT(gpio_dir,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    QData/*63:0*/ apb_gpio__DOT__r_gpio_inttype;
    WData/*127:0*/ apb_gpio__DOT__s_gpio_inttype[4];
    WData/*127:0*/ apb_gpio__DOT__r_gpio_padcfg[4];
    WData/*255:0*/ apb_gpio__DOT__s_gpio_padcfg[8];
    CData/*0:0*/ apb_gpio__DOT__s_write;
    SData/*15:0*/ apb_gpio__DOT__s_clk_en;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_inten;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_out;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_dir;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_sync0;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_sync1;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_in;
    IData/*31:0*/ apb_gpio__DOT__r_gpio_en;
    IData/*31:0*/ apb_gpio__DOT__s_gpio_rise;
    IData/*31:0*/ apb_gpio__DOT__s_gpio_fall;
    IData/*31:0*/ apb_gpio__DOT__s_is_int_rise;
    IData/*31:0*/ apb_gpio__DOT__s_is_int_rifa;
    IData/*31:0*/ apb_gpio__DOT__s_is_int_fall;
    IData/*31:0*/ apb_gpio__DOT__s_is_int_all;
    IData/*31:0*/ apb_gpio__DOT__r_status;
    QData/*63:0*/ apb_gpio__DOT__s_gpio_inten;
    QData/*63:0*/ apb_gpio__DOT__s_gpio_out;
    QData/*63:0*/ apb_gpio__DOT__s_gpio_dir;
    QData/*63:0*/ apb_gpio__DOT__s_gpio_en;
    QData/*63:0*/ apb_gpio__DOT__s_cg_en;
    QData/*63:0*/ apb_gpio__DOT__s_write_cfg;
    QData/*63:0*/ apb_gpio__DOT__s_write_inttype;
    QData/*63:0*/ apb_gpio__DOT__s_write_dir;
    QData/*63:0*/ apb_gpio__DOT__s_write_out;
    QData/*63:0*/ apb_gpio__DOT__s_write_inten;
    QData/*63:0*/ apb_gpio__DOT__s_write_gpen;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__HCLK;
    CData/*0:0*/ __Vclklast__TOP__HRESETn;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vapb_gpio__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vapb_gpio);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vapb_gpio(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vapb_gpio();
    
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
    static void _eval_initial_loop(Vapb_gpio__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vapb_gpio__Syms* symsp, bool first);
  private:
    static QData _change_request(Vapb_gpio__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vapb_gpio__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vapb_gpio__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vapb_gpio__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vapb_gpio__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vapb_gpio__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vapb_gpio__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vapb_gpio__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vapb_gpio__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
