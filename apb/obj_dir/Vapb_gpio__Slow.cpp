// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_gpio.h for the primary calling header

#include "Vapb_gpio.h"
#include "Vapb_gpio__Syms.h"

//==========

VL_CTOR_IMP(Vapb_gpio) {
    Vapb_gpio__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_gpio__Syms(this, name());
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_gpio::__Vconfigure(Vapb_gpio__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_gpio::~Vapb_gpio() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_gpio::_initial__TOP__1(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_initial__TOP__1\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PREADY = 1U;
    vlTOPp->PSLVERR = 0U;
}

void Vapb_gpio::_settle__TOP__3(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_settle__TOP__3\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_gpio__DOT__s_write = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        vlTOPp->apb_gpio__DOT__s_write = 1U;
    }
    vlTOPp->apb_gpio__DOT__s_write_cfg = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if ((1U & (~ ((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U))) 
                                | (0x14U == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                               | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                              | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                             | (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) 
                            | (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                           | (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0xfU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U))))))) {
                if (((((((((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U))) 
                           | (0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                          | (0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) 
                         | (0xdU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                        | (0x18U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (0x19U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) 
                      | (0x1aU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                     | (0x1bU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U))))) {
                    vlTOPp->apb_gpio__DOT__s_write_cfg 
                        = ((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))
                            ? (0xffULL | vlTOPp->apb_gpio__DOT__s_write_cfg)
                            : ((0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))
                                ? (0xff00ULL | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                : ((0xcU == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))
                                    ? (0xff0000ULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                    : ((0xdU == (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                        ? (0xff000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                        : ((0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))
                                            ? (0xff00000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                            : ((0x19U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (0xff0000000000ULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->PADDR) 
                                                        >> 2U)))
                                                    ? 
                                                   (0xff000000000000ULL 
                                                    | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                                    : 
                                                   (0xff00000000000000ULL 
                                                    | vlTOPp->apb_gpio__DOT__s_write_cfg))))))));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_out = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                if ((0xeU != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_out 
                        = ((3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))
                            ? (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_out)
                            : ((0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))
                                ? (0xffffffff00000000ULL 
                                   | vlTOPp->apb_gpio__DOT__s_write_out)
                                : ((4U == (0x1fU & 
                                           ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))
                                    ? (0xffffffffULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_out)
                                    : ((0x12U == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U)))
                                        ? (0xffffffff00000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_out)
                                        : ((5U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))
                                            ? (0xffffffffULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_out)
                                            : (0xffffffff00000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_out))))));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_dir = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                vlTOPp->apb_gpio__DOT__s_write_dir 
                    = (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_dir);
            } else {
                if ((0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_dir 
                        = (0xffffffff00000000ULL | vlTOPp->apb_gpio__DOT__s_write_dir);
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_gpen = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            if ((8U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                if ((0x15U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((0x16U != (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_write_gpen 
                                            = ((1U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (0xffffffffULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_gpen)
                                                : (0xffffffff00000000ULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_gpen));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_inten = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_inten 
                        = (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_inten);
                } else {
                    if ((0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_write_inten 
                            = (0xffffffff00000000ULL 
                               | vlTOPp->apb_gpio__DOT__s_write_inten);
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_inttype = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_write_inttype 
                                = (0xffffULL | vlTOPp->apb_gpio__DOT__s_write_inttype);
                        } else {
                            if ((8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_write_inttype 
                                    = (0xffff0000ULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_inttype);
                            } else {
                                if ((0x15U == (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_write_inttype 
                                        = (0xffff00000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_inttype);
                                } else {
                                    if ((0x16U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_write_inttype 
                                            = (0xffff000000000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_inttype);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->gpio_out = vlTOPp->apb_gpio__DOT__r_gpio_out;
    vlTOPp->gpio_dir = vlTOPp->apb_gpio__DOT__r_gpio_dir;
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffeULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & vlTOPp->apb_gpio__DOT__r_gpio_inten))));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffdULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 1U)))) 
                                              << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffbULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 2U)))) 
                                              << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffff7ULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 3U)))) 
                                              << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffefULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 4U)))) 
                                              << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffdfULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 5U)))) 
                                              << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffbfULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 6U)))) 
                                              << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffff7fULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 7U)))) 
                                              << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffeffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 8U)))) 
                                              << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffdffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 9U)))) 
                                              << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffbffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xaU)))) 
                                              << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffff7ffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xbU)))) 
                                              << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffefffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xcU)))) 
                                              << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffdfffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xdU)))) 
                                              << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffbfffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xeU)))) 
                                              << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffff7fffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xfU)))) 
                                              << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffeffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x10U)))) 
                                              << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffdffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x11U)))) 
                                              << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffbffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x12U)))) 
                                              << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffff7ffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x13U)))) 
                                              << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffefffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x14U)))) 
                                              << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffdfffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x15U)))) 
                                              << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffbfffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x16U)))) 
                                              << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffff7fffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x17U)))) 
                                              << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffeffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x18U)))) 
                                              << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffdffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x19U)))) 
                                              << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffbffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1aU)))) 
                                              << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffff7ffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1bU)))) 
                                              << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffefffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1cU)))) 
                                              << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffdfffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1dU)))) 
                                              << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffbfffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1eU)))) 
                                              << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffff7fffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1fU)))) 
                                              << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffeffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffdffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffbffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffff7ffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffefffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffdfffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffbfffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffff7fffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffeffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffdffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffbffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffff7ffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffefffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffdfffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffbfffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffff7fffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffeffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffdffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffbffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfff7ffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffefffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffdfffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffbfffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xff7fffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfeffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfdffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfbffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xf7ffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xefffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xdfffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xbfffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0x7fffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_gpio_inten 
                        = ((0xffffffff00000000ULL & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                           | (IData)((IData)(vlTOPp->PWDATA)));
                } else {
                    if ((0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_inten 
                            = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                               | ((QData)((IData)(vlTOPp->PWDATA)) 
                                  << 0x20U));
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffffcU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (3U 
                                                    & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffff3U 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xcU 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)) 
                                                       << 2U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffffcfU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)) 
                                                       << 4U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffff3fU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)) 
                                                       << 6U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffcffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x300U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 8U)) 
                                                       << 8U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffff3ffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc00U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xaU)) 
                                                       << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffcfffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x3000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xcU)) 
                                                       << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffff3fffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xeU)) 
                                                       << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffcffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x10U)) 
                                                       << 0x10U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfff3ffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x12U)) 
                                                       << 0x12U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffcfffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x300000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x14U)) 
                                                       << 0x14U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xff3fffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc00000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x16U)) 
                                                       << 0x16U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfcffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x3000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x18U)) 
                                                       << 0x18U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xf3ffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1aU)) 
                                                       << 0x1aU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xcfffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1cU)) 
                                                       << 0x1cU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0x3fffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1eU)) 
                                                       << 0x1eU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffffcU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x20U))));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffff3U 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xcU 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x22U)) 
                                                       << 2U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffffcfU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x24U)) 
                                                       << 4U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffff3fU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x26U)) 
                                                       << 6U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffcffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x300U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x28U)) 
                                                       << 8U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffff3ffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc00U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2aU)) 
                                                       << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffcfffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x3000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2cU)) 
                                                       << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffff3fffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2eU)) 
                                                       << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffcffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x30U)) 
                                                       << 0x10U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfff3ffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x32U)) 
                                                       << 0x12U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffcfffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x300000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x34U)) 
                                                       << 0x14U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xff3fffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc00000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x36U)) 
                                                       << 0x16U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfcffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x3000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x38U)) 
                                                       << 0x18U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xf3ffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3aU)) 
                                                       << 0x1aU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xcfffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3cU)) 
                                                       << 0x1cU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0x3fffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3eU)) 
                                                       << 0x1eU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffffcU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffff3U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffffcfU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffff3fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffcffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffff3ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffcfffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffff3fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffcffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfff3ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffcfffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xff3fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfcffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xf3ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xcfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0x3fffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffffcU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffff3U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffffcfU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffff3fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffcffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffff3ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffcfffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffff3fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffcffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfff3ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffcfffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xff3fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfcffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xf3ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xcfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0x3fffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffffcU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (3U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffff3U & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xcU & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffffcfU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffff3fU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffcffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x300U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffff3ffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc00U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffcfffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x3000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffff3fffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffcffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfff3ffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffcfffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x300000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xff3fffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc00000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfcffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x3000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xf3ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xcfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0x3fffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0000000U & vlTOPp->PWDATA));
                        } else {
                            if ((8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffffcU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (3U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffff3U 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xcU & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffffcfU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffff3fU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffcffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x300U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffff3ffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc00U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffcfffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x3000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffff3fffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffcffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfff3ffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffcfffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x300000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xff3fffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc00000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfcffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x3000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xf3ffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xcfffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0x3fffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0000000U 
                                          & vlTOPp->PWDATA));
                            } else {
                                if ((0x15U == (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffffcU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (3U & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffff3U 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xcU 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffffcfU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffff3fU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffcffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x300U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffff3ffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc00U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffcfffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x3000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffff3fffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffcffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfff3ffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffcfffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x300000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xff3fffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc00000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfcffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x3000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xf3ffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xcfffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0x3fffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0000000U 
                                              & vlTOPp->PWDATA));
                                } else {
                                    if ((0x16U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffffcU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (3U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffff3U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xcU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffffcfU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffff3fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffcffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x300U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffff3ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc00U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffcfffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x3000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffff3fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffcffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfff3ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffcfffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x300000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xff3fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc00000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfcffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x3000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xf3ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xcfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0x3fffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0000000U 
                                                  & vlTOPp->PWDATA));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffeULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | (IData)((IData)(
                                                           (1U 
                                                            & vlTOPp->apb_gpio__DOT__r_gpio_out))));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffdULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 1U)))) 
                                            << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffbULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 2U)))) 
                                            << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffff7ULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 3U)))) 
                                            << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffefULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 4U)))) 
                                            << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffdfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 5U)))) 
                                            << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffbfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 6U)))) 
                                            << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffff7fULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 7U)))) 
                                            << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffeffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 8U)))) 
                                            << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffdffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 9U)))) 
                                            << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffbffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xaU)))) 
                                            << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffff7ffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xbU)))) 
                                            << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffefffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xcU)))) 
                                            << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffdfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xdU)))) 
                                            << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffbfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xeU)))) 
                                            << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffff7fffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xfU)))) 
                                            << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffeffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x10U)))) 
                                            << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffdffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x11U)))) 
                                            << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffbffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x12U)))) 
                                            << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffff7ffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x13U)))) 
                                            << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffefffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x14U)))) 
                                            << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffdfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x15U)))) 
                                            << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffbfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x16U)))) 
                                            << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffff7fffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x17U)))) 
                                            << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffeffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x18U)))) 
                                            << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffdffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x19U)))) 
                                            << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffbffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1aU)))) 
                                            << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffff7ffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1bU)))) 
                                            << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffefffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1cU)))) 
                                            << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffdfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1dU)))) 
                                            << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffbfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1eU)))) 
                                            << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffff7fffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1fU)))) 
                                            << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffeffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffdffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffbffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffff7ffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffefffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffdfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffbfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffff7fffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffeffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffdffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffbffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffff7ffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffefffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffdfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffbfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffff7fffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffeffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffdffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffbffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfff7ffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffefffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffdfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffbfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xff7fffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfeffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfdffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfbffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xf7ffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xefffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xdfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xbfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0x7fffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                if ((0xeU != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    if ((3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                               | (IData)((IData)(vlTOPp->PWDATA)));
                    } else {
                        if ((0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_out 
                                = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                   | ((QData)((IData)(vlTOPp->PWDATA)) 
                                      << 0x20U));
                        } else {
                            if ((4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffeULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                             | vlTOPp->PWDATA)))));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffdULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 1U)))) 
                                          << 1U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffbULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 2U)))) 
                                          << 2U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffff7ULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 3U)))) 
                                          << 3U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffefULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 4U)))) 
                                          << 4U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffdfULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 5U)))) 
                                          << 5U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffbfULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 6U)))) 
                                          << 6U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffff7fULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 7U)))) 
                                          << 7U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffeffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 8U)))) 
                                          << 8U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffdffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 9U)))) 
                                          << 9U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffbffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xaU)))) 
                                          << 0xaU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffff7ffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xbU)))) 
                                          << 0xbU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffefffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xcU)))) 
                                          << 0xcU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffdfffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xdU)))) 
                                          << 0xdU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffbfffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xeU)))) 
                                          << 0xeU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffff7fffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xfU)))) 
                                          << 0xfU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffeffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x10U)))) 
                                          << 0x10U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffdffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x11U)))) 
                                          << 0x11U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffbffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x12U)))) 
                                          << 0x12U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffff7ffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x13U)))) 
                                          << 0x13U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffefffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x14U)))) 
                                          << 0x14U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffdfffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x15U)))) 
                                          << 0x15U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffbfffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x16U)))) 
                                          << 0x16U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffff7fffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x17U)))) 
                                          << 0x17U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffeffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x18U)))) 
                                          << 0x18U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffdffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x19U)))) 
                                          << 0x19U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffbffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1aU)))) 
                                          << 0x1aU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffff7ffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1bU)))) 
                                          << 0x1bU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffefffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1cU)))) 
                                          << 0x1cU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffdfffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1dU)))) 
                                          << 0x1dU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffbfffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1eU)))) 
                                          << 0x1eU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffff7fffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1fU)))) 
                                          << 0x1fU));
                            } else {
                                if ((0x12U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((5U == (0x1fU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffeULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                     & (~ vlTOPp->PWDATA))))));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffdULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 1U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 1U)))))) 
                                                  << 1U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffbULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 2U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 2U)))))) 
                                                  << 2U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffff7ULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 3U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 3U)))))) 
                                                  << 3U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffefULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 4U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 4U)))))) 
                                                  << 4U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffdfULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 5U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 5U)))))) 
                                                  << 5U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffbfULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 6U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 6U)))))) 
                                                  << 6U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffff7fULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 7U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 7U)))))) 
                                                  << 7U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffeffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 8U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 8U)))))) 
                                                  << 8U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffdffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 9U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 9U)))))) 
                                                  << 9U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffbffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xaU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xaU)))))) 
                                                  << 0xaU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffff7ffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xbU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xbU)))))) 
                                                  << 0xbU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffefffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xcU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xcU)))))) 
                                                  << 0xcU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffdfffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xdU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xdU)))))) 
                                                  << 0xdU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffbfffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xeU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xeU)))))) 
                                                  << 0xeU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffff7fffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xfU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xfU)))))) 
                                                  << 0xfU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffeffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x10U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x10U)))))) 
                                                  << 0x10U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffdffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x11U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x11U)))))) 
                                                  << 0x11U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffbffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x12U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x12U)))))) 
                                                  << 0x12U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffff7ffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x13U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x13U)))))) 
                                                  << 0x13U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffefffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x14U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x14U)))))) 
                                                  << 0x14U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffdfffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x15U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x15U)))))) 
                                                  << 0x15U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffbfffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x16U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x16U)))))) 
                                                  << 0x16U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffff7fffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x17U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x17U)))))) 
                                                  << 0x17U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffeffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x18U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x18U)))))) 
                                                  << 0x18U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffdffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x19U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x19U)))))) 
                                                  << 0x19U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffbffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1aU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1aU)))))) 
                                                  << 0x1aU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffff7ffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1bU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1bU)))))) 
                                                  << 0x1bU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffefffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1cU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1cU)))))) 
                                                  << 0x1cU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffdfffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1dU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1dU)))))) 
                                                  << 0x1dU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffbfffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1eU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1eU)))))) 
                                                  << 0x1eU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffff7fffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1fU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1fU)))))) 
                                                  << 0x1fU));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if ((1U & (~ ((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U))) 
                                | (0x14U == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                               | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                              | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                             | (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) 
                            | (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                           | (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0xfU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U))))))) {
                if (((((((((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U))) 
                           | (0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                          | (0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) 
                         | (0xdU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                        | (0x18U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (0x19U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) 
                      | (0x1aU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                     | (0x1bU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U))))) {
                    if ((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xfU & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf00U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf00000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf000000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0000000U & vlTOPp->PWDATA));
                    } else {
                        if ((0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xfU & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf00U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf00000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0000000U & vlTOPp->PWDATA));
                        } else {
                            if ((0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffffff0U 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xfU & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xffffff0fU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffff0ffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf00U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xffff0fffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfff0ffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xff0fffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf00000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xf0ffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0000000U 
                                          & vlTOPp->PWDATA));
                            } else {
                                if ((0xdU == (0x1fU 
                                              & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffffff0U 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xfU 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xffffff0fU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffff0ffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf00U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xffff0fffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfff0ffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xff0fffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf00000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xf0ffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0000000U 
                                              & vlTOPp->PWDATA));
                                } else {
                                    if ((0x18U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xfU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf00U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf00000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0000000U 
                                                  & vlTOPp->PWDATA));
                                    } else {
                                        if ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) {
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffffff0U 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xfU 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xffffff0fU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffff0ffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf00U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xffff0fffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfff0ffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xff0fffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf00000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xf0ffffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf000000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0000000U 
                                                      & vlTOPp->PWDATA));
                                        } else {
                                            if ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U)))) {
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffffff0U 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xfU 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xffffff0fU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffff0ffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf00U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xffff0fffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfff0ffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xff0fffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf00000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xf0ffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf000000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0000000U 
                                                        & vlTOPp->PWDATA));
                                            } else {
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffffff0U 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xfU 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xffffff0fU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffff0ffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf00U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xffff0fffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfff0ffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xff0fffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf00000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xf0ffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf000000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0000000U 
                                                        & vlTOPp->PWDATA));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffeULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | (IData)((IData)(
                                                           (1U 
                                                            & vlTOPp->apb_gpio__DOT__r_gpio_dir))));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffdULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 1U)))) 
                                            << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffbULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 2U)))) 
                                            << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffff7ULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 3U)))) 
                                            << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffefULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 4U)))) 
                                            << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffdfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 5U)))) 
                                            << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffbfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 6U)))) 
                                            << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffff7fULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 7U)))) 
                                            << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffeffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 8U)))) 
                                            << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffdffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 9U)))) 
                                            << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffbffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xaU)))) 
                                            << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffff7ffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xbU)))) 
                                            << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffefffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xcU)))) 
                                            << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffdfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xdU)))) 
                                            << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffbfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xeU)))) 
                                            << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffff7fffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xfU)))) 
                                            << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffeffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x10U)))) 
                                            << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffdffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x11U)))) 
                                            << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffbffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x12U)))) 
                                            << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffff7ffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x13U)))) 
                                            << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffefffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x14U)))) 
                                            << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffdfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x15U)))) 
                                            << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffbfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x16U)))) 
                                            << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffff7fffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x17U)))) 
                                            << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffeffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x18U)))) 
                                            << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffdffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x19U)))) 
                                            << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffbffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1aU)))) 
                                            << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffff7ffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1bU)))) 
                                            << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffefffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1cU)))) 
                                            << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffdfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1dU)))) 
                                            << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffbfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1eU)))) 
                                            << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffff7fffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1fU)))) 
                                            << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffeffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffdffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffbffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffff7ffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffefffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffdfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffbfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffff7fffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffeffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffdffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffbffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffff7ffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffefffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffdfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffbfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffff7fffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffeffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffdffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffbffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfff7ffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffefffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffdfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffbfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xff7fffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfeffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfdffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfbffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xf7ffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xefffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xdfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xbfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0x7fffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                vlTOPp->apb_gpio__DOT__s_gpio_dir = 
                    ((0xffffffff00000000ULL & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                     | (IData)((IData)(vlTOPp->PWDATA)));
            } else {
                if ((0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_gpio_dir 
                        = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                           | ((QData)((IData)(vlTOPp->PWDATA)) 
                              << 0x20U));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffeULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & vlTOPp->apb_gpio__DOT__r_gpio_en))));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffdULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 1U)))) 
                                           << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffbULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 2U)))) 
                                           << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffff7ULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 3U)))) 
                                           << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffefULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 4U)))) 
                                           << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffdfULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 5U)))) 
                                           << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffbfULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 6U)))) 
                                           << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffff7fULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 7U)))) 
                                           << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffeffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 8U)))) 
                                           << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffdffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 9U)))) 
                                           << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffbffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xaU)))) 
                                           << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffff7ffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xbU)))) 
                                           << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffefffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xcU)))) 
                                           << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffdfffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xdU)))) 
                                           << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffbfffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xeU)))) 
                                           << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffff7fffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xfU)))) 
                                           << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffeffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x10U)))) 
                                           << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffdffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x11U)))) 
                                           << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffbffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x12U)))) 
                                           << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffff7ffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x13U)))) 
                                           << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffefffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x14U)))) 
                                           << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffdfffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x15U)))) 
                                           << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffbfffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x16U)))) 
                                           << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffff7fffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x17U)))) 
                                           << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffeffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x18U)))) 
                                           << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffdffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x19U)))) 
                                           << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffbffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1aU)))) 
                                           << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffff7ffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1bU)))) 
                                           << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffefffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1cU)))) 
                                           << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffdfffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1dU)))) 
                                           << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffbfffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1eU)))) 
                                           << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffff7fffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1fU)))) 
                                           << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffeffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffdffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffbffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffff7ffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffefffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffdfffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffbfffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffff7fffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffeffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffdffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffbffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffff7ffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffefffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffdfffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffbfffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffff7fffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffeffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffdffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffbffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfff7ffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffefffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffdfffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffbfffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xff7fffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfeffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfdffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfbffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xf7ffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xefffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xdfffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xbfffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0x7fffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            if ((8U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                if ((0x15U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((0x16U != (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            = ((1U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (
                                                   (0xffffffff00000000ULL 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                                   | (IData)((IData)(vlTOPp->PWDATA)))
                                                : (
                                                   (0xffffffffULL 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                                   | ((QData)((IData)(vlTOPp->PWDATA)) 
                                                      << 0x20U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffeULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | (IData)((IData)(
                                                        (1U 
                                                         & vlTOPp->apb_gpio__DOT__r_gpio_en))));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffdULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 1U)))) 
                                         << 1U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffbULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 2U)))) 
                                         << 2U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffff7ULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 3U)))) 
                                         << 3U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffefULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 4U)))) 
                                         << 4U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffdfULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 5U)))) 
                                         << 5U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffbfULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 6U)))) 
                                         << 6U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffff7fULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 7U)))) 
                                         << 7U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffeffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 8U)))) 
                                         << 8U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffdffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 9U)))) 
                                         << 9U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffbffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xaU)))) 
                                         << 0xaU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffff7ffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xbU)))) 
                                         << 0xbU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffefffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xcU)))) 
                                         << 0xcU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffdfffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xdU)))) 
                                         << 0xdU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffbfffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xeU)))) 
                                         << 0xeU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffff7fffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xfU)))) 
                                         << 0xfU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffeffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x10U)))) 
                                         << 0x10U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffdffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x11U)))) 
                                         << 0x11U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffbffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x12U)))) 
                                         << 0x12U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffff7ffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x13U)))) 
                                         << 0x13U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffefffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x14U)))) 
                                         << 0x14U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffdfffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x15U)))) 
                                         << 0x15U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffbfffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x16U)))) 
                                         << 0x16U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffff7fffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x17U)))) 
                                         << 0x17U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffeffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x18U)))) 
                                         << 0x18U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffdffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x19U)))) 
                                         << 0x19U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffbffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1aU)))) 
                                         << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffff7ffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1bU)))) 
                                         << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffefffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1cU)))) 
                                         << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffdfffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1dU)))) 
                                         << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffbfffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1eU)))) 
                                         << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffff7fffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1fU)))) 
                                         << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffeffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffdffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffbffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffff7ffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffefffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffdfffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffbfffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffff7fffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffeffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffdffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffbffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffff7ffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffefffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffdfffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffbfffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffff7fffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffeffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffdffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffbffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfff7ffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffefffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffdfffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffbfffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xff7fffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfeffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfdffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfbffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xf7ffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xefffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xdfffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xbfffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0x7fffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0x40U & (IData)(vlTOPp->PADDR))) {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->PRDATA = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffcU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff3U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffcfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff3fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffcffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff3ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffcfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff3fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffcffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff3ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffcfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff3fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfcffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf3ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xcfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x3fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffcU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff3U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffcfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff3fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffcffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff3ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffcfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff3fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffcffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff3ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffcfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff3fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfcffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf3ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xcfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x3fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        vlTOPp->PRDATA = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffcU 
                                               & vlTOPp->PRDATA) 
                                              | (3U 
                                                 & (IData)(
                                                           (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                            >> 0x20U))));
                            vlTOPp->PRDATA = ((0xfffffff3U 
                                               & vlTOPp->PRDATA) 
                                              | (0xcU 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x22U)) 
                                                    << 2U)));
                            vlTOPp->PRDATA = ((0xffffffcfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x24U)) 
                                                    << 4U)));
                            vlTOPp->PRDATA = ((0xffffff3fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x26U)) 
                                                    << 6U)));
                            vlTOPp->PRDATA = ((0xfffffcffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x28U)) 
                                                    << 8U)));
                            vlTOPp->PRDATA = ((0xfffff3ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2aU)) 
                                                    << 0xaU)));
                            vlTOPp->PRDATA = ((0xffffcfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2cU)) 
                                                    << 0xcU)));
                            vlTOPp->PRDATA = ((0xffff3fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2eU)) 
                                                    << 0xeU)));
                            vlTOPp->PRDATA = ((0xfffcffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x30U)) 
                                                    << 0x10U)));
                            vlTOPp->PRDATA = ((0xfff3ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x32U)) 
                                                    << 0x12U)));
                            vlTOPp->PRDATA = ((0xffcfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x34U)) 
                                                    << 0x14U)));
                            vlTOPp->PRDATA = ((0xff3fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x36U)) 
                                                    << 0x16U)));
                            vlTOPp->PRDATA = ((0xfcffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x38U)) 
                                                    << 0x18U)));
                            vlTOPp->PRDATA = ((0xf3ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3aU)) 
                                                    << 0x1aU)));
                            vlTOPp->PRDATA = ((0xcfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3cU)) 
                                                    << 0x1cU)));
                            vlTOPp->PRDATA = ((0x3fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3eU)) 
                                                    << 0x1eU)));
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffcU 
                                               & vlTOPp->PRDATA) 
                                              | (3U 
                                                 & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)));
                            vlTOPp->PRDATA = ((0xfffffff3U 
                                               & vlTOPp->PRDATA) 
                                              | (0xcU 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 2U)) 
                                                    << 2U)));
                            vlTOPp->PRDATA = ((0xffffffcfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 4U)) 
                                                    << 4U)));
                            vlTOPp->PRDATA = ((0xffffff3fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 6U)) 
                                                    << 6U)));
                            vlTOPp->PRDATA = ((0xfffffcffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 8U)) 
                                                    << 8U)));
                            vlTOPp->PRDATA = ((0xfffff3ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xaU)) 
                                                    << 0xaU)));
                            vlTOPp->PRDATA = ((0xffffcfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xcU)) 
                                                    << 0xcU)));
                            vlTOPp->PRDATA = ((0xffff3fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xeU)) 
                                                    << 0xeU)));
                            vlTOPp->PRDATA = ((0xfffcffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x10U)) 
                                                    << 0x10U)));
                            vlTOPp->PRDATA = ((0xfff3ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x12U)) 
                                                    << 0x12U)));
                            vlTOPp->PRDATA = ((0xffcfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x14U)) 
                                                    << 0x14U)));
                            vlTOPp->PRDATA = ((0xff3fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x16U)) 
                                                    << 0x16U)));
                            vlTOPp->PRDATA = ((0xfcffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x18U)) 
                                                    << 0x18U)));
                            vlTOPp->PRDATA = ((0xf3ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1aU)) 
                                                    << 0x1aU)));
                            vlTOPp->PRDATA = ((0xcfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1cU)) 
                                                    << 0x1cU)));
                            vlTOPp->PRDATA = ((0x3fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1eU)) 
                                                    << 0x1eU)));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                        }
                    } else {
                        vlTOPp->PRDATA = 0U;
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->PRDATA = 0U;
    }
    vlTOPp->gpio_padcfg[0U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[0U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfffffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[1U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[2U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[3U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_in_sync = vlTOPp->apb_gpio__DOT__r_gpio_sync1;
    vlTOPp->apb_gpio__DOT__s_gpio_rise = (vlTOPp->apb_gpio__DOT__r_gpio_sync1 
                                          & (~ vlTOPp->apb_gpio__DOT__r_gpio_in));
    vlTOPp->apb_gpio__DOT__s_gpio_fall = ((~ vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                          & vlTOPp->apb_gpio__DOT__r_gpio_in);
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffeU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (1U & ((((IData)(vlTOPp->apb_gpio__DOT__s_cg_en) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 1U))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 2U))) 
                                                | (IData)(
                                                          (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                           >> 3U)))));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffdU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (2U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 4U)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 5U))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 6U))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 7U))) 
                                                << 1U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffbU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (4U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 8U)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 9U))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 0xaU))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xbU))) 
                                                << 2U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfff7U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (8U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xcU)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 0xdU))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 0xeU))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xfU))) 
                                                << 3U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffefU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x10U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x10U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x11U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x12U))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x13U))) 
                                                   << 4U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffdfU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x20U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x14U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x15U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x16U))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x17U))) 
                                                   << 5U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffbfU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x40U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x18U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x19U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x1aU))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1bU))) 
                                                   << 6U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xff7fU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x80U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1cU)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x1dU))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x1eU))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1fU))) 
                                                   << 7U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfeffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x100U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x20U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x21U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x22U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x23U))) 
                                           << 8U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfdffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x200U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x24U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x25U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x26U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x27U))) 
                                           << 9U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfbffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x400U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x28U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x29U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x2aU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2bU))) 
                                           << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xf7ffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x800U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2cU)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x2dU))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x2eU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2fU))) 
                                           << 0xbU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xefffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x1000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x30U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x31U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x32U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x33U))) 
                                           << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xdfffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x2000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x34U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x35U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x36U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x37U))) 
                                           << 0xdU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xbfffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x4000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x38U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x39U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x3aU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3bU))) 
                                           << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0x7fffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x8000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3cU)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x3dU))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x3eU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3fU))) 
                                           << 0xfU)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (1U & 
                                               (((~ (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 1U))) 
                                                 & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (2U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 3U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 2U))) 
                                                 << 1U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (4U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 5U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 4U))) 
                                                 << 2U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (8U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 7U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 6U))) 
                                                 << 3U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 9U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 8U))) 
                                                   << 4U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xbU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xaU))) 
                                                   << 5U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xdU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xcU))) 
                                                   << 6U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xfU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xeU))) 
                                                   << 7U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x100U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x11U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x10U))) 
                                                   << 8U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x200U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x13U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x12U))) 
                                                   << 9U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x400U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x15U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x14U))) 
                                                   << 0xaU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x800U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x17U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x16U))) 
                                                   << 0xbU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x1000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x19U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x18U))) 
                                                   << 0xcU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x2000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1aU))) 
                                                   << 0xdU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x4000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1cU))) 
                                                   << 0xeU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x8000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1eU))) 
                                                   << 0xfU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x21U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x20U))) 
                                                   << 0x10U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x23U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x22U))) 
                                                   << 0x11U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x25U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x24U))) 
                                                   << 0x12U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x27U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x26U))) 
                                                   << 0x13U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x100000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x29U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x28U))) 
                                                   << 0x14U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x200000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2aU))) 
                                                   << 0x15U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x400000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2cU))) 
                                                   << 0x16U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x800000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2eU))) 
                                                   << 0x17U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x1000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x31U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x30U))) 
                                                   << 0x18U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x2000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x33U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x32U))) 
                                                   << 0x19U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x4000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x35U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x34U))) 
                                                   << 0x1aU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x8000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x37U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x36U))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x39U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x38U))) 
                                                   << 0x1cU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3aU))) 
                                                   << 0x1dU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3cU))) 
                                                   << 0x1eU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3eU))) 
                                                   << 0x1fU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (1U & 
                                               (((~ (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 1U))) 
                                                 & (~ (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype))) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (2U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 3U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)))) 
                                                 << 1U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (4U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 5U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)))) 
                                                 << 2U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (8U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 7U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)))) 
                                                 << 3U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 9U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 8U)))) 
                                                   << 4U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xbU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xaU)))) 
                                                   << 5U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xdU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xcU)))) 
                                                   << 6U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xfU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xeU)))) 
                                                   << 7U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x100U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x11U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x10U)))) 
                                                   << 8U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x200U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x13U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x12U)))) 
                                                   << 9U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x400U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x15U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x14U)))) 
                                                   << 0xaU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x800U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x17U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x16U)))) 
                                                   << 0xbU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x1000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x19U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x18U)))) 
                                                   << 0xcU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x2000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1aU)))) 
                                                   << 0xdU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x4000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1cU)))) 
                                                   << 0xeU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x8000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1eU)))) 
                                                   << 0xfU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x21U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x20U)))) 
                                                   << 0x10U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x23U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x22U)))) 
                                                   << 0x11U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x25U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x24U)))) 
                                                   << 0x12U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x27U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x26U)))) 
                                                   << 0x13U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x100000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x29U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x28U)))) 
                                                   << 0x14U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x200000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2aU)))) 
                                                   << 0x15U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x400000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2cU)))) 
                                                   << 0x16U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x800000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2eU)))) 
                                                   << 0x17U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x1000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x31U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x30U)))) 
                                                   << 0x18U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x2000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x33U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x32U)))) 
                                                   << 0x19U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x4000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x35U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x34U)))) 
                                                   << 0x1aU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x8000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x37U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x36U)))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x39U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x38U)))) 
                                                   << 0x1cU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3aU)))) 
                                                   << 0x1dU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3cU)))) 
                                                   << 0x1eU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3eU)))) 
                                                   << 0x1fU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (1U & 
                                               (((IData)(
                                                         (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                          >> 1U)) 
                                                 & (~ (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype))) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (2U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 3U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)))) 
                                                 << 1U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (4U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 5U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)))) 
                                                 << 2U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (8U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 7U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)))) 
                                                 << 3U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 9U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 8U)))) 
                                                   << 4U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xbU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xaU)))) 
                                                   << 5U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xdU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xcU)))) 
                                                   << 6U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xfU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xeU)))) 
                                                   << 7U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x100U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x11U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x10U)))) 
                                                   << 8U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x200U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x13U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x12U)))) 
                                                   << 9U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x400U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x15U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x14U)))) 
                                                   << 0xaU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x800U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x17U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x16U)))) 
                                                   << 0xbU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x1000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x19U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x18U)))) 
                                                   << 0xcU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x2000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1aU)))) 
                                                   << 0xdU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x4000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1cU)))) 
                                                   << 0xeU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x8000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1eU)))) 
                                                   << 0xfU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x21U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x20U)))) 
                                                   << 0x10U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x23U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x22U)))) 
                                                   << 0x11U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x25U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x24U)))) 
                                                   << 0x12U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x27U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x26U)))) 
                                                   << 0x13U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x100000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x29U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x28U)))) 
                                                   << 0x14U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x200000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2aU)))) 
                                                   << 0x15U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x400000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2cU)))) 
                                                   << 0x16U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x800000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2eU)))) 
                                                   << 0x17U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x1000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x31U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x30U)))) 
                                                   << 0x18U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x2000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x33U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x32U)))) 
                                                   << 0x19U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x4000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x35U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x34U)))) 
                                                   << 0x1aU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x8000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x37U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x36U)))) 
                                                   << 0x1bU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x39U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x38U)))) 
                                                   << 0x1cU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3aU)))) 
                                                   << 0x1dU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3cU)))) 
                                                   << 0x1eU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3eU)))) 
                                                   << 0x1fU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_all = ((vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                                           & ((vlTOPp->apb_gpio__DOT__s_is_int_rise 
                                               | vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                              | vlTOPp->apb_gpio__DOT__s_is_int_rifa));
    vlTOPp->__SYM__interrupt = (0U != vlTOPp->apb_gpio__DOT__s_is_int_all);
}

void Vapb_gpio::_eval_initial(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_eval_initial\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_gpio::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::final\n"); );
    // Variables
    Vapb_gpio__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_gpio::_eval_settle(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_eval_settle\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vapb_gpio::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_ctor_var_reset\n"); );
    // Body
    HCLK = VL_RAND_RESET_I(1);
    HRESETn = VL_RAND_RESET_I(1);
    dft_cg_enable_i = VL_RAND_RESET_I(1);
    PADDR = VL_RAND_RESET_I(12);
    PWDATA = VL_RAND_RESET_I(32);
    PWRITE = VL_RAND_RESET_I(1);
    PSEL = VL_RAND_RESET_I(1);
    PENABLE = VL_RAND_RESET_I(1);
    PRDATA = VL_RAND_RESET_I(32);
    PREADY = VL_RAND_RESET_I(1);
    PSLVERR = VL_RAND_RESET_I(1);
    gpio_in = VL_RAND_RESET_I(32);
    gpio_in_sync = VL_RAND_RESET_I(32);
    gpio_out = VL_RAND_RESET_I(32);
    gpio_dir = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, gpio_padcfg);
    __SYM__interrupt = VL_RAND_RESET_I(1);
    apb_gpio__DOT__r_gpio_inten = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_gpio_inten = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__r_gpio_inttype = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, apb_gpio__DOT__s_gpio_inttype);
    apb_gpio__DOT__r_gpio_out = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_gpio_out = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__r_gpio_dir = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_gpio_dir = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, apb_gpio__DOT__r_gpio_padcfg);
    VL_RAND_RESET_W(256, apb_gpio__DOT__s_gpio_padcfg);
    apb_gpio__DOT__r_gpio_sync0 = VL_RAND_RESET_I(32);
    apb_gpio__DOT__r_gpio_sync1 = VL_RAND_RESET_I(32);
    apb_gpio__DOT__r_gpio_in = VL_RAND_RESET_I(32);
    apb_gpio__DOT__r_gpio_en = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_gpio_en = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_cg_en = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_gpio_rise = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_gpio_fall = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_is_int_rise = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_is_int_rifa = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_is_int_fall = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_is_int_all = VL_RAND_RESET_I(32);
    apb_gpio__DOT__r_status = VL_RAND_RESET_I(32);
    apb_gpio__DOT__s_clk_en = VL_RAND_RESET_I(16);
    apb_gpio__DOT__s_write_cfg = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write_inttype = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write_dir = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write_out = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write_inten = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write_gpen = VL_RAND_RESET_Q(64);
    apb_gpio__DOT__s_write = VL_RAND_RESET_I(1);
}
