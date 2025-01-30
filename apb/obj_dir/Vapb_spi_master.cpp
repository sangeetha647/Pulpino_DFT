// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_spi_master.h for the primary calling header

#include "Vapb_spi_master.h"
#include "Vapb_spi_master__Syms.h"

//==========

void Vapb_spi_master::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_spi_master::eval\n"); );
    Vapb_spi_master__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_spi_master.sv", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_spi_master::_eval_initial_loop(Vapb_spi_master__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_spi_master.sv", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_spi_master::_combo__TOP__2(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_combo__TOP__2\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_spi_master__DOT__s_int_rd_intsta = 
        ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
          & (~ (IData)(vlTOPp->PWRITE))) & (0xaU == 
                                            (0xfU & 
                                             ((IData)(vlTOPp->PADDR) 
                                              >> 2U))));
}

VL_INLINE_OPT void Vapb_spi_master::_sequent__TOP__4(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_sequent__TOP__4\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements;
    CData/*3:0*/ __Vdlyvdim0__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v1;
    CData/*3:0*/ __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out;
    CData/*3:0*/ __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in;
    CData/*4:0*/ __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements;
    CData/*3:0*/ __Vdlyvdim0__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v1;
    CData/*3:0*/ __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out;
    CData/*3:0*/ __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in;
    IData/*31:0*/ __Vdlyvval__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0;
    IData/*31:0*/ __Vdlyvval__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0;
    // Body
    __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in 
        = vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in;
    __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out 
        = vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out;
    __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in 
        = vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in;
    __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements 
        = vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements;
    __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out 
        = vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out;
    __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0 = 0U;
    __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v1 = 0U;
    __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0 = 0U;
    __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v1 = 0U;
    __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements 
        = vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements;
    if (vlTOPp->HRESETn) {
        vlTOPp->spi_mode = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int 
            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next;
    } else {
        vlTOPp->spi_mode = 2U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int = 0U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_clk_div_valid = 0U;
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    vlTOPp->apb_spi_master__DOT__spi_clk_div_valid = 1U;
                }
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_clk_div_valid = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_clk_div_valid = 0U;
    }
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_spi_master__DOT__r_state_rx = vlTOPp->apb_spi_master__DOT__s_state_rx_next;
        vlTOPp->apb_spi_master__DOT__r_state_tx = vlTOPp->apb_spi_master__DOT__s_state_tx_next;
    } else {
        vlTOPp->apb_spi_master__DOT__r_state_rx = 0U;
        vlTOPp->apb_spi_master__DOT__r_state_tx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_csreg 
                    = (0xfU & (vlTOPp->PWDATA >> 8U));
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_csreg = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    vlTOPp->apb_spi_master__DOT__spi_clk_div 
                        = (0xffU & vlTOPp->PWDATA);
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_clk_div = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_th_tx 
                                            = (0x1fU 
                                               & vlTOPp->PWDATA);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_th_tx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_th_rx 
                                            = (0x1fU 
                                               & (vlTOPp->PWDATA 
                                                  >> 8U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_th_rx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_int_en 
                                            = (1U & 
                                               (vlTOPp->PWDATA 
                                                >> 0x1fU));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_int_en = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        vlTOPp->apb_spi_master__DOT__spi_cmd 
                            = vlTOPp->PWDATA;
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_cmd = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            vlTOPp->apb_spi_master__DOT__spi_addr 
                                = vlTOPp->PWDATA;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_addr = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS 
        = ((IData)(vlTOPp->HRESETn) ? (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS)
            : 0U);
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in = 0U;
        } else {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid) 
                 & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements)))) {
                __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in 
                    = ((9U == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in))));
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out = 0U;
        } else {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_data_rx_ready) 
                 & (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements)))) {
                __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out))));
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS 
        = ((IData)(vlTOPp->HRESETn) & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS));
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in = 0U;
        } else {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_data_tx_valid) 
                 & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)))) {
                __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in 
                    = ((9U == (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in))));
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements = 0U;
        } else {
            if ((((IData)(vlTOPp->apb_spi_master__DOT__spi_data_rx_ready) 
                  & (IData)(vlTOPp->apb_spi_master__DOT__spi_data_rx_valid)) 
                 & ((~ (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid)) 
                    | (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__full)))) {
                __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements 
                    = (0x1fU & ((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements) 
                                - (IData)(1U)));
            } else {
                if (((((~ (IData)(vlTOPp->apb_spi_master__DOT__spi_data_rx_valid)) 
                       | (~ (IData)(vlTOPp->apb_spi_master__DOT__spi_data_rx_ready))) 
                      & (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid)) 
                     & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__full)))) {
                    __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements)));
                }
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out = 0U;
        } else {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready) 
                 & (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)))) {
                __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out))));
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid) 
             & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements)))) {
            vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT____Vlvbound1 
                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
            if ((9U >= (0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in) 
                                - (IData)(1U))))) {
                __Vdlyvval__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0 
                    = vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT____Vlvbound1;
                __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0 = 1U;
                __Vdlyvdim0__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0 
                    = (0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in) 
                               - (IData)(1U)));
            }
        }
    } else {
        __Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v1 = 1U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__s_int_cnt_en) {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid) 
                 & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements)))) {
                vlTOPp->apb_spi_master__DOT__r_counter_rx 
                    = (((IData)(vlTOPp->apb_spi_master__DOT__r_counter_rx) 
                        == ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_rx) 
                            - (IData)(1U))) ? 0U : 
                       (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__r_counter_rx))));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__r_counter_rx = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__r_counter_rx = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt 
        = ((IData)(vlTOPp->HRESETn) ? (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next)
            : 8U);
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__s_int_cnt_en) {
            if (((0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)) 
                 & (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready))) {
                vlTOPp->apb_spi_master__DOT__r_counter_tx 
                    = (((IData)(vlTOPp->apb_spi_master__DOT__r_counter_tx) 
                        == ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_tx) 
                            - (IData)(1U))) ? 0U : 
                       (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__r_counter_tx))));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__r_counter_tx = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__r_counter_tx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (((IData)(vlTOPp->apb_spi_master__DOT__spi_data_tx_valid) 
             & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)))) {
            vlTOPp->apb_spi_master__DOT__u_txfifo__DOT____Vlvbound1 
                = vlTOPp->PWDATA;
            if ((9U >= (0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in) 
                                - (IData)(1U))))) {
                __Vdlyvval__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0 
                    = vlTOPp->apb_spi_master__DOT__u_txfifo__DOT____Vlvbound1;
                __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0 = 1U;
                __Vdlyvdim0__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0 
                    = (0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in) 
                               - (IData)(1U)));
            }
        }
    } else {
        __Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v1 = 1U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter 
        = ((IData)(vlTOPp->HRESETn) ? (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next)
            : 0U);
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_spi_master__DOT__spi_swrst) {
            __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements = 0U;
        } else {
            if ((((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready) 
                  & (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_valid)) 
                 & ((~ (IData)(vlTOPp->apb_spi_master__DOT__spi_data_tx_valid)) 
                    | (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__full)))) {
                __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements 
                    = (0x1fU & ((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements) 
                                - (IData)(1U)));
            } else {
                if (((((~ (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_valid)) 
                       | (~ (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready))) 
                      & (IData)(vlTOPp->apb_spi_master__DOT__spi_data_tx_valid)) 
                     & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__full)))) {
                    __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)));
                }
            }
        }
    } else {
        __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U == (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    vlTOPp->apb_spi_master__DOT__spi_dummy_rd 
                                        = ((0xff00U 
                                            & (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd)) 
                                           | (0xffU 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_spi_master__DOT__spi_dummy_rd 
                                        = ((0xffU & (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd)) 
                                           | (0xff00U 
                                              & vlTOPp->PWDATA));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_dummy_rd = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U == (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    vlTOPp->apb_spi_master__DOT__spi_dummy_wr 
                                        = ((0xff00U 
                                            & (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr)) 
                                           | (0xffU 
                                              & (vlTOPp->PWDATA 
                                                 >> 0x10U)));
                                    vlTOPp->apb_spi_master__DOT__spi_dummy_wr 
                                        = ((0xffU & (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr)) 
                                           | (0xff00U 
                                              & (vlTOPp->PWDATA 
                                                 >> 0x10U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_dummy_wr = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                vlTOPp->apb_spi_master__DOT__spi_cmd_len 
                                    = (0x3fU & vlTOPp->PWDATA);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_cmd_len = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                vlTOPp->apb_spi_master__DOT__spi_addr_len 
                                    = (0x3fU & (vlTOPp->PWDATA 
                                                >> 8U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_addr_len = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                vlTOPp->apb_spi_master__DOT__spi_data_len 
                                    = ((0xff00U & (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len)) 
                                       | (0xffU & (vlTOPp->PWDATA 
                                                   >> 0x10U)));
                                vlTOPp->apb_spi_master__DOT__spi_data_len 
                                    = ((0xffU & (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len)) 
                                       | (0xff00U & 
                                          (vlTOPp->PWDATA 
                                           >> 0x10U)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_data_len = 0U;
    }
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state 
            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt 
            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter 
            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next;
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state = 0U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = 8U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (((IData)(vlTOPp->apb_spi_master__DOT__spi_qrd) 
             | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad_int = 1U;
        } else {
            if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad_int = 0U;
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad_int = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt 
        = ((IData)(vlTOPp->HRESETn) ? (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next)
            : 0U);
    if (vlTOPp->HRESETn) {
        if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
             | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx = 1U;
        } else {
            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_wr) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx = 0U;
            } else {
                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx = 0U;
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((1U & ((~ (IData)(vlTOPp->spi_clk)) & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en))))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
        } else {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running = 1U;
            vlTOPp->spi_clk = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next;
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter 
                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_next;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter = 0U;
        vlTOPp->spi_clk = 0U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out 
        = __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_out;
    vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out 
        = __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_out;
    vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_in 
        = __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__pointer_in;
    if (__Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0) {
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[__Vdlyvdim0__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0] 
            = __Vdlyvval__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v0;
    }
    if (__Vdlyvset__apb_spi_master__DOT__u_rxfifo__DOT__buffer__v1) {
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[0U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[1U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[2U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[3U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[4U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[5U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[6U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[7U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[8U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer[9U] = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements 
        = __Vdly__apb_spi_master__DOT__u_rxfifo__DOT__elements;
    vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_in 
        = __Vdly__apb_spi_master__DOT__u_txfifo__DOT__pointer_in;
    if (__Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0) {
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[__Vdlyvdim0__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0] 
            = __Vdlyvval__apb_spi_master__DOT__u_txfifo__DOT__buffer__v0;
    }
    if (__Vdlyvset__apb_spi_master__DOT__u_txfifo__DOT__buffer__v1) {
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[0U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[1U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[2U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[3U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[4U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[5U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[6U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[7U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[8U] = 0U;
        vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer[9U] = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements 
        = __Vdly__apb_spi_master__DOT__u_txfifo__DOT__elements;
    vlTOPp->spi_sdo1 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1dU));
    vlTOPp->spi_sdo2 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1eU));
    vlTOPp->spi_sdo3 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1fU));
    vlTOPp->apb_spi_master__DOT__s_int_rx = 0U;
    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
            vlTOPp->apb_spi_master__DOT__s_int_rx = 1U;
        }
    }
    vlTOPp->apb_spi_master__DOT__s_int_tx = 0U;
    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
            vlTOPp->apb_spi_master__DOT__s_int_tx = 1U;
        } else {
            if ((2U != (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
                vlTOPp->apb_spi_master__DOT__s_int_tx = 0U;
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__full 
        = (0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__spi_data_rx_valid 
        = (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements));
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_cnt_rx 
                                            = (0x1fU 
                                               & (vlTOPp->PWDATA 
                                                  >> 0x18U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_cnt_rx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_cnt_tx 
                                            = (0x1fU 
                                               & (vlTOPp->PWDATA 
                                                  >> 0x10U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_cnt_tx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((2U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((3U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_spi_master__DOT__s_int_cnt_en 
                                            = (1U & 
                                               (vlTOPp->PWDATA 
                                                >> 0x1eU));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__s_int_cnt_en = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_swrst = 0U;
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_swrst 
                    = (1U & (vlTOPp->PWDATA >> 4U));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_swrst = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_swrst = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__full 
        = (0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_valid 
        = (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__spi_ctrl_status = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        vlTOPp->apb_spi_master__DOT__spi_ctrl_status 
            = ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                ? (1U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                : ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                    ? (2U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                    : ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                        ? (4U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                        : ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                            ? (8U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                            : ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                ? (0x10U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                                : ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                    ? (0x20U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))
                                    : (0x40U | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))))))));
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->apb_spi_master__DOT__spi_clk_div_valid)
            ? (IData)(vlTOPp->apb_spi_master__DOT__spi_clk_div)
            : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt));
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_rd = 0U;
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_rd 
                    = (1U & vlTOPp->PWDATA);
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_rd = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_rd = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_wr = 0U;
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_wr 
                    = (1U & (vlTOPp->PWDATA >> 1U));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_wr = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_wr = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_qrd = 0U;
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_qrd 
                    = (1U & (vlTOPp->PWDATA >> 2U));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_qrd = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_qrd = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            vlTOPp->apb_spi_master__DOT__spi_qwr = 0U;
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_spi_master__DOT__spi_qwr 
                    = (1U & (vlTOPp->PWDATA >> 3U));
            }
        } else {
            vlTOPp->apb_spi_master__DOT__spi_qwr = 0U;
        }
    } else {
        vlTOPp->apb_spi_master__DOT__spi_qwr = 0U;
    }
    if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt))) {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_next = 0U;
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (~ (IData)(vlTOPp->spi_clk)));
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_next 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter)));
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (IData)(vlTOPp->spi_clk));
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise = 0U;
    if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt))) {
        if ((1U & (~ (IData)(vlTOPp->spi_clk)))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise 
                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running;
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall = 0U;
    if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt))) {
        if (vlTOPp->spi_clk) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall 
                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running;
        }
    }
    vlTOPp->events_o = ((2U & (IData)(vlTOPp->events_o)) 
                        | ((IData)(vlTOPp->apb_spi_master__DOT__s_int_tx) 
                           | (IData)(vlTOPp->apb_spi_master__DOT__s_int_rx)));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done 
        = (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter) 
            == ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done 
        = (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter) 
            == ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs = 1U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs 
            = ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               & (~ ((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                       | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                      | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                     | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))));
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad 
        = (((IData)(vlTOPp->apb_spi_master__DOT__spi_qrd) 
            | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr)) 
           | (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad_int));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter;
    if ((1U & (~ ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter)));
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next = 0U;
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter;
    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter)));
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next = 0U;
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next = 2U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next 
                                = (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                    | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))
                                    ? ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))
                                        ? 4U : 6U) : 
                                   ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                     ? 4U : 5U));
                        }
                    }
                }
            } else {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next 
                    = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done)
                        ? ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))
                            ? 2U : ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))
                                     ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)
                                         ? ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))
                                             ? 4U : 6U)
                                         : ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                             ? 4U : 5U))
                                     : 0U)) : 1U);
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))
                                ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)
                                    ? ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))
                                        ? 4U : 6U) : 
                                   ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                     ? 4U : 5U)) : 0U);
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state_next 
                            = ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done)
                                    ? ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))
                                        ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)
                                            ? 6U : 5U)
                                        : 0U) : 4U)
                                : ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                    ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done)
                                        ? 0U : 5U) : 
                                   ((6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                     ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done)
                                         ? 7U : 6U)
                                     : ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall)
                                         ? 0U : 7U))));
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__s_eot = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if ((1U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    vlTOPp->apb_spi_master__DOT__s_eot = 1U;
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                    vlTOPp->apb_spi_master__DOT__s_eot = 1U;
                                }
                            } else {
                                if ((6U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                                        vlTOPp->apb_spi_master__DOT__s_eot = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx 
                                        = vlTOPp->apb_spi_master__DOT__spi_data_len;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx 
                                        = vlTOPp->apb_spi_master__DOT__spi_data_len;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx 
                                        = vlTOPp->apb_spi_master__DOT__spi_data_len;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx 
                                            = vlTOPp->apb_spi_master__DOT__spi_data_len;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((5U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                if ((6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if ((1U & (~ ((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                          | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 2U;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 1U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? 1U : 4U);
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done)))) {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->spi_csn0 = (1U & ((~ (IData)(vlTOPp->apb_spi_master__DOT__spi_csreg)) 
                              | (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs)));
    vlTOPp->spi_csn1 = (1U & ((~ ((IData)(vlTOPp->apb_spi_master__DOT__spi_csreg) 
                                  >> 1U)) | (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs)));
    vlTOPp->spi_csn2 = (1U & ((~ ((IData)(vlTOPp->apb_spi_master__DOT__spi_csreg) 
                                  >> 2U)) | (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs)));
    vlTOPp->spi_csn3 = (1U & ((~ ((IData)(vlTOPp->apb_spi_master__DOT__spi_csreg) 
                                  >> 3U)) | (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_cs)));
    vlTOPp->spi_sdo0 = (1U & ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                               ? (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                  >> 0x1cU) : (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                               >> 0x1fU)));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode = 2U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode = 2U;
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                        = (((IData)(vlTOPp->apb_spi_master__DOT__spi_qrd) 
                            | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))
                            ? 1U : 0U);
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                            = (((IData)(vlTOPp->apb_spi_master__DOT__spi_qrd) 
                                | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))
                                ? 1U : 0U);
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                = (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                    | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))
                                    ? ((IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->apb_spi_master__DOT__spi_qwr)
                                     ? 1U : 0U));
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                    = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                        ? 1U : 0U);
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)
                                    ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                     ? 1U : 0U));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                            ? 1U : 0U);
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)
                                    ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                        ? 2U : 0U) : 
                                   ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                     ? 1U : 0U));
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                    ? 2U : 0U);
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                            = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        } else {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode 
                                = ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                    ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                        ? 1U : 0U) : 
                                   ((6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))
                                     ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                         ? 2U : 0U)
                                     : ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                         ? 2U : 0U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                        = vlTOPp->apb_spi_master__DOT__spi_cmd_len;
                } else {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                            = vlTOPp->apb_spi_master__DOT__spi_addr_len;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd))) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        : (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len));
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                            = vlTOPp->apb_spi_master__DOT__spi_addr_len;
                    } else {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        : (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                        if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd));
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                    = ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                                            ? (0xfffcU 
                                               & ((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr) 
                                                  << 2U))
                                            : (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr))
                                        : (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len));
                            }
                        }
                    }
                } else {
                    if ((3U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx 
                                            = vlTOPp->apb_spi_master__DOT__spi_data_len;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done 
        = (((~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter)))) 
           | ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter)))));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done 
        = (((~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter)))) 
           | ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter)))));
    vlTOPp->events_o = ((1U & (IData)(vlTOPp->events_o)) 
                        | ((IData)(vlTOPp->apb_spi_master__DOT__s_eot) 
                           << 1U));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid)
            ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                ? (0x3fffU & ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx) 
                              >> 2U)) : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx))
            : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx = 0U;
    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx 
                    = vlTOPp->apb_spi_master__DOT__spi_cmd;
            } else {
                if ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx 
                        = vlTOPp->apb_spi_master__DOT__spi_addr;
                } else {
                    if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx 
                            = ((9U >= (0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out) 
                                               - (IData)(1U))))
                                ? vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__buffer
                               [(0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__pointer_out) 
                                         - (IData)(1U)))]
                                : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid = 0U;
    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid 
                    = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid;
            } else {
                if ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid 
                        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid;
                } else {
                    if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid 
                            = (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements));
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid)
            ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                ? (0x3fffU & ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx) 
                              >> 2U)) : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_tx))
            : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS;
    if ((2U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if ((0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 0U;
            }
        } else {
            if ((0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
                        = ((0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))
                            ? 3U : 0U);
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                        if ((0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 2U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid = 0U;
    if ((2U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid = 1U;
    } else {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done) {
                    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid = 1U;
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                        vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en = 1U;
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise) {
                if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done)))) {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                        if ((0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en = 0U;
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS;
    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS 
                        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
                           & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid));
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid)))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
             & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int;
    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                    = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                        ? (0xfffffff0U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                          << 4U)) : 
                       (0xfffffffeU & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                       << 1U)));
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
                         & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx;
                    }
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
             & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx;
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = 0U;
    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = 1U;
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if ((1U & (~ ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
                                  & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = 0U;
                    }
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                        if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid)))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = 0U;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = 0U;
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready = 0U;
    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall) {
                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                    if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
                         & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready = 1U;
                    }
                } else {
                    if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                        if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx) 
             & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid))) {
            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready = 1U;
        }
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
            if (((((IData)(vlTOPp->apb_spi_master__DOT__spi_rd) 
                   | (IData)(vlTOPp->apb_spi_master__DOT__spi_wr)) 
                  | (IData)(vlTOPp->apb_spi_master__DOT__spi_qrd)) 
                 | (IData)(vlTOPp->apb_spi_master__DOT__spi_qwr))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 1U;
                } else {
                    if ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                            vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 1U;
                            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__spi_data_len))) {
                                    if ((1U & (~ (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__do_rx)))) {
                                        vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en 
                                            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en;
                                    }
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state))) {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en 
                                    = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en;
                                if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done) {
                                    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = 0U;
                                }
                            } else {
                                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en 
                                    = ((6U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__state)) 
                                       & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready = 0U;
    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
        vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
            if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux))) {
                        vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready 
                            = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vapb_spi_master::_combo__TOP__5(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_combo__TOP__5\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_spi_master__DOT__spi_data_rx_ready 
        = ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
            & (~ (IData)(vlTOPp->PWRITE))) & (8U == 
                                              (0xfU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U))));
    vlTOPp->apb_spi_master__DOT__spi_data_tx_valid 
        = ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
            & (IData)(vlTOPp->PWRITE)) & (6U == (0xfU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))));
    if ((0x20U & (IData)(vlTOPp->PADDR))) {
        if ((0x10U & (IData)(vlTOPp->PADDR))) {
            vlTOPp->PRDATA = 0U;
        } else {
            if ((8U & (IData)(vlTOPp->PADDR))) {
                vlTOPp->PRDATA = 0U;
            } else {
                if ((4U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->PRDATA = 0U;
                    vlTOPp->PRDATA = ((0xffffffe0U 
                                       & vlTOPp->PRDATA) 
                                      | (IData)(vlTOPp->apb_spi_master__DOT__s_th_tx));
                    vlTOPp->PRDATA = ((0xffffe0ffU 
                                       & vlTOPp->PRDATA) 
                                      | ((IData)(vlTOPp->apb_spi_master__DOT__s_th_rx) 
                                         << 8U));
                    vlTOPp->PRDATA = ((0xffe0ffffU 
                                       & vlTOPp->PRDATA) 
                                      | ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_tx) 
                                         << 0x10U));
                    vlTOPp->PRDATA = ((0xe0ffffffU 
                                       & vlTOPp->PRDATA) 
                                      | ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_rx) 
                                         << 0x18U));
                    vlTOPp->PRDATA = ((0xbfffffffU 
                                       & vlTOPp->PRDATA) 
                                      | ((IData)(vlTOPp->apb_spi_master__DOT__s_int_cnt_en) 
                                         << 0x1eU));
                    vlTOPp->PRDATA = ((0x7fffffffU 
                                       & vlTOPp->PRDATA) 
                                      | ((IData)(vlTOPp->apb_spi_master__DOT__s_int_en) 
                                         << 0x1fU));
                } else {
                    vlTOPp->PRDATA = ((9U >= (0xfU 
                                              & ((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out) 
                                                 - (IData)(1U))))
                                       ? vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__buffer
                                      [(0xfU & ((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__pointer_out) 
                                                - (IData)(1U)))]
                                       : 0U);
                }
            }
        }
    } else {
        vlTOPp->PRDATA = ((0x10U & (IData)(vlTOPp->PADDR))
                           ? ((8U & (IData)(vlTOPp->PADDR))
                               ? 0U : ((4U & (IData)(vlTOPp->PADDR))
                                        ? (((IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_wr) 
                                            << 0x10U) 
                                           | (IData)(vlTOPp->apb_spi_master__DOT__spi_dummy_rd))
                                        : (((IData)(vlTOPp->apb_spi_master__DOT__spi_data_len) 
                                            << 0x10U) 
                                           | (((IData)(vlTOPp->apb_spi_master__DOT__spi_addr_len) 
                                               << 8U) 
                                              | (IData)(vlTOPp->apb_spi_master__DOT__spi_cmd_len)))))
                           : ((8U & (IData)(vlTOPp->PADDR))
                               ? ((4U & (IData)(vlTOPp->PADDR))
                                   ? vlTOPp->apb_spi_master__DOT__spi_addr
                                   : vlTOPp->apb_spi_master__DOT__spi_cmd)
                               : ((4U & (IData)(vlTOPp->PADDR))
                                   ? (IData)(vlTOPp->apb_spi_master__DOT__spi_clk_div)
                                   : (((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements) 
                                       << 0x18U) | 
                                      (((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements) 
                                        << 0x10U) | (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_status))))));
    }
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
        = vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int;
    if ((1U & (~ ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise) {
                vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
                    = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                        ? ((0xfffffff0U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                                           << 4U)) 
                           | (((IData)(vlTOPp->spi_sdi3) 
                               << 3U) | (((IData)(vlTOPp->spi_sdi2) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->spi_sdi1) 
                                           << 1U) | (IData)(vlTOPp->spi_sdi0)))))
                        : ((0xfffffffeU & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                                           << 1U)) 
                           | (IData)(vlTOPp->spi_sdi1)));
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__s_state_rx_next = vlTOPp->apb_spi_master__DOT__r_state_rx;
    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
        if ((((IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements) 
              >= (IData)(vlTOPp->apb_spi_master__DOT__s_th_rx)) 
             & (IData)(vlTOPp->apb_spi_master__DOT__s_int_en))) {
            vlTOPp->apb_spi_master__DOT__s_state_rx_next = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
            vlTOPp->apb_spi_master__DOT__s_state_rx_next = 2U;
        } else {
            if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
                if (vlTOPp->apb_spi_master__DOT__s_int_cnt_en) {
                    if ((((IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_rx_valid) 
                          & (0xaU != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements))) 
                         & ((IData)(vlTOPp->apb_spi_master__DOT__r_counter_rx) 
                            == ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_rx) 
                                - (IData)(1U))))) {
                        vlTOPp->apb_spi_master__DOT__s_state_rx_next = 0U;
                    }
                } else {
                    if (vlTOPp->apb_spi_master__DOT__s_int_rd_intsta) {
                        vlTOPp->apb_spi_master__DOT__s_state_rx_next = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_spi_master__DOT__s_state_tx_next = vlTOPp->apb_spi_master__DOT__r_state_tx;
    if ((0U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
        if ((((IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements) 
              <= (IData)(vlTOPp->apb_spi_master__DOT__s_th_tx)) 
             & (IData)(vlTOPp->apb_spi_master__DOT__s_int_en))) {
            vlTOPp->apb_spi_master__DOT__s_state_tx_next = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
            vlTOPp->apb_spi_master__DOT__s_state_tx_next = 2U;
        } else {
            if ((2U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_tx))) {
                if (vlTOPp->apb_spi_master__DOT__s_int_cnt_en) {
                    if ((((0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements)) 
                          & (IData)(vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_ready)) 
                         & ((IData)(vlTOPp->apb_spi_master__DOT__r_counter_tx) 
                            == ((IData)(vlTOPp->apb_spi_master__DOT__s_cnt_tx) 
                                - (IData)(1U))))) {
                        vlTOPp->apb_spi_master__DOT__s_state_tx_next = 0U;
                    }
                } else {
                    if (vlTOPp->apb_spi_master__DOT__s_int_rd_intsta) {
                        vlTOPp->apb_spi_master__DOT__s_state_tx_next = 0U;
                    }
                }
            } else {
                vlTOPp->apb_spi_master__DOT__s_state_tx_next 
                    = vlTOPp->apb_spi_master__DOT__r_state_tx;
            }
        }
    }
}

void Vapb_spi_master::_eval(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_eval\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_spi_master::_change_request(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_change_request\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_spi_master::_change_request_1(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_change_request_1\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_spi_master::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((spi_sdi0 & 0xfeU))) {
        Verilated::overWidthError("spi_sdi0");}
    if (VL_UNLIKELY((spi_sdi1 & 0xfeU))) {
        Verilated::overWidthError("spi_sdi1");}
    if (VL_UNLIKELY((spi_sdi2 & 0xfeU))) {
        Verilated::overWidthError("spi_sdi2");}
    if (VL_UNLIKELY((spi_sdi3 & 0xfeU))) {
        Verilated::overWidthError("spi_sdi3");}
}
#endif  // VL_DEBUG
