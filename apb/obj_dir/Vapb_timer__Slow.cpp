// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer.h for the primary calling header

#include "Vapb_timer.h"
#include "Vapb_timer__Syms.h"

//==========

VL_CTOR_IMP(Vapb_timer) {
    Vapb_timer__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_timer__Syms(this, name());
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_timer::__Vconfigure(Vapb_timer__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_timer::~Vapb_timer() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_timer::_settle__TOP__1(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_settle__TOP__1\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_timer__DOT__pslverr = (2U & (IData)(vlTOPp->apb_timer__DOT__pslverr));
    vlTOPp->apb_timer__DOT__pready = (1U | (IData)(vlTOPp->apb_timer__DOT__pready));
    vlTOPp->apb_timer__DOT__pslverr = (1U & (IData)(vlTOPp->apb_timer__DOT__pslverr));
    vlTOPp->apb_timer__DOT__pready = (2U | (IData)(vlTOPp->apb_timer__DOT__pready));
    vlTOPp->apb_timer__DOT__psel_int = 0U;
    vlTOPp->apb_timer__DOT__psel_int = (((~ ((IData)(1U) 
                                             << (1U 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 4U)))) 
                                         & (IData)(vlTOPp->apb_timer__DOT__psel_int)) 
                                        | ((IData)(vlTOPp->PSEL) 
                                           << (1U & 
                                               ((IData)(vlTOPp->PADDR) 
                                                >> 4U))));
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n 
        = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q);
    if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q 
         >= vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U])) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n = 0U;
    }
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n 
        = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q);
    if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q 
         >= vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U])) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n = 0U;
    }
    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o = 0U;
    if ((0xffffffffU == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U])) {
        vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o 
            = (1U | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o));
    }
    if (((0U != vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U]) 
         & (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U] 
            == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U]))) {
        vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o 
            = (2U | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o));
    }
    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o = 0U;
    if ((0xffffffffU == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U])) {
        vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o 
            = (1U | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o));
    }
    if (((0U != vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U]) 
         & (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U] 
            == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U]))) {
        vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o 
            = (2U | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o));
    }
    vlTOPp->PREADY = (1U & ((0U == (IData)(vlTOPp->apb_timer__DOT__psel_int)) 
                            | ((IData)(vlTOPp->apb_timer__DOT__pready) 
                               >> (1U & ((IData)(vlTOPp->PADDR) 
                                         >> 4U)))));
    vlTOPp->PSLVERR = ((0U != (IData)(vlTOPp->apb_timer__DOT__psel_int)) 
                       & ((IData)(vlTOPp->apb_timer__DOT__pslverr) 
                          >> (1U & ((IData)(vlTOPp->PADDR) 
                                    >> 4U))));
    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA = 0U;
    if ((((IData)(vlTOPp->apb_timer__DOT__psel_int) 
          & (IData)(vlTOPp->PENABLE)) & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0U == (7U & ((IData)(vlTOPp->PADDR) >> 2U)))) {
            vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA 
                = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U];
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->PADDR) 
                              >> 2U)))) {
                vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA 
                    = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U];
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->PADDR) 
                                  >> 2U)))) {
                    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA 
                        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U];
                }
            }
        }
    }
    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA = 0U;
    if (((((IData)(vlTOPp->apb_timer__DOT__psel_int) 
           >> 1U) & (IData)(vlTOPp->PENABLE)) & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0U == (7U & ((IData)(vlTOPp->PADDR) >> 2U)))) {
            vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA 
                = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U];
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->PADDR) 
                              >> 2U)))) {
                vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA 
                    = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U];
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->PADDR) 
                                  >> 2U)))) {
                    vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA 
                        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U];
                }
            }
        }
    }
    vlTOPp->irq_o = ((0xcU & (IData)(vlTOPp->irq_o)) 
                     | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o));
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[1U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[2U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[3U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[3U];
    if ((1U & ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o) 
               | ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o) 
                  >> 1U)))) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] = 0U;
    } else {
        if (((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
              & (0U != (7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U] 
                               << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
                                            >> 3U))))) 
             & ((7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U] 
                        << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
                                     >> 3U))) == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q))) {
            vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] 
                = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U]);
        } else {
            if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
                 & (0U == (7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U] 
                                  << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
                                               >> 3U)))))) {
                vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] 
                    = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U]);
            }
        }
    }
    if ((((IData)(vlTOPp->apb_timer__DOT__psel_int) 
          & (IData)(vlTOPp->PENABLE)) & (IData)(vlTOPp->PWRITE))) {
        if ((0U == (7U & ((IData)(vlTOPp->PADDR) >> 2U)))) {
            vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] 
                = vlTOPp->PWDATA;
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->PADDR) 
                              >> 2U)))) {
                vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[1U] 
                    = vlTOPp->PWDATA;
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->PADDR) 
                                  >> 2U)))) {
                    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[2U] 
                        = vlTOPp->PWDATA;
                    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U] = 0U;
                }
            }
        }
    }
    vlTOPp->irq_o = ((3U & (IData)(vlTOPp->irq_o)) 
                     | ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o) 
                        << 2U));
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[1U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[2U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U];
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[3U] 
        = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[3U];
    if ((1U & ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o) 
               | ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o) 
                  >> 1U)))) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] = 0U;
    } else {
        if (((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
              & (0U != (7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U] 
                               << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
                                            >> 3U))))) 
             & ((7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U] 
                        << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
                                     >> 3U))) == vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q))) {
            vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] 
                = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U]);
        } else {
            if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
                 & (0U == (7U & ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U] 
                                  << 0x1dU) | (vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
                                               >> 3U)))))) {
                vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] 
                    = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U]);
            }
        }
    }
    if (((((IData)(vlTOPp->apb_timer__DOT__psel_int) 
           >> 1U) & (IData)(vlTOPp->PENABLE)) & (IData)(vlTOPp->PWRITE))) {
        if ((0U == (7U & ((IData)(vlTOPp->PADDR) >> 2U)))) {
            vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] 
                = vlTOPp->PWDATA;
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->PADDR) 
                              >> 2U)))) {
                vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[1U] 
                    = vlTOPp->PWDATA;
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->PADDR) 
                                  >> 2U)))) {
                    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[2U] 
                        = vlTOPp->PWDATA;
                    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U] = 0U;
                }
            }
        }
    }
    vlTOPp->apb_timer__DOT__prdata = ((0xffffffff00000000ULL 
                                       & vlTOPp->apb_timer__DOT__prdata) 
                                      | (IData)((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA)));
    vlTOPp->apb_timer__DOT__prdata = ((0xffffffffULL 
                                       & vlTOPp->apb_timer__DOT__prdata) 
                                      | ((QData)((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA)) 
                                         << 0x20U));
    vlTOPp->PRDATA = ((0U != (IData)(vlTOPp->apb_timer__DOT__psel_int))
                       ? (IData)((vlTOPp->apb_timer__DOT__prdata 
                                  >> (0x20U & ((IData)(vlTOPp->PADDR) 
                                               << 1U))))
                       : 0U);
}

void Vapb_timer::_eval_initial(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_eval_initial\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_timer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::final\n"); );
    // Variables
    Vapb_timer__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_timer::_eval_settle(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_eval_settle\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vapb_timer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_ctor_var_reset\n"); );
    // Body
    HCLK = VL_RAND_RESET_I(1);
    HRESETn = VL_RAND_RESET_I(1);
    PADDR = VL_RAND_RESET_I(12);
    PWDATA = VL_RAND_RESET_I(32);
    PWRITE = VL_RAND_RESET_I(1);
    PSEL = VL_RAND_RESET_I(1);
    PENABLE = VL_RAND_RESET_I(1);
    PRDATA = VL_RAND_RESET_I(32);
    PREADY = VL_RAND_RESET_I(1);
    PSLVERR = VL_RAND_RESET_I(1);
    irq_o = VL_RAND_RESET_I(4);
    apb_timer__DOT__psel_int = VL_RAND_RESET_I(2);
    apb_timer__DOT__pready = VL_RAND_RESET_I(2);
    apb_timer__DOT__pslverr = VL_RAND_RESET_I(2);
    apb_timer__DOT__prdata = VL_RAND_RESET_Q(64);
    apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o = VL_RAND_RESET_I(2);
    apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__PRDATA = VL_RAND_RESET_I(32);
    apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o = VL_RAND_RESET_I(2);
    apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__PRDATA = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q);
    VL_RAND_RESET_W(128, apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n);
    apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n = VL_RAND_RESET_I(32);
    apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q);
    VL_RAND_RESET_W(128, apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n);
    apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n = VL_RAND_RESET_I(32);
    apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q = VL_RAND_RESET_I(32);
}
