// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_uart_sv.h for the primary calling header

#include "Vapb_uart_sv.h"
#include "Vapb_uart_sv__Syms.h"

//==========
CData/*0:0*/ Vapb_uart_sv::__Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[128];

VL_CTOR_IMP(Vapb_uart_sv) {
    Vapb_uart_sv__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_uart_sv__Syms(this, name());
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_uart_sv::__Vconfigure(Vapb_uart_sv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_uart_sv::~Vapb_uart_sv() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_uart_sv::_initial__TOP__1(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_initial__TOP__1\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PREADY = 1U;
    vlTOPp->PSLVERR = 0U;
}

void Vapb_uart_sv::_settle__TOP__3(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_settle__TOP__3\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_uart_sv__DOT__rx_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__rx_valid = 1U;
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full 
        = (0x10U == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements));
    vlTOPp->apb_uart_sv__DOT__fifo_rx_valid = (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements));
    vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full 
        = (0x10U == (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements));
    vlTOPp->apb_uart_sv__DOT__tx_valid = (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements));
    vlTOPp->event_o = (1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q)));
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next 
                    = (1U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit) 
                             ^ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data)));
            }
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next = 0U;
            }
        }
    }
    vlTOPp->tx_o = 1U;
    if ((4U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            vlTOPp->tx_o = 1U;
        }
    } else {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            vlTOPp->tx_o = (1U & ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))
                                   ? (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit)
                                   : (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data)));
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                vlTOPp->tx_o = 0U;
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements))) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data_next 
                        = vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer
                        [vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out];
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__trigger_level_n = vlTOPp->apb_uart_sv__DOT__trigger_level_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((2U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    vlTOPp->apb_uart_sv__DOT__trigger_level_n 
                        = (3U & (vlTOPp->PWDATA >> 6U));
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements) 
                             << 2U) | (IData)(vlTOPp->apb_uart_sv__DOT__trigger_level_q));
    vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached 
        = vlTOPp->__Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached
        [vlTOPp->__Vtableidx1];
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall 
        = (1U & ((~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                     >> 1U)) & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                                >> 2U)));
    vlTOPp->apb_uart_sv__DOT__tx_ready = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                vlTOPp->apb_uart_sv__DOT__tx_ready = 1U;
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__fifo_rx_data = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer
        [vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out];
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en = 1U;
        }
    } else {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en = 1U;
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS)))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__sampleData = 1U;
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_n = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((2U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_n 
                        = (1U & (vlTOPp->PWDATA >> 2U));
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_n = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((2U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_n 
                        = (1U & (vlTOPp->PWDATA >> 1U));
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data_next 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS)))) {
                vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data_next 
                    = ((0x2000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                        ? ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                            ? ((0x80U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 5U)) | 
                               (0x7fU & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x40U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 4U)) | (0x3fU 
                                                 & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U))))
                        : ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                            ? ((0x20U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 3U)) | 
                               (0x1fU & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x10U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 2U)) | (0xfU 
                                                 & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U)))));
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__fifo_tx_valid = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    if ((1U & (~ (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlTOPp->apb_uart_sv__DOT__fifo_tx_valid = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__fifo_rx_ready = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    if ((1U & (~ (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlTOPp->apb_uart_sv__DOT__fifo_rx_ready = 1U;
                    }
                }
            }
        }
    }
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    if ((1U & (~ (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlTOPp->apb_uart_sv__DOT__fifo_tx_data 
                            = (0xffU & vlTOPp->PWDATA);
                    }
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__clr_int = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((4U & (IData)(vlTOPp->PADDR))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 1U)))) {
                if ((1U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->apb_uart_sv__DOT__clr_int = 0xcU;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    vlTOPp->apb_uart_sv__DOT__clr_int = 4U;
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->PADDR)))) {
                    if ((1U & (~ (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlTOPp->apb_uart_sv__DOT__clr_int = 8U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits 
        = ((0x2000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
            ? ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                ? 7U : 6U) : ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                               ? 5U : 4U));
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__start_bit = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__start_bit = 1U;
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__start_bit = 1U;
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = 1U;
        }
    } else {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = 1U;
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = 1U;
                }
            }
        }
    }
    vlTOPp->PRDATA = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((4U & (IData)(vlTOPp->PADDR))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 1U)))) {
                if ((1U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->PRDATA = (0xffU & ((vlTOPp->apb_uart_sv__DOT__regs_q[2U] 
                                                << 0x18U) 
                                               | (vlTOPp->apb_uart_sv__DOT__regs_q[1U] 
                                                  >> 8U)));
                }
            }
        } else {
            vlTOPp->PRDATA = ((2U & (IData)(vlTOPp->PADDR))
                               ? ((1U & (IData)(vlTOPp->PADDR))
                                   ? (0xffU & ((vlTOPp->apb_uart_sv__DOT__regs_q[1U] 
                                                << 8U) 
                                               | (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                                  >> 0x18U)))
                                   : (0xc0U | (IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q)))
                               : ((1U & (IData)(vlTOPp->PADDR))
                                   ? ((0x80000000U 
                                       & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                                       ? (0xffU & (
                                                   vlTOPp->apb_uart_sv__DOT__regs_q[2U] 
                                                   >> 8U))
                                       : (0xffU & (
                                                   (vlTOPp->apb_uart_sv__DOT__regs_q[1U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                                                      >> 8U))))
                                   : ((0x80000000U 
                                       & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                                       ? (0xffU & vlTOPp->apb_uart_sv__DOT__regs_q[2U])
                                       : (0xffU & (IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_data)))));
        }
    }
    vlTOPp->apb_uart_sv__DOT__regs_n[0U] = vlTOPp->apb_uart_sv__DOT__regs_q[0U];
    vlTOPp->apb_uart_sv__DOT__regs_n[1U] = vlTOPp->apb_uart_sv__DOT__regs_q[1U];
    vlTOPp->apb_uart_sv__DOT__regs_n[2U] = vlTOPp->apb_uart_sv__DOT__regs_q[2U];
    vlTOPp->apb_uart_sv__DOT__regs_n[1U] = ((0xfffffeffU 
                                             & vlTOPp->apb_uart_sv__DOT__regs_n[1U]) 
                                            | (0xffffff00U 
                                               & ((0U 
                                                   != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements)) 
                                                  << 8U)));
    vlTOPp->apb_uart_sv__DOT__regs_n[1U] = ((0xfffffbffU 
                                             & vlTOPp->apb_uart_sv__DOT__regs_n[1U]) 
                                            | (0x400U 
                                               & ((IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_data) 
                                                  << 2U)));
    vlTOPp->apb_uart_sv__DOT__regs_n[1U] = ((0xffffdfffU 
                                             & vlTOPp->apb_uart_sv__DOT__regs_n[1U]) 
                                            | (0x2000U 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)))) 
                                                  << 0xdU)));
    vlTOPp->apb_uart_sv__DOT__regs_n[1U] = ((0xffffbfffU 
                                             & vlTOPp->apb_uart_sv__DOT__regs_n[1U]) 
                                            | (0xffffc000U 
                                               & (((IData)(vlTOPp->apb_uart_sv__DOT__tx_ready) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements))))) 
                                                  << 0xeU)));
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 2U)))) {
            if ((2U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->apb_uart_sv__DOT__regs_n[0U] 
                        = ((0xffffffU & vlTOPp->apb_uart_sv__DOT__regs_n[0U]) 
                           | (0xff000000U & (vlTOPp->PWDATA 
                                             << 0x18U)));
                }
            } else {
                if ((1U & (IData)(vlTOPp->PADDR))) {
                    if ((0x80000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])) {
                        vlTOPp->apb_uart_sv__DOT__regs_n[2U] 
                            = ((0xffU & vlTOPp->apb_uart_sv__DOT__regs_n[2U]) 
                               | (0xff00U & (vlTOPp->PWDATA 
                                             << 8U)));
                    } else {
                        vlTOPp->apb_uart_sv__DOT__regs_n[0U] 
                            = ((0xffff00ffU & vlTOPp->apb_uart_sv__DOT__regs_n[0U]) 
                               | (0xff00U & (vlTOPp->PWDATA 
                                             << 8U)));
                    }
                } else {
                    if ((0x80000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])) {
                        vlTOPp->apb_uart_sv__DOT__regs_n[2U] 
                            = ((0xff00U & vlTOPp->apb_uart_sv__DOT__regs_n[2U]) 
                               | (0xffU & vlTOPp->PWDATA));
                    }
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count_next 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS)))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count) 
                            == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count))));
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count_next 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count) 
                            == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count))));
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    if (((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count) 
                         != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits))) {
                        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__sampleData = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements))) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__sampleData = 1U;
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS;
    if ((4U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = 0U;
                }
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS 
                        = ((0x4000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                            ? 5U : 0U);
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = 4U;
                }
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    if (((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count) 
                         == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits))) {
                        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS 
                            = ((0x8000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                                ? 3U : 4U);
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = 2U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements))) {
                    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS = 1U;
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS;
    if ((4U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 0U;
                }
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 5U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                if ((0x10U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements))) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS 
                        = ((0x8000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                            ? 4U : 5U);
                }
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    if (((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count) 
                         == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits))) {
                        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 3U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 2U;
                }
            } else {
                if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall) {
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS = 1U;
                }
            }
        }
    }
    vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n 
        = ((0U == (IData)(vlTOPp->apb_uart_sv__DOT__clr_int))
            ? (IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q)
            : ((IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q) 
               & (~ (IData)(vlTOPp->apb_uart_sv__DOT__clr_int))));
    if ((0x400U & (vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                   & vlTOPp->apb_uart_sv__DOT__regs_n[1U]))) {
        vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n = 0xcU;
    } else {
        if ((1U & ((vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                    >> 8U) & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached) 
                              | (vlTOPp->apb_uart_sv__DOT__regs_n[1U] 
                                 >> 0xdU))))) {
            vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n = 8U;
        } else {
            if (((vlTOPp->apb_uart_sv__DOT__regs_q[0U] 
                  >> 9U) & (0U == (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)))) {
                vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n = 4U;
            }
        }
    }
}

void Vapb_uart_sv::_eval_initial(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_eval_initial\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RSTN = vlTOPp->RSTN;
}

void Vapb_uart_sv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::final\n"); );
    // Variables
    Vapb_uart_sv__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_uart_sv::_eval_settle(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_eval_settle\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vapb_uart_sv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RSTN = VL_RAND_RESET_I(1);
    PADDR = VL_RAND_RESET_I(12);
    PWDATA = VL_RAND_RESET_I(32);
    PWRITE = VL_RAND_RESET_I(1);
    PSEL = VL_RAND_RESET_I(1);
    PENABLE = VL_RAND_RESET_I(1);
    PRDATA = VL_RAND_RESET_I(32);
    PREADY = VL_RAND_RESET_I(1);
    PSLVERR = VL_RAND_RESET_I(1);
    rx_i = VL_RAND_RESET_I(1);
    tx_o = VL_RAND_RESET_I(1);
    event_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, apb_uart_sv__DOT__regs_q);
    VL_RAND_RESET_W(80, apb_uart_sv__DOT__regs_n);
    apb_uart_sv__DOT__trigger_level_n = VL_RAND_RESET_I(2);
    apb_uart_sv__DOT__trigger_level_q = VL_RAND_RESET_I(2);
    apb_uart_sv__DOT__parity_error = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__clr_int = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__tx_ready = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__rx_valid = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__tx_fifo_clr_n = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__tx_fifo_clr_q = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__rx_fifo_clr_n = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__rx_fifo_clr_q = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__fifo_tx_valid = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__tx_valid = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__fifo_rx_valid = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__fifo_rx_ready = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__fifo_tx_data = VL_RAND_RESET_I(8);
    apb_uart_sv__DOT__fifo_rx_data = VL_RAND_RESET_I(9);
    apb_uart_sv__DOT__uart_rx_i__DOT__CS = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__NS = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__reg_data = VL_RAND_RESET_I(8);
    apb_uart_sv__DOT__uart_rx_i__DOT__reg_data_next = VL_RAND_RESET_I(8);
    apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count_next = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_rx_i__DOT__sampleData = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt = VL_RAND_RESET_I(16);
    apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_rx_i__DOT__start_bit = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_rx_i__DOT__s_rx_fall = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_i__DOT__CS = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_tx_i__DOT__NS = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_tx_i__DOT__reg_data = VL_RAND_RESET_I(8);
    apb_uart_sv__DOT__uart_tx_i__DOT__reg_data_next = VL_RAND_RESET_I(8);
    apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count_next = VL_RAND_RESET_I(3);
    apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_i__DOT__sampleData = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt = VL_RAND_RESET_I(16);
    apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_i__DOT__bit_done = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[__Vi0] = VL_RAND_RESET_I(9);
    }}
    apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }}
    apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full = VL_RAND_RESET_I(1);
    apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q = VL_RAND_RESET_I(4);
    apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[0] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[1] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[2] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[3] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[4] = 1U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[5] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[6] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[7] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[8] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[9] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[10] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[11] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[12] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[13] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[14] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[15] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[16] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[17] = 1U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[18] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[19] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[20] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[21] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[22] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[23] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[24] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[25] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[26] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[27] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[28] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[29] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[30] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[31] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[32] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[33] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[34] = 1U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[35] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[36] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[37] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[38] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[39] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[40] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[41] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[42] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[43] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[44] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[45] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[46] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[47] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[48] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[49] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[50] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[51] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[52] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[53] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[54] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[55] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[56] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[57] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[58] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[59] = 1U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[60] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[61] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[62] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[63] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[64] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[65] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[66] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[67] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[68] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[69] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[70] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[71] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[72] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[73] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[74] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[75] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[76] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[77] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[78] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[79] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[80] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[81] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[82] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[83] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[84] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[85] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[86] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[87] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[88] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[89] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[90] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[91] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[92] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[93] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[94] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[95] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[96] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[97] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[98] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[99] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[100] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[101] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[102] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[103] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[104] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[105] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[106] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[107] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[108] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[109] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[110] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[111] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[112] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[113] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[114] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[115] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[116] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[117] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[118] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[119] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[120] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[121] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[122] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[123] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[124] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[125] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[126] = 0U;
    __Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached[127] = 0U;
}
