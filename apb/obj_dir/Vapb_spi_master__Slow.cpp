// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_spi_master.h for the primary calling header

#include "Vapb_spi_master.h"
#include "Vapb_spi_master__Syms.h"

//==========

VL_CTOR_IMP(Vapb_spi_master) {
    Vapb_spi_master__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_spi_master__Syms(this, name());
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_spi_master::__Vconfigure(Vapb_spi_master__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_spi_master::~Vapb_spi_master() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_spi_master::_initial__TOP__1(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_initial__TOP__1\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PSLVERR = 0U;
    vlTOPp->PREADY = 1U;
}

void Vapb_spi_master::_settle__TOP__3(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_settle__TOP__3\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_spi_master__DOT__s_int_rd_intsta = 
        ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
          & (~ (IData)(vlTOPp->PWRITE))) & (0xaU == 
                                            (0xfU & 
                                             ((IData)(vlTOPp->PADDR) 
                                              >> 2U))));
    vlTOPp->apb_spi_master__DOT__spi_data_tx_valid 
        = ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
            & (IData)(vlTOPp->PWRITE)) & (6U == (0xfU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))));
    vlTOPp->apb_spi_master__DOT__spi_data_rx_ready 
        = ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
            & (~ (IData)(vlTOPp->PWRITE))) & (8U == 
                                              (0xfU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U))));
    vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__full 
        = (0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__spi_ctrl_data_tx_valid 
        = (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_txfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__full 
        = (0xaU == (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements));
    vlTOPp->apb_spi_master__DOT__spi_data_rx_valid 
        = (0U != (IData)(vlTOPp->apb_spi_master__DOT__u_rxfifo__DOT__elements));
    vlTOPp->spi_sdo1 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1dU));
    vlTOPp->spi_sdo2 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1eU));
    vlTOPp->spi_sdo3 = (1U & (vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int 
                              >> 0x1fU));
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
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->apb_spi_master__DOT__spi_clk_div_valid)
            ? (IData)(vlTOPp->apb_spi_master__DOT__spi_clk_div)
            : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt));
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
    vlTOPp->apb_spi_master__DOT__s_int_rx = 0U;
    if ((0U != (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
        if ((1U == (IData)(vlTOPp->apb_spi_master__DOT__r_state_rx))) {
            vlTOPp->apb_spi_master__DOT__s_int_rx = 1U;
        }
    }
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
    vlTOPp->events_o = ((2U & (IData)(vlTOPp->events_o)) 
                        | ((IData)(vlTOPp->apb_spi_master__DOT__s_int_tx) 
                           | (IData)(vlTOPp->apb_spi_master__DOT__s_int_rx)));
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
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done 
        = (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter) 
            == ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_rise));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done 
        = (((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter) 
            == ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt) 
                - (IData)(1U))) & (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__spi_fall));
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
    vlTOPp->events_o = ((1U & (IData)(vlTOPp->events_o)) 
                        | ((IData)(vlTOPp->apb_spi_master__DOT__s_eot) 
                           << 1U));
    vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next 
        = ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid)
            ? ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__en_quad)
                ? (0x3fffU & ((IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx) 
                              >> 2U)) : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__counter_rx))
            : (IData)(vlTOPp->apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt));
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

void Vapb_spi_master::_eval_initial(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_eval_initial\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_spi_master::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::final\n"); );
    // Variables
    Vapb_spi_master__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_spi_master::_eval_settle(Vapb_spi_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_eval_settle\n"); );
    Vapb_spi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vapb_spi_master::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_spi_master::_ctor_var_reset\n"); );
    // Body
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
    events_o = VL_RAND_RESET_I(2);
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
    apb_spi_master__DOT__spi_clk_div = VL_RAND_RESET_I(8);
    apb_spi_master__DOT__spi_clk_div_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_addr = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__spi_addr_len = VL_RAND_RESET_I(6);
    apb_spi_master__DOT__spi_cmd = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__spi_cmd_len = VL_RAND_RESET_I(6);
    apb_spi_master__DOT__spi_data_len = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__spi_dummy_rd = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__spi_dummy_wr = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__spi_swrst = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_rd = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_wr = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_qrd = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_qwr = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_csreg = VL_RAND_RESET_I(4);
    apb_spi_master__DOT__spi_data_tx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_data_rx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_data_rx_ready = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_ctrl_status = VL_RAND_RESET_I(7);
    apb_spi_master__DOT__spi_ctrl_data_tx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_ctrl_data_tx_ready = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__spi_ctrl_data_rx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__s_eot = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__r_counter_tx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__r_counter_rx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__s_th_tx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__s_th_rx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__s_cnt_tx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__s_cnt_rx = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__s_int_tx = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__s_int_rx = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__s_int_en = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__s_int_cnt_en = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__s_int_rd_intsta = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__r_state_rx = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__s_state_rx_next = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__r_state_tx = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__s_state_tx_next = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__u_txfifo__DOT__pointer_in = VL_RAND_RESET_I(4);
    apb_spi_master__DOT__u_txfifo__DOT__pointer_out = VL_RAND_RESET_I(4);
    apb_spi_master__DOT__u_txfifo__DOT__elements = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            apb_spi_master__DOT__u_txfifo__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    apb_spi_master__DOT__u_txfifo__DOT__full = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_txfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_rxfifo__DOT__pointer_in = VL_RAND_RESET_I(4);
    apb_spi_master__DOT__u_rxfifo__DOT__pointer_out = VL_RAND_RESET_I(4);
    apb_spi_master__DOT__u_rxfifo__DOT__elements = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            apb_spi_master__DOT__u_rxfifo__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    apb_spi_master__DOT__u_rxfifo__DOT__full = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_rxfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__spi_rise = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__spi_fall = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__spi_clock_en = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__spi_en_tx = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__spi_en_rx = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__counter_tx = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__counter_tx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__counter_rx = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__counter_rx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__data_to_tx = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__data_to_tx_ready = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__en_quad = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__en_quad_int = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__do_rx = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__s_spi_mode = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_valid = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__spi_cs = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__tx_clk_en = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__rx_clk_en = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__ctrl_data_mux = VL_RAND_RESET_I(3);
    apb_spi_master__DOT__u_spictrl__DOT__state = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__u_spictrl__DOT__state_next = VL_RAND_RESET_I(5);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt = VL_RAND_RESET_I(8);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next = VL_RAND_RESET_I(8);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter = VL_RAND_RESET_I(8);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__counter_next = VL_RAND_RESET_I(8);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_clkgen__DOT__running = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_next = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__done = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__reg_done = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_CS = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_txreg__DOT__tx_NS = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_next = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__done = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__reg_done = VL_RAND_RESET_I(1);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_CS = VL_RAND_RESET_I(2);
    apb_spi_master__DOT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = VL_RAND_RESET_I(2);
}
