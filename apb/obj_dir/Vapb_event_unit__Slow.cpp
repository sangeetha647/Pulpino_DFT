// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_event_unit.h for the primary calling header

#include "Vapb_event_unit.h"
#include "Vapb_event_unit__Syms.h"

//==========

VL_CTOR_IMP(Vapb_event_unit) {
    Vapb_event_unit__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_event_unit__Syms(this, name());
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_event_unit::__Vconfigure(Vapb_event_unit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_event_unit::~Vapb_event_unit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_event_unit::_settle__TOP__1(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_settle__TOP__1\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_event_unit__DOT__pslverr = (6U & (IData)(vlTOPp->apb_event_unit__DOT__pslverr));
    vlTOPp->apb_event_unit__DOT__pready = (1U | (IData)(vlTOPp->apb_event_unit__DOT__pready));
    vlTOPp->apb_event_unit__DOT__pslverr = (5U & (IData)(vlTOPp->apb_event_unit__DOT__pslverr));
    vlTOPp->apb_event_unit__DOT__pready = (2U | (IData)(vlTOPp->apb_event_unit__DOT__pready));
    vlTOPp->apb_event_unit__DOT__pslverr = (3U & (IData)(vlTOPp->apb_event_unit__DOT__pslverr));
    vlTOPp->apb_event_unit__DOT__pready = (4U | (IData)(vlTOPp->apb_event_unit__DOT__pready));
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
    vlTOPp->clk_gate_core_o = 1U;
    if ((0U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
        if ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
            vlTOPp->clk_gate_core_o = ((2U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)) 
                                       | (0U != vlTOPp->apb_event_unit__DOT__events));
        }
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
                goto __Vlabel1;
            }
            vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if ((0U != vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q[1U])) {
        vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n 
            = (vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n 
               | ((IData)(1U) << (IData)(vlTOPp->apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int)));
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
                goto __Vlabel2;
            }
            vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
    if ((0U != vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__regs_q[1U])) {
        vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n 
            = (vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__irq_n 
               | ((IData)(1U) << (IData)(vlTOPp->apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int)));
    }
    vlTOPp->apb_event_unit__DOT__fetch_enable_int = 
        (1U & ((0U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))
                ? (~ ((IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__regs_q) 
                      & (~ (IData)((0U != vlTOPp->apb_event_unit__DOT__events)))))
                : ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)) 
                   & (2U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q)))));
    vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int = 0U;
    if ((0U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
        if ((1U != (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q))) {
            vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int 
                = (2U == (IData)(vlTOPp->apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q));
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
    vlTOPp->fetch_enable_o = ((IData)(vlTOPp->apb_event_unit__DOT__fetch_enable_ff2) 
                              & (IData)(vlTOPp->apb_event_unit__DOT__fetch_enable_int));
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

void Vapb_event_unit::_eval_initial(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_eval_initial\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
}

void Vapb_event_unit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::final\n"); );
    // Variables
    Vapb_event_unit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_event_unit::_eval_settle(Vapb_event_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_eval_settle\n"); );
    Vapb_event_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vapb_event_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_event_unit::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
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
    irq_i = VL_RAND_RESET_I(32);
    event_i = VL_RAND_RESET_I(32);
    irq_o = VL_RAND_RESET_I(32);
    fetch_enable_i = VL_RAND_RESET_I(1);
    fetch_enable_o = VL_RAND_RESET_I(1);
    clk_gate_core_o = VL_RAND_RESET_I(1);
    core_busy_i = VL_RAND_RESET_I(1);
    apb_event_unit__DOT__events = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__psel_int = VL_RAND_RESET_I(3);
    apb_event_unit__DOT__pready = VL_RAND_RESET_I(3);
    apb_event_unit__DOT__pslverr = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(96, apb_event_unit__DOT__prdata);
    apb_event_unit__DOT__fetch_enable_ff1 = VL_RAND_RESET_I(1);
    apb_event_unit__DOT__fetch_enable_ff2 = VL_RAND_RESET_I(1);
    apb_event_unit__DOT__fetch_enable_int = VL_RAND_RESET_I(1);
    apb_event_unit__DOT____Vcellout__i_interrupt_unit__PRDATA = VL_RAND_RESET_I(32);
    apb_event_unit__DOT____Vcellout__i_event_unit__PRDATA = VL_RAND_RESET_I(32);
    apb_event_unit__DOT____Vcellout__i_sleep_unit__PRDATA = VL_RAND_RESET_I(32);
    apb_event_unit__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, apb_event_unit__DOT__i_interrupt_unit__DOT__regs_q);
    VL_RAND_RESET_W(128, apb_event_unit__DOT__i_interrupt_unit__DOT__regs_n);
    apb_event_unit__DOT__i_interrupt_unit__DOT__highest_pending_int = VL_RAND_RESET_I(5);
    apb_event_unit__DOT__i_interrupt_unit__DOT__irq_n = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_interrupt_unit__DOT__temp = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_interrupt_unit__DOT__pending_int = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_interrupt_unit__DOT__unnamedblk1__DOT__i = 0;
    VL_RAND_RESET_W(128, apb_event_unit__DOT__i_event_unit__DOT__regs_q);
    VL_RAND_RESET_W(128, apb_event_unit__DOT__i_event_unit__DOT__regs_n);
    apb_event_unit__DOT__i_event_unit__DOT__highest_pending_int = VL_RAND_RESET_I(5);
    apb_event_unit__DOT__i_event_unit__DOT__irq_n = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_event_unit__DOT__temp = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_event_unit__DOT__pending_int = VL_RAND_RESET_I(32);
    apb_event_unit__DOT__i_event_unit__DOT__unnamedblk1__DOT__i = 0;
    apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_N = VL_RAND_RESET_I(2);
    apb_event_unit__DOT__i_sleep_unit__DOT__SLEEP_STATE_Q = VL_RAND_RESET_I(2);
    apb_event_unit__DOT__i_sleep_unit__DOT__regs_q = VL_RAND_RESET_Q(64);
    apb_event_unit__DOT__i_sleep_unit__DOT__regs_n = VL_RAND_RESET_Q(64);
    apb_event_unit__DOT__i_sleep_unit__DOT__core_sleeping_int = VL_RAND_RESET_I(1);
}
