// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer.h for the primary calling header

#include "Vapb_timer.h"
#include "Vapb_timer__Syms.h"

//==========

void Vapb_timer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_timer::eval\n"); );
    Vapb_timer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb_timer.sv", 15, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_timer::_eval_initial_loop(Vapb_timer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb_timer.sv", 15, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_timer::_sequent__TOP__2(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_sequent__TOP__2\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[0U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[1U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[2U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[3U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_n[3U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[0U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[1U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[2U];
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[3U] 
            = vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_n[3U];
    } else {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[0U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[2U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[3U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[0U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[2U] = 0U;
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[3U] = 0U;
    }
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n 
        = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q);
    if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_q 
         >= vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__regs_q[1U])) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__1__KET____DOT__timer_i__DOT__cycle_counter_n = 0U;
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
    vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n 
        = ((IData)(1U) + vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q);
    if ((vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_q 
         >= vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__regs_q[1U])) {
        vlTOPp->apb_timer__DOT__TIMER_GEN__BRA__0__KET____DOT__timer_i__DOT__cycle_counter_n = 0U;
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
    vlTOPp->irq_o = ((3U & (IData)(vlTOPp->irq_o)) 
                     | ((IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__1__KET____DOT__timer_i__irq_o) 
                        << 2U));
    vlTOPp->irq_o = ((0xcU & (IData)(vlTOPp->irq_o)) 
                     | (IData)(vlTOPp->apb_timer__DOT____Vcellout__TIMER_GEN__BRA__0__KET____DOT__timer_i__irq_o));
}

VL_INLINE_OPT void Vapb_timer::_combo__TOP__3(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_combo__TOP__3\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vapb_timer::_eval(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_eval\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_timer::_change_request(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_change_request\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_timer::_change_request_1(Vapb_timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_change_request_1\n"); );
    Vapb_timer* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_timer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((HCLK & 0xfeU))) {
        Verilated::overWidthError("HCLK");}
    if (VL_UNLIKELY((HRESETn & 0xfeU))) {
        Verilated::overWidthError("HRESETn");}
    if (VL_UNLIKELY((PADDR & 0xf000U))) {
        Verilated::overWidthError("PADDR");}
    if (VL_UNLIKELY((PWRITE & 0xfeU))) {
        Verilated::overWidthError("PWRITE");}
    if (VL_UNLIKELY((PSEL & 0xfeU))) {
        Verilated::overWidthError("PSEL");}
    if (VL_UNLIKELY((PENABLE & 0xfeU))) {
        Verilated::overWidthError("PENABLE");}
}
#endif  // VL_DEBUG
