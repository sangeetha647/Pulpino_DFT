// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_event_unit.h for the primary calling header

#include "Vapb_event_unit.h"
#include "Vapb_event_unit__Syms.h"

//==========

void Vapb_event_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_event_unit::eval\n"); );
    Vapb_event_unit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_event_unit.sv", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_event_unit::_eval_initial_loop(Vapb_event_unit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_event_unit.sv", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_event_unit::_sequent__TOP__2(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_sequent__TOP__2\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_event_unit__DOT__fetch_enable_ff2 = 
        ((IData)(vlTOPp->HRESETn) & (IData)(vlTOPp->apb_event_unit__DOT__fetch_enable_ff1));
    vlTOPp->apb_event_unit__DOT__fetch_enable_ff1 = 
        ((IData)(vlTOPp->HRESETn) & (IData)(vlTOPp->fetch_enable_i));
}

VL_INLINE_OPT void Vapb_event_unit::_sequent__TOP__3(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_sequent__TOP__3\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->HRESETn) {
        vlTOPp->irq_o = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n;
        vlTOPp->apb_event_unit__DOT__events = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n;
        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q 
            = vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N;
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[0U] 
            = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[0U];
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U] 
            = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[1U];
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[2U] 
            = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[2U];
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U] 
            = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[3U];
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[0U] 
            = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[0U];
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U] 
            = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[1U];
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[2U] 
            = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[2U];
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U] 
            = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[3U];
        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q 
            = vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n;
    } else {
        vlTOPp->irq_o = 0U;
        vlTOPp->apb_event_unit__DOT__events = 0U;
        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q = 0U;
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[0U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[2U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[0U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[2U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U] = 0U;
        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q = 0ULL;
    }
    vlTOPp->clk_gate_core_o = 1U;
    if ((0U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
        if ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
            vlTOPp->clk_gate_core_o = ((2U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)) 
                                       | (0U != vlTOPp->apb_event_unit__DOT__events));
        }
    }
    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int = 0U;
    if ((0U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
        if ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
            vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int 
                = (2U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q));
        }
    }
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int = 0U;
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n = 0U;
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i = 5U;
    {
        while (VL_GTS_III(1,32,32, 0x20U, vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i)) {
            vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__temp 
                = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i;
            if ((1U & (vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[
                       (3U & (((IData)(0x20U) + (0x1fU 
                                                 & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x20U) 
                                            + (0x1fU 
                                               & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i)))))) {
                vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int 
                    = (0x1fU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__temp);
                goto __Vlabel1;
            }
            vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if ((0U != vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n 
            = (vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n 
               | ((IData)(1U) << (IData)(vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int)));
    }
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int = 0U;
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n = 0U;
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i = 5U;
    {
        while (VL_GTS_III(1,32,32, 0x20U, vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i)) {
            vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__temp 
                = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i;
            if ((1U & (vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[
                       (3U & (((IData)(0x20U) + (0x1fU 
                                                 & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x20U) 
                                            + (0x1fU 
                                               & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i)))))) {
                vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int 
                    = (0x1fU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__temp);
                goto __Vlabel2;
            }
            vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
    if ((0U != vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n 
            = (vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n 
               | ((IData)(1U) << (IData)(vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int)));
    }
    vlTOPp->apb_event_unit__DOT__fetch_enable_int = 
        (1U & ((0U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))
                ? (~ ((IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q) 
                      & (~ (IData)((0U != vlTOPp->apb_event_unit__DOT__events)))))
                : ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)) 
                   & (2U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)))));
}

VL_INLINE_OPT void Vapb_event_unit::_combo__TOP__4(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_combo__TOP__4\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_event_unit__DOT__psel_int = 0U;
    vlTOPp->apb_event_unit__DOT____Vlvbound1 = vlTOPp->PSEL;
    if ((2U >= (3U & ((IData)(vlTOPp->PADDR) >> 4U)))) {
        vlTOPp->apb_event_unit__DOT__psel_int = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PADDR) 
                                                        >> 4U)))) 
                                                  & (IData)(vlTOPp->apb_event_unit__DOT__psel_int)) 
                                                 | ((IData)(vlTOPp->apb_event_unit__DOT____Vlvbound1) 
                                                    << 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PADDR) 
                                                        >> 4U))));
    }
    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N 
        = vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q;
    if ((0U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
        if ((1U & (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q))) {
            if ((1U & (~ (IData)((0U != vlTOPp->apb_event_unit__DOT__events))))) {
                vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 1U;
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
            if ((0U != vlTOPp->apb_event_unit__DOT__events)) {
                vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 0U;
            } else {
                if ((1U & ((~ (IData)(vlTOPp->core_busy_i)) 
                           & (~ (IData)((0U != vlTOPp->irq_o)))))) {
                    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 2U;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
                if ((0U != vlTOPp->apb_event_unit__DOT__events)) {
                    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 0U;
                } else {
                    if ((0U != vlTOPp->irq_o)) {
                        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 1U;
                    }
                }
            } else {
                vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = 0U;
            }
        }
    }
    vlTOPp->PREADY = ((0U == (IData)(vlTOPp->apb_event_unit__DOT__psel_int)) 
                      | ((2U >= (3U & ((IData)(vlTOPp->PADDR) 
                                       >> 4U))) & ((IData)(vlTOPp->apb_event_unit__DOT__pready) 
                                                   >> 
                                                   (3U 
                                                    & ((IData)(vlTOPp->PADDR) 
                                                       >> 4U)))));
    vlTOPp->PSLVERR = ((0U != (IData)(vlTOPp->apb_event_unit__DOT__psel_int)) 
                       & ((2U >= (3U & ((IData)(vlTOPp->PADDR) 
                                        >> 4U))) & 
                          ((IData)(vlTOPp->apb_event_unit__DOT__pslverr) 
                           >> (3U & ((IData)(vlTOPp->PADDR) 
                                     >> 4U)))));
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[0U] 
        = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[0U];
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[1U] 
        = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U];
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[2U] 
        = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[2U];
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[3U] 
        = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U];
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[2U] = 0U;
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[3U] = 0U;
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
        = ((vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[0U] 
            & vlTOPp->irq_i) | vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U]);
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
        = (vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
           | vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[2U]);
    if ((1U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffffeU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((2U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffffdU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((4U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffffbU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((8U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffff7U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x10U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffffefU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x20U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffffdfU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x40U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffffbfU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x80U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffff7fU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x100U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffeffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x200U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffdffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x400U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffffbffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x800U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffff7ffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x1000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffefffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x2000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffdfffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x4000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffffbfffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x8000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffff7fffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x10000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffeffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x20000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffdffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x40000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfffbffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x80000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfff7ffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x100000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffefffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x200000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffdfffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x400000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xffbfffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x800000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xff7fffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x1000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfeffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x2000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfdffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x4000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xfbffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x8000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xf7ffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x10000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xefffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x20000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xdfffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x40000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0xbfffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((0x80000000U & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
            = (0x7fffffffU & vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int);
    }
    if ((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
          & (IData)(vlTOPp->PENABLE)) & (IData)(vlTOPp->PWRITE))) {
        if ((8U & (IData)(vlTOPp->PADDR))) {
            if ((4U & (IData)(vlTOPp->PADDR))) {
                vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[3U] 
                    = vlTOPp->PWDATA;
            } else {
                vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[2U] 
                    = vlTOPp->PWDATA;
            }
        } else {
            if ((4U & (IData)(vlTOPp->PADDR))) {
                vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int 
                    = vlTOPp->PWDATA;
            } else {
                vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[0U] 
                    = vlTOPp->PWDATA;
            }
        }
    }
    vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n[1U] 
        = vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int;
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[0U] 
        = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[0U];
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[1U] 
        = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U];
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[2U] 
        = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[2U];
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[3U] 
        = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U];
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[2U] = 0U;
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[3U] = 0U;
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
        = ((vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[0U] 
            & vlTOPp->event_i) | vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U]);
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
        = (vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
           | vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[2U]);
    if ((1U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffffeU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((2U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffffdU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((4U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffffbU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((8U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffff7U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x10U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffffefU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x20U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffffdfU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x40U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffffbfU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x80U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffff7fU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x100U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffeffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x200U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffdffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x400U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffffbffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x800U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffff7ffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x1000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffefffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x2000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffdfffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x4000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffffbfffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x8000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffff7fffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x10000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffeffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x20000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffdffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x40000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfffbffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x80000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfff7ffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x100000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffefffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x200000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffdfffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x400000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xffbfffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x800000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xff7fffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x1000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfeffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x2000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfdffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x4000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xfbffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x8000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xf7ffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x10000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xefffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x20000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xdfffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x40000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0xbfffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if ((0x80000000U & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[3U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
            = (0x7fffffffU & vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int);
    }
    if (((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
           >> 1U) & (IData)(vlTOPp->PENABLE)) & (IData)(vlTOPp->PWRITE))) {
        if ((8U & (IData)(vlTOPp->PADDR))) {
            if ((4U & (IData)(vlTOPp->PADDR))) {
                vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[3U] 
                    = vlTOPp->PWDATA;
            } else {
                vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[2U] 
                    = vlTOPp->PWDATA;
            }
        } else {
            if ((4U & (IData)(vlTOPp->PADDR))) {
                vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int 
                    = vlTOPp->PWDATA;
            } else {
                vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[0U] 
                    = vlTOPp->PWDATA;
            }
        }
    }
    vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_n[1U] 
        = vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__pending_int;
    vlTOPp->apb_event_unit__DOT____Vcellout__i_interrupt_unit__PRDATA = 0U;
    if ((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
          & (IData)(vlTOPp->PENABLE)) & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->apb_event_unit__DOT____Vcellout__i_interrupt_unit__PRDATA 
            = ((0U == (3U & ((IData)(vlTOPp->PADDR) 
                             >> 2U))) ? vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[0U]
                : ((1U == (3U & ((IData)(vlTOPp->PADDR) 
                                 >> 2U))) ? vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U]
                    : 0U));
    }
    vlTOPp->apb_event_unit__DOT____Vcellout__i_event_unit__PRDATA = 0U;
    if (((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
           >> 1U) & (IData)(vlTOPp->PENABLE)) & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->apb_event_unit__DOT____Vcellout__i_event_unit__PRDATA 
            = ((0U == (3U & ((IData)(vlTOPp->PADDR) 
                             >> 2U))) ? vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[0U]
                : ((1U == (3U & ((IData)(vlTOPp->PADDR) 
                                 >> 2U))) ? vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U]
                    : 0U));
    }
    vlTOPp->apb_event_unit__DOT____Vcellout__i_sleep_unit__PRDATA = 0U;
    if (((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
           >> 2U) & (IData)(vlTOPp->PENABLE)) & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->apb_event_unit__DOT____Vcellout__i_sleep_unit__PRDATA 
            = ((0U == (3U & ((IData)(vlTOPp->PADDR) 
                             >> 2U))) ? (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q)
                : ((1U == (3U & ((IData)(vlTOPp->PADDR) 
                                 >> 2U))) ? (IData)(
                                                    (vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q 
                                                     >> 0x20U))
                    : 0U));
    }
    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n 
        = vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q;
    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n 
        = ((0xfffffffeffffffffULL & vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n) 
           | ((QData)((IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int)) 
              << 0x20U));
    if (((IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int) 
         | (0U != vlTOPp->apb_event_unit__DOT__events))) {
        vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n 
            = (0xfffffffffffffffeULL & vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n);
    }
    if (((((IData)(vlTOPp->apb_event_unit__DOT__psel_int) 
           >> 2U) & (IData)(vlTOPp->PENABLE)) & (IData)(vlTOPp->PWRITE))) {
        if ((0U == (3U & ((IData)(vlTOPp->PADDR) >> 2U)))) {
            vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n 
                = ((0xffffffff00000000ULL & vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_n) 
                   | (IData)((IData)(vlTOPp->PWDATA)));
        }
    }
    vlTOPp->apb_event_unit__DOT__prdata[0U] = vlTOPp->apb_event_unit__DOT____Vcellout__i_interrupt_unit__PRDATA;
    vlTOPp->apb_event_unit__DOT__prdata[1U] = vlTOPp->apb_event_unit__DOT____Vcellout__i_event_unit__PRDATA;
    vlTOPp->apb_event_unit__DOT__prdata[2U] = vlTOPp->apb_event_unit__DOT____Vcellout__i_sleep_unit__PRDATA;
    vlTOPp->PRDATA = ((0U != (IData)(vlTOPp->apb_event_unit__DOT__psel_int))
                       ? ((0x5fU >= (0x60U & ((IData)(vlTOPp->PADDR) 
                                              << 1U)))
                           ? vlTOPp->apb_event_unit__DOT__prdata[
                          (3U & ((IData)(vlTOPp->PADDR) 
                                 >> 4U))] : 0U) : 0U);
}

VL_INLINE_OPT void Vapb_event_unit::_multiclk__TOP__5(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_multiclk__TOP__5\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fetch_enable_o = ((IData)(vlTOPp->apb_event_unit__DOT__fetch_enable_ff2) 
                              & (IData)(vlTOPp->apb_event_unit__DOT__fetch_enable_int));
}

void Vapb_event_unit::_eval(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_eval\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)) 
         | ((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    if (((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
          | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn))) 
         | ((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
}

VL_INLINE_OPT QData Vapb_event_unit::_change_request(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_change_request\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_event_unit::_change_request_1(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_change_request_1\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_event_unit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
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
    if (VL_UNLIKELY((fetch_enable_i & 0xfeU))) {
        Verilated::overWidthError("fetch_enable_i");}
    if (VL_UNLIKELY((core_busy_i & 0xfeU))) {
        Verilated::overWidthError("core_busy_i");}
}
#endif  // VL_DEBUG
