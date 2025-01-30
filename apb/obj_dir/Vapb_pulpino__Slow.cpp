// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_pulpino.h for the primary calling header

#include "Vapb_pulpino.h"
#include "Vapb_pulpino__Syms.h"

//==========

VL_CTOR_IMP(Vapb_pulpino) {
    Vapb_pulpino__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_pulpino__Syms(this, name());
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_pulpino::__Vconfigure(Vapb_pulpino__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_pulpino::~Vapb_pulpino() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_pulpino::_initial__TOP__1(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_initial__TOP__1\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PREADY = 1U;
    vlTOPp->PSLVERR = 0U;
}

void Vapb_pulpino::_settle__TOP__3(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_settle__TOP__3\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_pulpino__DOT__register_adr = ((0xff0U 
                                               & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)) 
                                              | (0xfU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)));
    vlTOPp->pad_mux_o = vlTOPp->apb_pulpino__DOT__pad_mux_q;
    vlTOPp->clk_gate_o = vlTOPp->apb_pulpino__DOT__clk_gate_q;
    vlTOPp->pad_cfg_o[0U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U];
    vlTOPp->pad_cfg_o[1U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U];
    vlTOPp->pad_cfg_o[2U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U];
    vlTOPp->pad_cfg_o[3U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U];
    vlTOPp->pad_cfg_o[4U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U];
    vlTOPp->pad_cfg_o[5U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U];
    vlTOPp->boot_addr_o = vlTOPp->apb_pulpino__DOT__boot_adr_q;
    vlTOPp->apb_pulpino__DOT__boot_adr_n = vlTOPp->apb_pulpino__DOT__boot_adr_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        vlTOPp->apb_pulpino__DOT__boot_adr_n 
                            = vlTOPp->PWDATA;
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__status_n = vlTOPp->apb_pulpino__DOT__status_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                            | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                           | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                          | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                         | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                        | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                       | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                      | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))))) {
            if ((0xdU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((0xeU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((0xfU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        if ((5U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                            vlTOPp->apb_pulpino__DOT__status_n 
                                = (3U & vlTOPp->PWDATA);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__clk_gate_n = vlTOPp->apb_pulpino__DOT__clk_gate_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    vlTOPp->apb_pulpino__DOT__clk_gate_n 
                        = vlTOPp->PWDATA;
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U];
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((2U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        if ((8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xffffffc0U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0x3fU & vlTOPp->PWDATA));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xfffff03fU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0xfc0U & (vlTOPp->PWDATA 
                                                >> 2U)));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xfffc0fffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0x3f000U & (vlTOPp->PWDATA 
                                                  >> 4U)));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xff03ffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0xfc0000U & (vlTOPp->PWDATA 
                                                   >> 6U)));
                        } else {
                            if ((9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                    = ((0xc0ffffffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                       | (0x3f000000U 
                                          & (vlTOPp->PWDATA 
                                             << 0x18U)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                    = ((0x3fffffffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                       | (0xc0000000U 
                                          & (vlTOPp->PWDATA 
                                             << 0x16U)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xfffffff0U 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0xfU & (vlTOPp->PWDATA 
                                                  >> 0xaU)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xfffffc0fU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0x3f0U & 
                                          (vlTOPp->PWDATA 
                                           >> 0xcU)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xffff03ffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0xfc00U & 
                                          (vlTOPp->PWDATA 
                                           >> 0xeU)));
                            } else {
                                if ((0xaU == (0xfU 
                                              & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xffc0ffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0x3f0000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0x10U)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xf03fffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0xfc00000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0xeU)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xfffffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0xf0000000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0xcU)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                        = ((0xfffffffcU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                           | (3U & 
                                              (vlTOPp->PWDATA 
                                               >> 0x14U)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                        = ((0xffffff03U 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                           | (0xfcU 
                                              & (vlTOPp->PWDATA 
                                                 >> 0x16U)));
                                } else {
                                    if ((0xbU == (0xfU 
                                                  & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xffffc0ffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0x3f00U 
                                                  & (vlTOPp->PWDATA 
                                                     << 8U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xfff03fffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0xfc000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 6U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xfc0fffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0x3f00000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 4U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0x3ffffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0xfc000000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 2U)));
                                    } else {
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xffffffc0U 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0x3fU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xfffff03fU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0xfc0U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 2U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xfffc0fffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0x3f000U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 4U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xff03ffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0xfc0000U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 6U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0xdU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                    = ((0xc0ffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                       | (0x3f000000U & (vlTOPp->PWDATA 
                                         << 0x18U)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                    = ((0x3fffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                       | (0xc0000000U & (vlTOPp->PWDATA 
                                         << 0x16U)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xfffffff0U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0xfU & (vlTOPp->PWDATA >> 0xaU)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xfffffc0fU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0x3f0U & (vlTOPp->PWDATA 
                                    >> 0xcU)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xffff03ffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0xfc00U & (vlTOPp->PWDATA 
                                     >> 0xeU)));
            } else {
                if ((0xeU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xffc0ffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0x3f0000U & (vlTOPp->PWDATA 
                                           << 0x10U)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xf03fffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0xfc00000U & (vlTOPp->PWDATA 
                                            << 0xeU)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xfffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0xf0000000U & (vlTOPp->PWDATA 
                                             << 0xcU)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                        = ((0xfffffffcU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                           | (3U & (vlTOPp->PWDATA 
                                    >> 0x14U)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                        = ((0xffffff03U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                           | (0xfcU & (vlTOPp->PWDATA 
                                       >> 0x16U)));
                } else {
                    if ((0xfU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xffffc0ffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0x3f00U & (vlTOPp->PWDATA 
                                             << 8U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xfff03fffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0xfc000U & (vlTOPp->PWDATA 
                                              << 6U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xfc0fffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0x3f00000U & (vlTOPp->PWDATA 
                                                << 4U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0x3ffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0xfc000000U & (vlTOPp->PWDATA 
                                                 << 2U)));
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__pad_mux_n = vlTOPp->apb_pulpino__DOT__pad_mux_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                vlTOPp->apb_pulpino__DOT__pad_mux_n 
                    = vlTOPp->PWDATA;
            }
        }
    }
    vlTOPp->PRDATA = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->PRDATA = ((8U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                           ? ((4U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                               ? ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                              >> 2U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                 >> 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                    >> 6U)) 
                                                | (0x3fU 
                                                   & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                      >> 8U)))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                              << 0x16U)) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                  << 0x14U) 
                                                 | (0xf0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                       >> 0xcU)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                     << 0x12U) 
                                                    | (0x3ff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                          >> 0xeU)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                         >> 0x10U)))))))
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                              << 0xeU)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                 << 0xcU)) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                     << 0xaU) 
                                                    | (0x300U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                          >> 0x16U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                       << 8U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                         >> 0x18U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                              << 6U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                 << 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]))))))
                               : ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                               << 0x1eU) 
                                              | (0x3f000000U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                    >> 2U)))) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                  << 0x1cU) 
                                                 | (0xfff0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                       >> 4U)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                     << 0x1aU) 
                                                    | (0x3ffff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                          >> 6U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                         >> 8U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                              << 0x16U)) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                  << 0x14U) 
                                                 | (0xf0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                       >> 0xcU)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                     << 0x12U) 
                                                    | (0x3ff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                          >> 0xeU)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                         >> 0x10U)))))))
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                              << 0xeU)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                 << 0xcU)) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                     << 0xaU) 
                                                    | (0x300U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                          >> 0x16U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                       << 8U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                         >> 0x18U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                              << 6U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                 << 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U])))))))
                           : ((4U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                               ? ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? 0U : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                            ? (IData)(vlTOPp->apb_pulpino__DOT__status_q)
                                            : 0x8082U))
                               : ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? 0U : vlTOPp->apb_pulpino__DOT__boot_adr_q)
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? vlTOPp->apb_pulpino__DOT__clk_gate_q
                                       : vlTOPp->apb_pulpino__DOT__pad_mux_q))));
    }
}

void Vapb_pulpino::_eval_initial(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_eval_initial\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_pulpino::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::final\n"); );
    // Variables
    Vapb_pulpino__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_pulpino::_eval_settle(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_eval_settle\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vapb_pulpino::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_ctor_var_reset\n"); );
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
    VL_RAND_RESET_W(192, pad_cfg_o);
    clk_gate_o = VL_RAND_RESET_I(32);
    pad_mux_o = VL_RAND_RESET_I(32);
    boot_addr_o = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__pad_mux_q = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__pad_mux_n = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__boot_adr_q = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__boot_adr_n = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__clk_gate_q = VL_RAND_RESET_I(32);
    apb_pulpino__DOT__clk_gate_n = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(192, apb_pulpino__DOT__pad_cfg_q);
    VL_RAND_RESET_W(192, apb_pulpino__DOT__pad_cfg_n);
    apb_pulpino__DOT__register_adr = VL_RAND_RESET_I(12);
    apb_pulpino__DOT__status_n = VL_RAND_RESET_I(2);
    apb_pulpino__DOT__status_q = VL_RAND_RESET_I(2);
}
