// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master_controller.h for the primary calling header

#include "Vspi_master_controller.h"
#include "Vspi_master_controller__Syms.h"

//==========

VL_CTOR_IMP(Vspi_master_controller) {
    Vspi_master_controller__Syms* __restrict vlSymsp = __VlSymsp = new Vspi_master_controller__Syms(this, name());
    Vspi_master_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vspi_master_controller::__Vconfigure(Vspi_master_controller__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vspi_master_controller::~Vspi_master_controller() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vspi_master_controller::_settle__TOP__2(Vspi_master_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master_controller::_settle__TOP__2\n"); );
    Vspi_master_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spi_status = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        vlTOPp->spi_status = ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                               ? (1U | (IData)(vlTOPp->spi_status))
                               : ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                   ? (2U | (IData)(vlTOPp->spi_status))
                                   : ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                       ? (4U | (IData)(vlTOPp->spi_status))
                                       : ((3U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                           ? (8U | (IData)(vlTOPp->spi_status))
                                           : ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                               ? (0x10U 
                                                  | (IData)(vlTOPp->spi_status))
                                               : ((5U 
                                                   == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                                   ? 
                                                  (0x20U 
                                                   | (IData)(vlTOPp->spi_status))
                                                   : 
                                                  (0x40U 
                                                   | (IData)(vlTOPp->spi_status))))))));
    }
    vlTOPp->spi_sdo1 = (1U & (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                              >> 0x1dU));
    vlTOPp->spi_sdo2 = (1U & (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                              >> 0x1eU));
    vlTOPp->spi_sdo3 = (1U & (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                              >> 0x1fU));
    if (((IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_trgt))) {
        vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_next = 0U;
        vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (~ (IData)(vlTOPp->spi_clk)));
    } else {
        vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_next 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter)));
        vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (IData)(vlTOPp->spi_clk));
    }
    vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->spi_clk_div_valid) ? (IData)(vlTOPp->spi_clk_div)
            : (IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_trgt));
    vlTOPp->spi_master_controller__DOT__spi_cs = 1U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        vlTOPp->spi_master_controller__DOT__spi_cs 
            = ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               & (~ ((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                      | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))));
    }
    vlTOPp->spi_master_controller__DOT__spi_rise = 0U;
    if (((IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_trgt))) {
        if ((1U & (~ (IData)(vlTOPp->spi_clk)))) {
            vlTOPp->spi_master_controller__DOT__spi_rise 
                = vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__running;
        }
    }
    vlTOPp->spi_master_controller__DOT__en_quad = (
                                                   ((IData)(vlTOPp->spi_qrd) 
                                                    | (IData)(vlTOPp->spi_qwr)) 
                                                   | (IData)(vlTOPp->spi_master_controller__DOT__en_quad_int));
    vlTOPp->spi_master_controller__DOT__spi_fall = 0U;
    if (((IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__counter_trgt))) {
        if (vlTOPp->spi_clk) {
            vlTOPp->spi_master_controller__DOT__spi_fall 
                = vlTOPp->spi_master_controller__DOT__u_clkgen__DOT__running;
        }
    }
    vlTOPp->spi_csn0 = (1U & ((~ (IData)(vlTOPp->spi_csreg)) 
                              | (IData)(vlTOPp->spi_master_controller__DOT__spi_cs)));
    vlTOPp->spi_csn1 = (1U & ((~ ((IData)(vlTOPp->spi_csreg) 
                                  >> 1U)) | (IData)(vlTOPp->spi_master_controller__DOT__spi_cs)));
    vlTOPp->spi_csn2 = (1U & ((~ ((IData)(vlTOPp->spi_csreg) 
                                  >> 2U)) | (IData)(vlTOPp->spi_master_controller__DOT__spi_cs)));
    vlTOPp->spi_csn3 = (1U & ((~ ((IData)(vlTOPp->spi_csreg) 
                                  >> 3U)) | (IData)(vlTOPp->spi_master_controller__DOT__spi_cs)));
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done 
        = (((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter) 
            == ((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->spi_master_controller__DOT__spi_rise));
    vlTOPp->spi_sdo0 = (1U & ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                               ? (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                                  >> 0x1cU) : (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                                               >> 0x1fU)));
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int_next 
        = vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int;
    if ((1U & (~ ((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->spi_master_controller__DOT__spi_rise) {
                vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int_next 
                    = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                        ? ((0xfffffff0U & (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int 
                                           << 4U)) 
                           | (((IData)(vlTOPp->spi_sdi3) 
                               << 3U) | (((IData)(vlTOPp->spi_sdi2) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->spi_sdi1) 
                                           << 1U) | (IData)(vlTOPp->spi_sdi0)))))
                        : ((0xfffffffeU & (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int 
                                           << 1U)) 
                           | (IData)(vlTOPp->spi_sdi1)));
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__reg_done 
        = (((~ (IData)(vlTOPp->spi_master_controller__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter)))) 
           | ((IData)(vlTOPp->spi_master_controller__DOT__en_quad) 
              & (7U == (7U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter)))));
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__reg_done 
        = (((~ (IData)(vlTOPp->spi_master_controller__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter)))) 
           | ((IData)(vlTOPp->spi_master_controller__DOT__en_quad) 
              & (7U == (7U & (IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter)))));
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done 
        = (((IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter) 
            == ((IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->spi_master_controller__DOT__spi_fall));
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_next 
        = vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter;
    if ((1U & (~ ((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->spi_master_controller__DOT__spi_rise) {
                vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter)));
                if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done) {
                    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_next = 0U;
                }
            }
        }
    }
    vlTOPp->spi_ctrl_data_rx = vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__data_int_next;
    vlTOPp->spi_ctrl_data_rx_valid = 0U;
    if ((2U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
        vlTOPp->spi_ctrl_data_rx_valid = 1U;
    } else {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->spi_master_controller__DOT__spi_rise) {
                if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done) {
                    vlTOPp->spi_ctrl_data_rx_valid = 1U;
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__reg_done) {
                        vlTOPp->spi_ctrl_data_rx_valid = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__rx_clk_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            vlTOPp->spi_master_controller__DOT__rx_clk_en = 1U;
            if (vlTOPp->spi_master_controller__DOT__spi_rise) {
                if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done)))) {
                    if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->spi_ctrl_data_rx_ready)))) {
                            vlTOPp->spi_master_controller__DOT__rx_clk_en = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->spi_master_controller__DOT__rx_clk_en = 0U;
        }
    }
    vlTOPp->eot = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if ((1U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if ((2U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U == (IData)(vlTOPp->spi_data_len))) {
                                    vlTOPp->eot = 1U;
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                    vlTOPp->eot = 1U;
                                }
                            } else {
                                if ((6U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                    if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                                        vlTOPp->eot = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_next 
        = vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter;
    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter)));
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_next = 0U;
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__s_spi_mode = 2U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            vlTOPp->spi_master_controller__DOT__s_spi_mode = 2U;
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__s_spi_mode 
                        = (((IData)(vlTOPp->spi_qrd) 
                            | (IData)(vlTOPp->spi_qwr))
                            ? 1U : 0U);
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__s_spi_mode 
                            = (((IData)(vlTOPp->spi_qrd) 
                                | (IData)(vlTOPp->spi_qwr))
                                ? 1U : 0U);
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                = (((IData)(vlTOPp->spi_rd) 
                                    | (IData)(vlTOPp->spi_qrd))
                                    ? ((IData)(vlTOPp->spi_qrd)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->spi_qwr)
                                     ? 1U : 0U));
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                vlTOPp->spi_master_controller__DOT__s_spi_mode 
                    = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                        ? 1U : 0U);
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__s_spi_mode 
                            = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                ? 1U : 0U);
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->spi_master_controller__DOT__do_rx)
                                    ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                     ? 1U : 0U));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    vlTOPp->spi_master_controller__DOT__s_spi_mode 
                        = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                            ? 1U : 0U);
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->spi_master_controller__DOT__do_rx)
                                    ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                     ? 1U : 0U));
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                    ? 2U : 0U);
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                        vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                            = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        } else {
                            vlTOPp->spi_master_controller__DOT__s_spi_mode 
                                = ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                    ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                        ? 1U : 0U) : 
                                   ((6U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                     ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                         ? 2U : 0U)
                                     : ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                         ? 2U : 0U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__state_next 
        = vlTOPp->spi_master_controller__DOT__state;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__state_next = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__state_next = 2U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            vlTOPp->spi_master_controller__DOT__state_next 
                                = (((IData)(vlTOPp->spi_rd) 
                                    | (IData)(vlTOPp->spi_qrd))
                                    ? ((0U != (IData)(vlTOPp->spi_dummy_rd))
                                        ? 4U : 6U) : 
                                   ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                     ? 4U : 5U));
                        }
                    }
                }
            } else {
                vlTOPp->spi_master_controller__DOT__state_next = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                vlTOPp->spi_master_controller__DOT__state_next 
                    = ((IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done)
                        ? ((0U != (IData)(vlTOPp->spi_addr_len))
                            ? 2U : ((0U != (IData)(vlTOPp->spi_data_len))
                                     ? ((IData)(vlTOPp->spi_master_controller__DOT__do_rx)
                                         ? ((0U != (IData)(vlTOPp->spi_dummy_rd))
                                             ? 4U : 6U)
                                         : ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                             ? 4U : 5U))
                                     : 0U)) : 1U);
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        vlTOPp->spi_master_controller__DOT__state_next 
                            = ((0U != (IData)(vlTOPp->spi_data_len))
                                ? ((IData)(vlTOPp->spi_master_controller__DOT__do_rx)
                                    ? ((0U != (IData)(vlTOPp->spi_dummy_rd))
                                        ? 4U : 6U) : 
                                   ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                     ? 4U : 5U)) : 0U);
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        vlTOPp->spi_master_controller__DOT__state_next 
                            = ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                ? ((IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done)
                                    ? ((0U != (IData)(vlTOPp->spi_data_len))
                                        ? ((IData)(vlTOPp->spi_master_controller__DOT__do_rx)
                                            ? 6U : 5U)
                                        : 0U) : 4U)
                                : ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                    ? ((IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done)
                                        ? 0U : 5U) : 
                                   ((6U == (IData)(vlTOPp->spi_master_controller__DOT__state))
                                     ? ((IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done)
                                         ? 7U : 6U)
                                     : ((IData)(vlTOPp->spi_master_controller__DOT__spi_fall)
                                         ? 0U : 7U))));
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__counter_tx_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                        vlTOPp->spi_master_controller__DOT__counter_tx_valid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__counter_rx = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U == (IData)(vlTOPp->spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx 
                                        = vlTOPp->spi_data_len;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx 
                                        = vlTOPp->spi_data_len;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx 
                                        = vlTOPp->spi_data_len;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                        vlTOPp->spi_master_controller__DOT__counter_rx 
                                            = vlTOPp->spi_data_len;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__counter_rx_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U == (IData)(vlTOPp->spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                        vlTOPp->spi_master_controller__DOT__counter_rx_valid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__counter_tx = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__counter_tx 
                        = vlTOPp->spi_cmd_len;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__counter_tx 
                            = vlTOPp->spi_addr_len;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx 
                                        = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_wr))
                                        : (IData)(vlTOPp->spi_data_len));
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__counter_tx 
                            = vlTOPp->spi_addr_len;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx 
                                        = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_wr))
                                        : (IData)(vlTOPp->spi_data_len));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__counter_tx 
                                        = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->spi_dummy_wr))
                                        : (IData)(vlTOPp->spi_data_len));
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                        vlTOPp->spi_master_controller__DOT__counter_tx 
                                            = vlTOPp->spi_data_len;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__spi_en_rx = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U == (IData)(vlTOPp->spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                        vlTOPp->spi_master_controller__DOT__spi_en_rx = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((5U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                if ((6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done)))) {
                                        vlTOPp->spi_master_controller__DOT__spi_en_rx = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__spi_en_tx = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                        vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                vlTOPp->spi_master_controller__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if ((1U & (~ ((IData)(vlTOPp->spi_rd) 
                                          | (IData)(vlTOPp->spi_qrd))))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_wr))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_wr))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                if ((0U == (IData)(vlTOPp->spi_dummy_wr))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                if ((0U != (IData)(vlTOPp->spi_cmd_len))) {
                    vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 2U;
                } else {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 3U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (((IData)(vlTOPp->spi_rd) 
                                 | (IData)(vlTOPp->spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->spi_addr_len))) {
                        vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 3U;
                    } else {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->spi_data_len))) {
                            if (vlTOPp->spi_master_controller__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->spi_dummy_rd))) {
                                    vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done)))) {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                vlTOPp->spi_master_controller__DOT__ctrl_data_mux = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->spi_master_controller__DOT__counter_rx_valid)
            ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                ? (0x3fffU & ((IData)(vlTOPp->spi_master_controller__DOT__counter_rx) 
                              >> 2U)) : (IData)(vlTOPp->spi_master_controller__DOT__counter_rx))
            : (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__counter_trgt));
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->spi_master_controller__DOT__counter_tx_valid)
            ? ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                ? (0x3fffU & ((IData)(vlTOPp->spi_master_controller__DOT__counter_tx) 
                              >> 2U)) : (IData)(vlTOPp->spi_master_controller__DOT__counter_tx))
            : (IData)(vlTOPp->spi_master_controller__DOT__u_txreg__DOT__counter_trgt));
    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS 
        = vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS;
    if ((2U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->spi_ctrl_data_rx_ready) {
                vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS = 0U;
            }
        } else {
            if (vlTOPp->spi_ctrl_data_rx_ready) {
                vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS = 1U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->spi_master_controller__DOT__spi_rise) {
                if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__done) {
                    vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS 
                        = ((IData)(vlTOPp->spi_ctrl_data_rx_ready)
                            ? 0U : 3U);
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->spi_ctrl_data_rx_ready)))) {
                            vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS = 2U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->spi_master_controller__DOT__spi_en_rx) {
                vlTOPp->spi_master_controller__DOT__u_rxreg__DOT__rx_NS = 1U;
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__data_to_tx = 0U;
    if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
        vlTOPp->spi_master_controller__DOT__data_to_tx = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
            vlTOPp->spi_master_controller__DOT__data_to_tx = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                vlTOPp->spi_master_controller__DOT__data_to_tx 
                    = vlTOPp->spi_cmd;
            } else {
                if ((3U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                    vlTOPp->spi_master_controller__DOT__data_to_tx 
                        = vlTOPp->spi_addr;
                } else {
                    if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                        vlTOPp->spi_master_controller__DOT__data_to_tx 
                            = vlTOPp->spi_ctrl_data_tx;
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__data_to_tx_valid = 0U;
    if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
        vlTOPp->spi_master_controller__DOT__data_to_tx_valid = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
            vlTOPp->spi_master_controller__DOT__data_to_tx_valid = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                vlTOPp->spi_master_controller__DOT__data_to_tx_valid 
                    = vlTOPp->spi_master_controller__DOT__ctrl_data_valid;
            } else {
                if ((3U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                    vlTOPp->spi_master_controller__DOT__data_to_tx_valid 
                        = vlTOPp->spi_master_controller__DOT__ctrl_data_valid;
                } else {
                    if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                        vlTOPp->spi_master_controller__DOT__data_to_tx_valid 
                            = vlTOPp->spi_ctrl_data_tx_valid;
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_NS 
        = vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS;
    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_NS 
                        = ((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
                           & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid));
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid)))) {
                            vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_NS = 0U;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
             & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))) {
            vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_NS = 1U;
        }
    }
    vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int_next 
        = vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int;
    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int_next 
                    = ((IData)(vlTOPp->spi_master_controller__DOT__en_quad)
                        ? (0xfffffff0U & (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                                          << 4U)) : 
                       (0xfffffffeU & (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int 
                                       << 1U)));
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if (((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
                         & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))) {
                        vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int_next 
                            = vlTOPp->spi_master_controller__DOT__data_to_tx;
                    }
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__reg_done) {
                        if (vlTOPp->spi_master_controller__DOT__data_to_tx_valid) {
                            vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int_next 
                                = vlTOPp->spi_master_controller__DOT__data_to_tx;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
             & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))) {
            vlTOPp->spi_master_controller__DOT__u_txreg__DOT__data_int_next 
                = vlTOPp->spi_master_controller__DOT__data_to_tx;
        }
    }
    vlTOPp->spi_master_controller__DOT__data_to_tx_ready = 0U;
    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if (((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
                         & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))) {
                        vlTOPp->spi_master_controller__DOT__data_to_tx_ready = 1U;
                    }
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__reg_done) {
                        if (vlTOPp->spi_master_controller__DOT__data_to_tx_valid) {
                            vlTOPp->spi_master_controller__DOT__data_to_tx_ready = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
             & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))) {
            vlTOPp->spi_master_controller__DOT__data_to_tx_ready = 1U;
        }
    }
    vlTOPp->spi_master_controller__DOT__tx_clk_en = 0U;
    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__tx_CS) {
            vlTOPp->spi_master_controller__DOT__tx_clk_en = 1U;
            if (vlTOPp->spi_master_controller__DOT__spi_fall) {
                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                    if ((1U & (~ ((IData)(vlTOPp->spi_master_controller__DOT__spi_en_tx) 
                                  & (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid))))) {
                        vlTOPp->spi_master_controller__DOT__tx_clk_en = 0U;
                    }
                } else {
                    if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__data_to_tx_valid)))) {
                            vlTOPp->spi_master_controller__DOT__tx_clk_en = 0U;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->spi_master_controller__DOT__tx_clk_en = 0U;
    }
    vlTOPp->spi_ctrl_data_tx_ready = 0U;
    if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
        vlTOPp->spi_ctrl_data_tx_ready = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
            if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                vlTOPp->spi_ctrl_data_tx_ready = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                    vlTOPp->spi_ctrl_data_tx_ready = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__ctrl_data_mux))) {
                        vlTOPp->spi_ctrl_data_tx_ready 
                            = vlTOPp->spi_master_controller__DOT__data_to_tx_ready;
                    }
                }
            }
        }
    }
    vlTOPp->spi_master_controller__DOT__spi_clock_en = 0U;
    if (((((((((0U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
               | (1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
              | (2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
             | (3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
            | (4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
           | (5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
          | (6U == (IData)(vlTOPp->spi_master_controller__DOT__state))) 
         | (7U == (IData)(vlTOPp->spi_master_controller__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
            if (((((IData)(vlTOPp->spi_rd) | (IData)(vlTOPp->spi_wr)) 
                  | (IData)(vlTOPp->spi_qrd)) | (IData)(vlTOPp->spi_qwr))) {
                vlTOPp->spi_master_controller__DOT__spi_clock_en = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                vlTOPp->spi_master_controller__DOT__spi_clock_en = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                    vlTOPp->spi_master_controller__DOT__spi_clock_en = 1U;
                } else {
                    if ((3U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                        vlTOPp->spi_master_controller__DOT__spi_clock_en = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                            vlTOPp->spi_master_controller__DOT__spi_clock_en = 1U;
                            if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_master_controller__DOT__do_rx)))) {
                                        vlTOPp->spi_master_controller__DOT__spi_clock_en 
                                            = vlTOPp->spi_master_controller__DOT__tx_clk_en;
                                    }
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->spi_master_controller__DOT__state))) {
                                vlTOPp->spi_master_controller__DOT__spi_clock_en 
                                    = vlTOPp->spi_master_controller__DOT__tx_clk_en;
                                if (vlTOPp->spi_master_controller__DOT__u_txreg__DOT__done) {
                                    vlTOPp->spi_master_controller__DOT__spi_clock_en = 0U;
                                }
                            } else {
                                vlTOPp->spi_master_controller__DOT__spi_clock_en 
                                    = ((6U == (IData)(vlTOPp->spi_master_controller__DOT__state)) 
                                       & (IData)(vlTOPp->spi_master_controller__DOT__rx_clk_en));
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vspi_master_controller::_eval_initial(Vspi_master_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master_controller::_eval_initial\n"); );
    Vspi_master_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rstn = vlTOPp->rstn;
}

void Vspi_master_controller::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master_controller::final\n"); );
    // Variables
    Vspi_master_controller__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vspi_master_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vspi_master_controller::_eval_settle(Vspi_master_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master_controller::_eval_settle\n"); );
    Vspi_master_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vspi_master_controller::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master_controller::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rstn = VL_RAND_RESET_I(1);
    eot = VL_RAND_RESET_I(1);
    spi_clk_div = VL_RAND_RESET_I(8);
    spi_clk_div_valid = VL_RAND_RESET_I(1);
    spi_status = VL_RAND_RESET_I(7);
    spi_addr = VL_RAND_RESET_I(32);
    spi_addr_len = VL_RAND_RESET_I(6);
    spi_cmd = VL_RAND_RESET_I(32);
    spi_cmd_len = VL_RAND_RESET_I(6);
    spi_data_len = VL_RAND_RESET_I(16);
    spi_dummy_rd = VL_RAND_RESET_I(16);
    spi_dummy_wr = VL_RAND_RESET_I(16);
    spi_csreg = VL_RAND_RESET_I(4);
    spi_swrst = VL_RAND_RESET_I(1);
    spi_rd = VL_RAND_RESET_I(1);
    spi_wr = VL_RAND_RESET_I(1);
    spi_qrd = VL_RAND_RESET_I(1);
    spi_qwr = VL_RAND_RESET_I(1);
    spi_ctrl_data_tx = VL_RAND_RESET_I(32);
    spi_ctrl_data_tx_valid = VL_RAND_RESET_I(1);
    spi_ctrl_data_tx_ready = VL_RAND_RESET_I(1);
    spi_ctrl_data_rx = VL_RAND_RESET_I(32);
    spi_ctrl_data_rx_valid = VL_RAND_RESET_I(1);
    spi_ctrl_data_rx_ready = VL_RAND_RESET_I(1);
    spi_clk = VL_RAND_RESET_I(1);
    spi_csn0 = VL_RAND_RESET_I(1);
    spi_csn1 = VL_RAND_RESET_I(1);
    spi_csn2 = VL_RAND_RESET_I(1);
    spi_csn3 = VL_RAND_RESET_I(1);
    spi_mode = VL_RAND_RESET_I(2);
    spi_sdo0 = VL_RAND_RESET_I(1);
    spi_sdo1 = VL_RAND_RESET_I(1);
    spi_sdo2 = VL_RAND_RESET_I(1);
    spi_sdo3 = VL_RAND_RESET_I(1);
    spi_sdi0 = VL_RAND_RESET_I(1);
    spi_sdi1 = VL_RAND_RESET_I(1);
    spi_sdi2 = VL_RAND_RESET_I(1);
    spi_sdi3 = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_rise = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_fall = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_clock_en = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_en_tx = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_en_rx = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__counter_tx = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__counter_tx_valid = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__counter_rx = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__counter_rx_valid = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__data_to_tx = VL_RAND_RESET_I(32);
    spi_master_controller__DOT__data_to_tx_valid = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__data_to_tx_ready = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__en_quad = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__en_quad_int = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__do_rx = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__s_spi_mode = VL_RAND_RESET_I(2);
    spi_master_controller__DOT__ctrl_data_valid = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__spi_cs = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__tx_clk_en = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__rx_clk_en = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__ctrl_data_mux = VL_RAND_RESET_I(3);
    spi_master_controller__DOT__state = VL_RAND_RESET_I(5);
    spi_master_controller__DOT__state_next = VL_RAND_RESET_I(5);
    spi_master_controller__DOT__u_clkgen__DOT__counter_trgt = VL_RAND_RESET_I(8);
    spi_master_controller__DOT__u_clkgen__DOT__counter_trgt_next = VL_RAND_RESET_I(8);
    spi_master_controller__DOT__u_clkgen__DOT__counter = VL_RAND_RESET_I(8);
    spi_master_controller__DOT__u_clkgen__DOT__counter_next = VL_RAND_RESET_I(8);
    spi_master_controller__DOT__u_clkgen__DOT__spi_clk_next = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_clkgen__DOT__running = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_txreg__DOT__data_int = VL_RAND_RESET_I(32);
    spi_master_controller__DOT__u_txreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    spi_master_controller__DOT__u_txreg__DOT__counter = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_txreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_txreg__DOT__counter_next = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_txreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_txreg__DOT__done = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_txreg__DOT__reg_done = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_txreg__DOT__tx_CS = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_txreg__DOT__tx_NS = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_rxreg__DOT__data_int = VL_RAND_RESET_I(32);
    spi_master_controller__DOT__u_rxreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    spi_master_controller__DOT__u_rxreg__DOT__counter = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_rxreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_rxreg__DOT__counter_next = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_rxreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    spi_master_controller__DOT__u_rxreg__DOT__done = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_rxreg__DOT__reg_done = VL_RAND_RESET_I(1);
    spi_master_controller__DOT__u_rxreg__DOT__rx_CS = VL_RAND_RESET_I(2);
    spi_master_controller__DOT__u_rxreg__DOT__rx_NS = VL_RAND_RESET_I(2);
}
