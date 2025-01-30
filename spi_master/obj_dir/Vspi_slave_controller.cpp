// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_slave_controller.h for the primary calling header

#include "Vspi_slave_controller.h"
#include "Vspi_slave_controller__Syms.h"

//==========

void Vspi_slave_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_slave_controller::eval\n"); );
    Vspi_slave_controller__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("spi_slave_controller.sv", 15, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vspi_slave_controller::_eval_initial_loop(Vspi_slave_controller__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("spi_slave_controller.sv", 15, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vspi_slave_controller::_combo__TOP__1(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_combo__TOP__1\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ctrl_data_rx = vlTOPp->rx_data;
}

VL_INLINE_OPT void Vspi_slave_controller::_sequent__TOP__3(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_sequent__TOP__3\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->sys_rstn) {
        if (vlTOPp->spi_slave_controller__DOT__reg_valid) {
            if ((2U & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))) {
                if ((1U & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))) {
                    vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg3 
                        = (0xffU & vlTOPp->rx_data);
                }
            }
        }
    } else {
        vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg3 = 0U;
    }
    if (vlTOPp->sys_rstn) {
        if (vlTOPp->spi_slave_controller__DOT__reg_valid) {
            if ((2U & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel)))) {
                    vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg2 
                        = (0xffU & vlTOPp->rx_data);
                }
            }
        }
    } else {
        vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg2 = 0U;
    }
    if (vlTOPp->sys_rstn) {
        if (vlTOPp->spi_slave_controller__DOT__reg_valid) {
            if ((1U & (~ ((IData)(vlTOPp->spi_slave_controller__DOT__reg_sel) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))) {
                    vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg1 
                        = (0xffU & vlTOPp->rx_data);
                }
            }
        }
    } else {
        vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg1 = 0x20U;
    }
    if (vlTOPp->sys_rstn) {
        if (vlTOPp->spi_slave_controller__DOT__reg_valid) {
            if ((1U & (~ ((IData)(vlTOPp->spi_slave_controller__DOT__reg_sel) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel)))) {
                    vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg0 
                        = (0xffU & vlTOPp->rx_data);
                }
            }
        }
    } else {
        vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg0 = 0U;
    }
    vlTOPp->wrap_length = (((IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg3) 
                            << 8U) | (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg2));
    vlTOPp->en_quad = (1U & (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg0));
}

VL_INLINE_OPT void Vspi_slave_controller::_sequent__TOP__4(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_sequent__TOP__4\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ctrl_addr_valid = ((~ (IData)(vlTOPp->cs)) 
                               & (IData)(vlTOPp->spi_slave_controller__DOT__sample_ADDR));
    vlTOPp->tx_data_valid = ((~ (IData)(vlTOPp->cs)) 
                             & (IData)(vlTOPp->spi_slave_controller__DOT__tx_data_valid_next));
    vlTOPp->tx_counter_upd = ((~ (IData)(vlTOPp->cs)) 
                              & (IData)(vlTOPp->spi_slave_controller__DOT__tx_counter_upd_next));
    vlTOPp->tx_counter = ((IData)(vlTOPp->cs) ? 0U : (IData)(vlTOPp->spi_slave_controller__DOT__tx_counter_next));
    vlTOPp->ctrl_data_tx_ready = ((~ (IData)(vlTOPp->cs)) 
                                  & (IData)(vlTOPp->spi_slave_controller__DOT__ctrl_data_tx_ready_next));
    if (vlTOPp->cs) {
        vlTOPp->spi_slave_controller__DOT__addr_reg = 0U;
    } else {
        if (vlTOPp->spi_slave_controller__DOT__sample_ADDR) {
            vlTOPp->spi_slave_controller__DOT__addr_reg 
                = vlTOPp->rx_data;
        }
    }
    vlTOPp->spi_slave_controller__DOT__tx_done_reg 
        = ((~ (IData)(vlTOPp->cs)) & (IData)(vlTOPp->tx_done));
    if (vlTOPp->cs) {
        vlTOPp->spi_slave_controller__DOT__cmd_reg = 0U;
    } else {
        if (vlTOPp->spi_slave_controller__DOT__sample_CMD) {
            vlTOPp->spi_slave_controller__DOT__cmd_reg 
                = (0xffU & vlTOPp->rx_data);
        }
    }
    vlTOPp->tx_data = ((IData)(vlTOPp->cs) ? 0U : ((IData)(vlTOPp->spi_slave_controller__DOT__enable_regs)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))
                                                      ? (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg3)
                                                      : (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spi_slave_controller__DOT__reg_sel))
                                                      ? (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg1)
                                                      : (IData)(vlTOPp->spi_slave_controller__DOT__u_spiregs__DOT__reg0)))
                                                    : vlTOPp->ctrl_data_tx));
    vlTOPp->ctrl_addr = vlTOPp->spi_slave_controller__DOT__addr_reg;
    vlTOPp->spi_slave_controller__DOT__state = ((IData)(vlTOPp->cs)
                                                 ? 0U
                                                 : (IData)(vlTOPp->spi_slave_controller__DOT__state_next));
    vlTOPp->spi_slave_controller__DOT__decode_cmd_comb = 0U;
    if ((0U == (IData)(vlTOPp->spi_slave_controller__DOT__state))) {
        vlTOPp->spi_slave_controller__DOT__decode_cmd_comb = 1U;
    }
}

VL_INLINE_OPT void Vspi_slave_controller::_multiclk__TOP__5(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_multiclk__TOP__5\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vspi_slave_controller::_combo__TOP__6(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_combo__TOP__6\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vspi_slave_controller::_eval(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_eval\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if ((((IData)(vlTOPp->sclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sclk))) 
         | ((~ (IData)(vlTOPp->sys_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__sys_rstn)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->cs) & (~ (IData)(vlTOPp->__Vclklast__TOP__cs))) 
         | ((IData)(vlTOPp->sclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sclk))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((((IData)(vlTOPp->cs) & (~ (IData)(vlTOPp->__Vclklast__TOP__cs))) 
          | ((IData)(vlTOPp->sclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sclk)))) 
         | ((~ (IData)(vlTOPp->sys_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__sys_rstn)))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__sclk = vlTOPp->sclk;
    vlTOPp->__Vclklast__TOP__sys_rstn = vlTOPp->sys_rstn;
    vlTOPp->__Vclklast__TOP__cs = vlTOPp->cs;
}

VL_INLINE_OPT QData Vspi_slave_controller::_change_request(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_change_request\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vspi_slave_controller::_change_request_1(Vspi_slave_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_change_request_1\n"); );
    Vspi_slave_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vspi_slave_controller::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_slave_controller::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sclk & 0xfeU))) {
        Verilated::overWidthError("sclk");}
    if (VL_UNLIKELY((sys_rstn & 0xfeU))) {
        Verilated::overWidthError("sys_rstn");}
    if (VL_UNLIKELY((cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
    if (VL_UNLIKELY((rx_data_valid & 0xfeU))) {
        Verilated::overWidthError("rx_data_valid");}
    if (VL_UNLIKELY((tx_done & 0xfeU))) {
        Verilated::overWidthError("tx_done");}
    if (VL_UNLIKELY((ctrl_data_rx_ready & 0xfeU))) {
        Verilated::overWidthError("ctrl_data_rx_ready");}
    if (VL_UNLIKELY((ctrl_data_tx_valid & 0xfeU))) {
        Verilated::overWidthError("ctrl_data_tx_valid");}
}
#endif  // VL_DEBUG
