// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_slave_controller.h for the primary calling header

#include "Vspi_slave_controller.h"
#include "Vspi_slave_controller__Syms.h"

//==========
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__get_addr[256];
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__get_data[256];
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__send_data[256];
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__enable_cont[256];
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__enable_regs[256];
CData/*0:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__wait_dummy[256];
CData/*1:0*/ Vspi_slave_controller::__Vtable1_spi_slave_controller__DOT__reg_sel[256];

VL_CTOR_IMP(Vspi_slave_controller) {
    Vspi_slave_controller__Syms* __restrict vlSymsp = __VlSymsp = new Vspi_slave_controller__Syms(this, name());
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vspi_slave_controller::__Vconfigure(Vspi_slave_controller__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vspi_slave_controller::~Vspi_slave_controller() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vspi_slave_controller::_settle__TOP__2(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_settle__TOP__2\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ctrl_data_rx = vlTOPp->rx_data;
    vlTOPp->ctrl_addr = vlTOPp->spi_slave_controller__DOT__addr_reg;
    vlTOPp->wrap_length = (((IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg3) 
                            << 8U) | (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg2));
    vlTOPp->en_quad = (1U & (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg0));
    vlTOPp->spi_slave_controller__DOT__sample_ADDR = 0U;
    if ((0U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                vlTOPp->spi_slave_controller__DOT__sample_ADDR = 1U;
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__sample_CMD = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            vlTOPp->spi_slave_controller__DOT__sample_CMD = 1U;
        }
    }
    vlTOPp->spi_slave_controller__DOT__decode_cmd_comb = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        vlTOPp->spi_slave_controller__DOT__decode_cmd_comb = 1U;
    }
    vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad) ? 2U
                         : 0U);
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                             ? 2U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                                 ? 2U : 0U);
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                                     ? 2U : 0U);
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                                         ? 2U : 0U);
                } else {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                                             ? 2U : 0U);
                    } else {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            vlTOPp->pad_mode = ((IData)(vlTOPp->en_quad)
                                                 ? 1U
                                                 : 0U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = (0xffU & ((IData)(vlTOPp->spi_slave_controller__DOT__decode_cmd_comb)
                                      ? vlTOPp->rx_data
                                      : (IData)(vlTOPp->spi_slave_controller__DOT__cmd_reg)));
    vlTOPp->spi_slave_controller__DOT__get_addr = vlTOPp->__Vtable1_spi_slave_controller__DOT__get_addr
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__get_data = vlTOPp->__Vtable1_spi_slave_controller__DOT__get_data
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__send_data = 
        vlTOPp->__Vtable1_spi_slave_controller__DOT__send_data
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__enable_cont 
        = vlTOPp->__Vtable1_spi_slave_controller__DOT__enable_cont
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__enable_regs 
        = vlTOPp->__Vtable1_spi_slave_controller__DOT__enable_regs
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__wait_dummy = 
        vlTOPp->__Vtable1_spi_slave_controller__DOT__wait_dummy
        [vlTOPp->__Vtableidx1];
    vlTOPp->spi_slave_controller__DOT__reg_sel = vlTOPp->__Vtable1_spi_slave_controller__DOT__reg_sel
        [vlTOPp->__Vtableidx1];
    vlTOPp->ctrl_data_rx_valid = 0U;
    if ((0U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if ((1U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if ((2U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if ((5U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if (vlTOPp->rx_data_valid) {
                            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)))) {
                                vlTOPp->ctrl_data_rx_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__reg_valid = 0U;
    if ((0U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if ((1U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if ((2U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if ((5U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if (vlTOPp->rx_data_valid) {
                            if (vlTOPp->spi_slave_controller__DOT__enable_regs) {
                                vlTOPp->spi_slave_controller__DOT__reg_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ctrl_rd_wr = vlTOPp->spi_slave_controller__DOT__send_data;
    vlTOPp->spi_slave_controller__DOT__tx_data_valid_next = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_addr)))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                    vlTOPp->spi_slave_controller__DOT__tx_data_valid_next = 1U;
                }
            }
        }
    } else {
        if ((1U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            if (vlTOPp->spi_slave_controller__DOT__send_data) {
                                vlTOPp->spi_slave_controller__DOT__tx_data_valid_next = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            vlTOPp->spi_slave_controller__DOT__tx_data_valid_next = 1U;
                        }
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if (vlTOPp->spi_slave_controller__DOT__enable_cont) {
                                    vlTOPp->spi_slave_controller__DOT__tx_data_valid_next = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__state_next = vlTOPp->spi_slave_controller__DOT__state;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        vlTOPp->spi_slave_controller__DOT__state_next 
            = ((IData)(vlTOPp->rx_data_valid) ? ((IData)(vlTOPp->spi_slave_controller__DOT__get_addr)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlTOPp->spi_slave_controller__DOT__get_data)
                                                   ? 4U
                                                   : 3U))
                : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                    vlTOPp->spi_slave_controller__DOT__state_next = 5U;
                } else {
                    if (vlTOPp->spi_slave_controller__DOT__send_data) {
                        vlTOPp->spi_slave_controller__DOT__state_next = 3U;
                    } else {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->spi_slave_controller__DOT__state_next = 4U;
                        }
                    }
                }
            } else {
                vlTOPp->spi_slave_controller__DOT__state_next = 1U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                        vlTOPp->spi_slave_controller__DOT__state_next = 5U;
                    } else {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->spi_slave_controller__DOT__state_next = 4U;
                        } else {
                            if (vlTOPp->spi_slave_controller__DOT__send_data) {
                                vlTOPp->spi_slave_controller__DOT__state_next = 3U;
                            }
                        }
                    }
                } else {
                    vlTOPp->spi_slave_controller__DOT__state_next = 2U;
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    vlTOPp->spi_slave_controller__DOT__state_next 
                        = ((IData)(vlTOPp->rx_data_valid)
                            ? ((IData)(vlTOPp->spi_slave_controller__DOT__get_data)
                                ? 4U : 3U) : 5U);
                } else {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        vlTOPp->spi_slave_controller__DOT__state_next 
                            = ((IData)(vlTOPp->rx_data_valid)
                                ? ((IData)(vlTOPp->spi_slave_controller__DOT__enable_cont)
                                    ? 4U : 0U) : 4U);
                    } else {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            vlTOPp->spi_slave_controller__DOT__state_next 
                                = ((IData)(vlTOPp->spi_slave_controller__DOT__tx_done_reg)
                                    ? ((IData)(vlTOPp->spi_slave_controller__DOT__enable_cont)
                                        ? 3U : 0U) : 3U);
                        } else {
                            if ((6U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                                vlTOPp->spi_slave_controller__DOT__state_next = 6U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->rx_counter_upd = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            if (vlTOPp->spi_slave_controller__DOT__get_addr) {
                vlTOPp->rx_counter_upd = 1U;
            } else {
                if (vlTOPp->spi_slave_controller__DOT__get_data) {
                    vlTOPp->rx_counter_upd = 1U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                    vlTOPp->rx_counter_upd = 1U;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__send_data)))) {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter_upd = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                        vlTOPp->rx_counter_upd = 1U;
                    } else {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter_upd = 1U;
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter_upd = 1U;
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if (vlTOPp->rx_data_valid) {
                            vlTOPp->rx_counter_upd = 1U;
                        }
                    } else {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_cont)))) {
                                    vlTOPp->rx_counter_upd = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_addr)))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                    vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 1U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                    if (vlTOPp->spi_slave_controller__DOT__send_data) {
                        vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 1U;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            if (vlTOPp->spi_slave_controller__DOT__send_data) {
                                vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 1U;
                        }
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if (vlTOPp->spi_slave_controller__DOT__enable_cont) {
                                    vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
        if (vlTOPp->rx_data_valid) {
            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_addr)))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)))) {
                        vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            if (vlTOPp->spi_slave_controller__DOT__send_data) {
                                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)))) {
                                    vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)))) {
                                vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if (vlTOPp->spi_slave_controller__DOT__enable_cont) {
                                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)))) {
                                        vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_slave_controller__DOT__tx_counter_next = 0x1fU;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_addr)))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                    vlTOPp->spi_slave_controller__DOT__tx_counter_next 
                        = ((IData)(vlTOPp->en_quad)
                            ? 7U : 0x1fU);
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                    if (vlTOPp->spi_slave_controller__DOT__send_data) {
                        vlTOPp->spi_slave_controller__DOT__tx_counter_next 
                            = ((IData)(vlTOPp->en_quad)
                                ? 7U : 0x1fU);
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__wait_dummy)))) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            if (vlTOPp->spi_slave_controller__DOT__send_data) {
                                vlTOPp->spi_slave_controller__DOT__tx_counter_next 
                                    = ((IData)(vlTOPp->en_quad)
                                        ? 7U : 0x1fU);
                            }
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__get_data)))) {
                            vlTOPp->spi_slave_controller__DOT__tx_counter_next 
                                = ((IData)(vlTOPp->en_quad)
                                    ? 7U : 0x1fU);
                        }
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if (vlTOPp->spi_slave_controller__DOT__enable_cont) {
                                    vlTOPp->spi_slave_controller__DOT__tx_counter_next 
                                        = ((IData)(vlTOPp->en_quad)
                                            ? 7U : 0x1fU);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->rx_counter = 0x1fU;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        if (vlTOPp->rx_data_valid) {
            if (vlTOPp->spi_slave_controller__DOT__get_addr) {
                vlTOPp->rx_counter = ((IData)(vlTOPp->en_quad)
                                       ? 7U : 0x1fU);
            } else {
                if (vlTOPp->spi_slave_controller__DOT__get_data) {
                    if (vlTOPp->spi_slave_controller__DOT__enable_regs) {
                        vlTOPp->rx_counter = ((IData)(vlTOPp->en_quad)
                                               ? 1U
                                               : 7U);
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
            if (vlTOPp->rx_data_valid) {
                if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                    vlTOPp->rx_counter = vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg1;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__send_data)))) {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter = ((IData)(vlTOPp->en_quad)
                                                   ? 7U
                                                   : 0x1fU);
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                if (vlTOPp->rx_data_valid) {
                    if (vlTOPp->spi_slave_controller__DOT__wait_dummy) {
                        vlTOPp->rx_counter = 0x20U;
                    } else {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter = ((IData)(vlTOPp->en_quad)
                                                   ? 7U
                                                   : 0x1fU);
                        }
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                    if (vlTOPp->rx_data_valid) {
                        if (vlTOPp->spi_slave_controller__DOT__get_data) {
                            vlTOPp->rx_counter = ((IData)(vlTOPp->en_quad)
                                                   ? 7U
                                                   : 0x1fU);
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                        if (vlTOPp->rx_data_valid) {
                            vlTOPp->rx_counter = ((IData)(vlTOPp->spi_slave_controller__DOT__enable_cont)
                                                   ? 
                                                  ((IData)(vlTOPp->en_quad)
                                                    ? 7U
                                                    : 0x1fU)
                                                   : 
                                                  ((IData)(vlTOPp->en_quad)
                                                    ? 1U
                                                    : 7U));
                        }
                    } else {
                        if ((3U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
                            if (vlTOPp->spi_slave_controller__DOT__tx_done_reg) {
                                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__enable_cont)))) {
                                    vlTOPp->rx_counter 
                                        = ((IData)(vlTOPp->en_quad)
                                            ? 1U : 7U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vspi_slave_controller::_eval_initial(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_eval_initial\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__sclk = vlTOPp->sclk;
    vlTOPp->__Vclklast__TOP__sys_rstn = vlTOPp->sys_rstn;
    vlTOPp->__Vclklast__TOP__cs = vlTOPp->cs;
}

void Vspi_slave_controller::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::final\n"); );
    // Variables
    Vspi_slave_controller__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vspi_slave_controller::_eval_settle(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_eval_settle\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vspi_slave_controller::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_ctor_var_reset\n"); );
    // Body
    sclk = VL_RAND_RESET_I(1);
    sys_rstn = VL_RAND_RESET_I(1);
    cs = VL_RAND_RESET_I(1);
    en_quad = VL_RAND_RESET_I(1);
    pad_mode = VL_RAND_RESET_I(2);
    rx_counter = VL_RAND_RESET_I(8);
    rx_counter_upd = VL_RAND_RESET_I(1);
    rx_data = VL_RAND_RESET_I(32);
    rx_data_valid = VL_RAND_RESET_I(1);
    tx_counter = VL_RAND_RESET_I(8);
    tx_counter_upd = VL_RAND_RESET_I(1);
    tx_data = VL_RAND_RESET_I(32);
    tx_data_valid = VL_RAND_RESET_I(1);
    tx_done = VL_RAND_RESET_I(1);
    ctrl_rd_wr = VL_RAND_RESET_I(1);
    ctrl_addr = VL_RAND_RESET_I(32);
    ctrl_addr_valid = VL_RAND_RESET_I(1);
    ctrl_data_rx = VL_RAND_RESET_I(32);
    ctrl_data_rx_valid = VL_RAND_RESET_I(1);
    ctrl_data_rx_ready = VL_RAND_RESET_I(1);
    ctrl_data_tx = VL_RAND_RESET_I(32);
    ctrl_data_tx_valid = VL_RAND_RESET_I(1);
    ctrl_data_tx_ready = VL_RAND_RESET_I(1);
    wrap_length = VL_RAND_RESET_I(16);
    spi_slave_controller__DOT__state = VL_RAND_RESET_I(3);
    spi_slave_controller__DOT__state_next = VL_RAND_RESET_I(3);
    spi_slave_controller__DOT__decode_cmd_comb = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__addr_reg = VL_RAND_RESET_I(32);
    spi_slave_controller__DOT__cmd_reg = VL_RAND_RESET_I(8);
    spi_slave_controller__DOT__sample_ADDR = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__sample_CMD = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__get_addr = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__wait_dummy = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__get_data = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__send_data = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__enable_cont = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__enable_regs = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__reg_sel = VL_RAND_RESET_I(2);
    spi_slave_controller__DOT__reg_valid = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__ctrl_data_tx_ready_next = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__tx_counter_next = VL_RAND_RESET_I(8);
    spi_slave_controller__DOT__tx_counter_upd_next = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__tx_data_valid_next = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__tx_done_reg = VL_RAND_RESET_I(1);
    spi_slave_controller__DOT__u_spiregs__DOT__reg0 = VL_RAND_RESET_I(8);
    spi_slave_controller__DOT__u_spiregs__DOT__reg1 = VL_RAND_RESET_I(8);
    spi_slave_controller__DOT__u_spiregs__DOT__reg2 = VL_RAND_RESET_I(8);
    spi_slave_controller__DOT__u_spiregs__DOT__reg3 = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    __Vtable1_spi_slave_controller__DOT__get_addr[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[1] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[2] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_addr[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[5] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[7] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[11] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_addr[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[17] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[32] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[33] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[48] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[49] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_addr[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[1] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_data[2] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_data[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[5] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[7] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[11] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[17] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_data[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[32] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_data[33] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[48] = 1U;
    __Vtable1_spi_slave_controller__DOT__get_data[49] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__get_data[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[1] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[2] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[5] = 1U;
    __Vtable1_spi_slave_controller__DOT__send_data[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[7] = 1U;
    __Vtable1_spi_slave_controller__DOT__send_data[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[11] = 1U;
    __Vtable1_spi_slave_controller__DOT__send_data[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[17] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[32] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[33] = 1U;
    __Vtable1_spi_slave_controller__DOT__send_data[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[48] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[49] = 1U;
    __Vtable1_spi_slave_controller__DOT__send_data[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__send_data[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[1] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[2] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[5] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[7] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[11] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[17] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[32] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[33] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[48] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[49] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_cont[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[1] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[2] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[5] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[7] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[11] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[17] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[32] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[33] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[48] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[49] = 1U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__enable_regs[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[1] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[2] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[5] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[7] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[11] = 1U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[17] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[32] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[33] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[48] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[49] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__wait_dummy[255] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[0] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[1] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[2] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[3] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[4] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[5] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[6] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[7] = 1U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[8] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[9] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[10] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[11] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[12] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[13] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[14] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[15] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[16] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[17] = 1U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[18] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[19] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[20] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[21] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[22] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[23] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[24] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[25] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[26] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[27] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[28] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[29] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[30] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[31] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[32] = 2U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[33] = 2U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[34] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[35] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[36] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[37] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[38] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[39] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[40] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[41] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[42] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[43] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[44] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[45] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[46] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[47] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[48] = 3U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[49] = 3U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[50] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[51] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[52] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[53] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[54] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[55] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[56] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[57] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[58] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[59] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[60] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[61] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[62] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[63] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[64] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[65] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[66] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[67] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[68] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[69] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[70] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[71] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[72] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[73] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[74] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[75] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[76] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[77] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[78] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[79] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[80] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[81] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[82] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[83] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[84] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[85] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[86] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[87] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[88] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[89] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[90] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[91] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[92] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[93] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[94] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[95] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[96] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[97] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[98] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[99] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[100] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[101] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[102] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[103] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[104] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[105] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[106] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[107] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[108] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[109] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[110] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[111] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[112] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[113] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[114] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[115] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[116] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[117] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[118] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[119] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[120] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[121] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[122] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[123] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[124] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[125] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[126] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[127] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[128] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[129] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[130] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[131] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[132] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[133] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[134] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[135] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[136] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[137] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[138] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[139] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[140] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[141] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[142] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[143] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[144] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[145] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[146] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[147] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[148] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[149] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[150] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[151] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[152] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[153] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[154] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[155] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[156] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[157] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[158] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[159] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[160] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[161] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[162] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[163] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[164] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[165] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[166] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[167] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[168] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[169] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[170] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[171] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[172] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[173] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[174] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[175] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[176] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[177] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[178] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[179] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[180] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[181] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[182] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[183] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[184] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[185] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[186] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[187] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[188] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[189] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[190] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[191] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[192] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[193] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[194] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[195] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[196] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[197] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[198] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[199] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[200] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[201] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[202] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[203] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[204] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[205] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[206] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[207] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[208] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[209] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[210] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[211] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[212] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[213] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[214] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[215] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[216] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[217] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[218] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[219] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[220] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[221] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[222] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[223] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[224] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[225] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[226] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[227] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[228] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[229] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[230] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[231] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[232] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[233] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[234] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[235] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[236] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[237] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[238] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[239] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[240] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[241] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[242] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[243] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[244] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[245] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[246] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[247] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[248] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[249] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[250] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[251] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[252] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[253] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[254] = 0U;
    __Vtable1_spi_slave_controller__DOT__reg_sel[255] = 0U;
}
