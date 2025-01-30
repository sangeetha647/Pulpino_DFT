// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_uart_sv.h for the primary calling header

#include "Vapb_uart_sv.h"
#include "Vapb_uart_sv__Syms.h"

//==========

void Vapb_uart_sv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_uart_sv::eval\n"); );
    Vapb_uart_sv__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_uart_sv.sv", 11, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_uart_sv::_eval_initial_loop(Vapb_uart_sv__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_uart_sv.sv", 11, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_uart_sv::_sequent__TOP__2(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_sequent__TOP__2\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements;
    CData/*3:0*/ __Vdlyvdim0__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v1;
    CData/*3:0*/ __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out;
    CData/*3:0*/ __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in;
    CData/*4:0*/ __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements;
    CData/*3:0*/ __Vdlyvdim0__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v1;
    CData/*3:0*/ __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out;
    CData/*3:0*/ __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in;
    SData/*15:0*/ __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt;
    SData/*15:0*/ __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt;
    SData/*8:0*/ __Vdlyvval__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0;
    // Body
    __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out;
    __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0 = 0U;
    __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v1 = 0U;
    __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements;
    __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements;
    __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt 
        = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt;
    __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt 
        = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt;
    __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0 = 0U;
    __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v1 = 0U;
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count 
        = ((IData)(vlTOPp->RSTN) ? (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_bit_count_next)
            : 0U);
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__sampleData) {
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data 
                = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data_next;
        }
    } else {
        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_data = 0xffU;
    }
    if (vlTOPp->RSTN) {
        vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q 
            = vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_n;
        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count 
            = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count_next;
        vlTOPp->apb_uart_sv__DOT__trigger_level_q = vlTOPp->apb_uart_sv__DOT__trigger_level_n;
    } else {
        vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q = 1U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__reg_bit_count = 0U;
        vlTOPp->apb_uart_sv__DOT__trigger_level_q = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in = 0U;
        } else {
            if (((IData)(vlTOPp->apb_uart_sv__DOT__rx_valid) 
                 & (0x10U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in))));
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in = 0U;
        } else {
            if (((IData)(vlTOPp->apb_uart_sv__DOT__fifo_tx_valid) 
                 & (0x10U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in))));
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in = 0U;
    }
    if (vlTOPp->RSTN) {
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS 
            = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__NS;
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync 
            = ((6U & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync) 
                      << 1U)) | (IData)(vlTOPp->rx_i));
    } else {
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_rx_sync = 7U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out = 0U;
        } else {
            if (((IData)(vlTOPp->apb_uart_sv__DOT__tx_ready) 
                 & (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out))));
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out = 0U;
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__CS = 
        ((IData)(vlTOPp->RSTN) ? (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__NS)
          : 0U);
    if (vlTOPp->RSTN) {
        if (((IData)(vlTOPp->apb_uart_sv__DOT__fifo_tx_valid) 
             & (0x10U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)))) {
            __Vdlyvval__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0 
                = vlTOPp->apb_uart_sv__DOT__fifo_tx_data;
            __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0 
                = vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in;
        }
    } else {
        __Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v1 = 1U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements = 0U;
        } else {
            if ((((IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_ready) 
                  & (IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_valid)) 
                 & ((~ (IData)(vlTOPp->apb_uart_sv__DOT__rx_valid)) 
                    | (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else {
                if (((((~ (IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_valid)) 
                       | (~ (IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_ready))) 
                      & (IData)(vlTOPp->apb_uart_sv__DOT__rx_valid)) 
                     & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full)))) {
                    __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements)));
                }
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements = 0U;
        } else {
            if ((((IData)(vlTOPp->apb_uart_sv__DOT__tx_ready) 
                  & (IData)(vlTOPp->apb_uart_sv__DOT__tx_valid)) 
                 & ((~ (IData)(vlTOPp->apb_uart_sv__DOT__fifo_tx_valid)) 
                    | (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else {
                if (((((~ (IData)(vlTOPp->apb_uart_sv__DOT__tx_valid)) 
                       | (~ (IData)(vlTOPp->apb_uart_sv__DOT__tx_ready))) 
                      & (IData)(vlTOPp->apb_uart_sv__DOT__fifo_tx_valid)) 
                     & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full)))) {
                    __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements)));
                }
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_q) {
            __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out = 0U;
        } else {
            if (((IData)(vlTOPp->apb_uart_sv__DOT__fifo_rx_ready) 
                 & (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out))));
            }
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baudgen_en) {
            if (((~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__start_bit)) 
                 & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt) 
                    == (0xffffU & vlTOPp->apb_uart_sv__DOT__regs_q[2U])))) {
                __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt = 0U;
                vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = 1U;
            } else {
                if (((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__start_bit) 
                     & ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt) 
                        == (0x7fffU & (vlTOPp->apb_uart_sv__DOT__regs_q[2U] 
                                       >> 1U))))) {
                    __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt = 0U;
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = 1U;
                } else {
                    __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt)));
                    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = 0U;
                }
            }
        } else {
            __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt = 0U;
            vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = 0U;
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__bit_done = 0U;
    }
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done) {
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit 
                = vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit_next;
        }
    } else {
        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__parity_bit = 0U;
    }
    if (vlTOPp->RSTN) {
        if (((IData)(vlTOPp->apb_uart_sv__DOT__rx_valid) 
             & (0x10U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements)))) {
            __Vdlyvval__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0 
                = (((IData)(vlTOPp->apb_uart_sv__DOT__parity_error) 
                    << 8U) | (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data));
            __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0 
                = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in;
        }
    } else {
        __Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v1 = 1U;
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out 
        = __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_out;
    vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in 
        = __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__pointer_in;
    if (__Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0) {
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[__Vdlyvdim0__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0] 
            = __Vdlyvval__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v0;
    }
    if (__Vdlyvset__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer__v1) {
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[1U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[2U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[3U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[4U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[5U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[6U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[7U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[8U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[9U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements 
        = __Vdly__apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements;
    vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out 
        = __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out;
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt 
        = __Vdly__apb_uart_sv__DOT__uart_rx_i__DOT__baud_cnt;
    vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in 
        = __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_in;
    vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements 
        = __Vdly__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements;
    if (__Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0) {
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[__Vdlyvdim0__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0] 
            = __Vdlyvval__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v0;
    }
    if (__Vdlyvset__apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer__v1) {
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[1U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[2U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[3U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[4U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[5U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[6U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[7U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[8U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[9U] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlTOPp->event_o = (1U & (~ (IData)(vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__iir_q)));
    vlTOPp->apb_uart_sv__DOT__rx_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__CS))) {
                vlTOPp->apb_uart_sv__DOT__rx_valid = 1U;
            }
        }
    }
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
    vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_q = ((IData)(vlTOPp->RSTN) 
                                               & (IData)(vlTOPp->apb_uart_sv__DOT__tx_fifo_clr_n));
    vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__full 
        = (0x10U == (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements));
    vlTOPp->apb_uart_sv__DOT__tx_valid = (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_fifo_i__DOT__elements));
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
    vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_q = ((IData)(vlTOPp->RSTN) 
                                               & (IData)(vlTOPp->apb_uart_sv__DOT__rx_fifo_clr_n));
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
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baudgen_en) {
            if (((IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt) 
                 == (0xffffU & vlTOPp->apb_uart_sv__DOT__regs_q[2U]))) {
                __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt = 0U;
                vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt)));
                vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt = 0U;
            vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done = 0U;
        }
    } else {
        __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt = 0U;
        vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__bit_done = 0U;
    }
    vlTOPp->apb_uart_sv__DOT__parity_error = 0U;
    if (vlTOPp->RSTN) {
        if (vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__sampleData) {
            vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data 
                = vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data_next;
        }
    } else {
        vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__reg_data = 0xffU;
    }
    vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__full 
        = (0x10U == (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements));
    vlTOPp->apb_uart_sv__DOT__fifo_rx_valid = (0U != (IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__elements) 
                             << 2U) | (IData)(vlTOPp->apb_uart_sv__DOT__trigger_level_q));
    vlTOPp->apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached 
        = vlTOPp->__Vtable1_apb_uart_sv__DOT__uart_interrupt_i__DOT__trigger_level_reached
        [vlTOPp->__Vtableidx1];
    vlTOPp->apb_uart_sv__DOT__fifo_rx_data = vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__buffer
        [vlTOPp->apb_uart_sv__DOT__uart_rx_fifo_i__DOT__pointer_out];
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
    vlTOPp->apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt 
        = __Vdly__apb_uart_sv__DOT__uart_tx_i__DOT__baud_cnt;
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
    if (vlTOPp->RSTN) {
        vlTOPp->apb_uart_sv__DOT__regs_q[0U] = vlTOPp->apb_uart_sv__DOT__regs_n[0U];
        vlTOPp->apb_uart_sv__DOT__regs_q[1U] = vlTOPp->apb_uart_sv__DOT__regs_n[1U];
        vlTOPp->apb_uart_sv__DOT__regs_q[2U] = vlTOPp->apb_uart_sv__DOT__regs_n[2U];
    } else {
        vlTOPp->apb_uart_sv__DOT__regs_q[0U] = (0xffff00ffU 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[0U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[0U] = (0x10000U 
                                                | (0xff00ffffU 
                                                   & vlTOPp->apb_uart_sv__DOT__regs_q[0U]));
        vlTOPp->apb_uart_sv__DOT__regs_q[0U] = (0xffffffU 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[0U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[1U] = (0xffffff00U 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[1U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[1U] = (0x6000U 
                                                | (0xffff00ffU 
                                                   & vlTOPp->apb_uart_sv__DOT__regs_q[1U]));
        vlTOPp->apb_uart_sv__DOT__regs_q[1U] = (0xff00ffffU 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[1U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[1U] = (0xffffffU 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[1U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[2U] = (0xffU 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[2U]);
        vlTOPp->apb_uart_sv__DOT__regs_q[2U] = (0xff00U 
                                                & vlTOPp->apb_uart_sv__DOT__regs_q[2U]);
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
    vlTOPp->apb_uart_sv__DOT__uart_rx_i__DOT__s_target_bits 
        = ((0x2000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
            ? ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                ? 7U : 6U) : ((0x1000000U & vlTOPp->apb_uart_sv__DOT__regs_q[0U])
                               ? 5U : 4U));
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
}

VL_INLINE_OPT void Vapb_uart_sv::_combo__TOP__4(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_combo__TOP__4\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vapb_uart_sv::_eval(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_eval\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RSTN)) & (IData)(vlTOPp->__Vclklast__TOP__RSTN)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RSTN = vlTOPp->RSTN;
}

VL_INLINE_OPT QData Vapb_uart_sv::_change_request(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_change_request\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_uart_sv::_change_request_1(Vapb_uart_sv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_change_request_1\n"); );
    Vapb_uart_sv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_uart_sv::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_uart_sv::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RSTN & 0xfeU))) {
        Verilated::overWidthError("RSTN");}
    if (VL_UNLIKELY((PADDR & 0xf000U))) {
        Verilated::overWidthError("PADDR");}
    if (VL_UNLIKELY((PWRITE & 0xfeU))) {
        Verilated::overWidthError("PWRITE");}
    if (VL_UNLIKELY((PSEL & 0xfeU))) {
        Verilated::overWidthError("PSEL");}
    if (VL_UNLIKELY((PENABLE & 0xfeU))) {
        Verilated::overWidthError("PENABLE");}
    if (VL_UNLIKELY((rx_i & 0xfeU))) {
        Verilated::overWidthError("rx_i");}
}
#endif  // VL_DEBUG
