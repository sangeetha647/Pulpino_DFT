// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_fll_if.h for the primary calling header

#include "Vapb_fll_if.h"
#include "Vapb_fll_if__Syms.h"

//==========

VL_CTOR_IMP(Vapb_fll_if) {
    Vapb_fll_if__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_fll_if__Syms(this, name());
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_fll_if::__Vconfigure(Vapb_fll_if__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_fll_if::~Vapb_fll_if() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_fll_if::_initial__TOP__1(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_initial__TOP__1\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PSLVERR = 0U;
}

void Vapb_fll_if::_settle__TOP__4(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_settle__TOP__4\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_fll_if__DOT__s_bbgen_wr_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((0x40U & (IData)(vlTOPp->PADDR))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                                  >> 3U)))) {
                        vlTOPp->apb_fll_if__DOT__s_bbgen_wr_access = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_bbgen_rd_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0x40U & (IData)(vlTOPp->PADDR))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                                  >> 3U)))) {
                        vlTOPp->apb_fll_if__DOT__s_bbgen_rd_access = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll3_wr_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    vlTOPp->apb_fll_if__DOT__s_fll3_wr_access = 1U;
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll3_rd_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    vlTOPp->apb_fll_if__DOT__s_fll3_rd_access = 1U;
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll1_wr_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    vlTOPp->apb_fll_if__DOT__s_fll1_wr_access = 1U;
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll1_rd_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    vlTOPp->apb_fll_if__DOT__s_fll1_rd_access = 1U;
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll2_wr_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->apb_fll_if__DOT__s_fll2_wr_access = 1U;
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll2_rd_access = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->apb_fll_if__DOT__s_fll2_rd_access = 1U;
                }
            }
        }
    }
    vlTOPp->bbgen_req_o = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                if ((6U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                    vlTOPp->bbgen_req_o 
                                        = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->fll3_req_o = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                vlTOPp->fll3_req_o 
                                    = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->fll2_req_o = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        vlTOPp->fll2_req_o = (1U & 
                                              (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync)));
                    }
                }
            }
        }
    }
    vlTOPp->fll1_req_o = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                vlTOPp->fll1_req_o = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync)));
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_read_data = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0x40U & (IData)(vlTOPp->PADDR))) {
            if ((1U & (~ ((IData)(vlTOPp->PADDR) >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((1U & (~ ((IData)(vlTOPp->PADDR) 
                                      >> 2U)))) {
                            vlTOPp->apb_fll_if__DOT__s_read_data 
                                = ((0xfffffff0U & vlTOPp->apb_fll_if__DOT__s_read_data) 
                                   | (IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync));
                        }
                    } else {
                        vlTOPp->apb_fll_if__DOT__s_read_data 
                            = vlTOPp->bbgen_r_data_i;
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->apb_fll_if__DOT__s_read_data 
                                = ((0xfffffff8U & vlTOPp->apb_fll_if__DOT__s_read_data) 
                                   | (((IData)(vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync) 
                                       << 2U) | (((IData)(vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync))));
                        }
                    }
                } else {
                    vlTOPp->apb_fll_if__DOT__s_read_data 
                        = vlTOPp->fll3_r_data_i;
                }
            } else {
                vlTOPp->apb_fll_if__DOT__s_read_data 
                    = ((0x10U & (IData)(vlTOPp->PADDR))
                        ? vlTOPp->fll2_r_data_i : vlTOPp->fll1_r_data_i);
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_rvalid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if (vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync) {
                    vlTOPp->apb_fll_if__DOT__s_rvalid = 1U;
                }
            } else {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        if (vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync) {
                            vlTOPp->apb_fll_if__DOT__s_rvalid = 1U;
                        }
                    } else {
                        if ((4U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                if (vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync) {
                                    vlTOPp->apb_fll_if__DOT__s_rvalid = 1U;
                                }
                            } else {
                                if ((6U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                    if (vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync) {
                                        vlTOPp->apb_fll_if__DOT__s_rvalid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__state_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll2_rd_access) 
                 | (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_wr_access))) {
                vlTOPp->apb_fll_if__DOT__state_next = 3U;
            } else {
                if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll1_rd_access) 
                     | (IData)(vlTOPp->apb_fll_if__DOT__s_fll1_wr_access))) {
                    vlTOPp->apb_fll_if__DOT__state_next = 1U;
                } else {
                    if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll3_rd_access) 
                         | (IData)(vlTOPp->apb_fll_if__DOT__s_fll3_wr_access))) {
                        vlTOPp->apb_fll_if__DOT__state_next = 5U;
                    } else {
                        if (((IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_rd_access) 
                             | (IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_wr_access))) {
                            vlTOPp->apb_fll_if__DOT__state_next = 7U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->apb_fll_if__DOT__state_next = (
                                                   (1U 
                                                    == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync)
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                     ? 
                                                    ((IData)(vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync)
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                      ? 
                                                     ((IData)(vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync)
                                                       ? 4U
                                                       : 3U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                       ? 
                                                      ((IData)(vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync)
                                                        ? 4U
                                                        : 0U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                        ? 
                                                       ((IData)(vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync)
                                                         ? 6U
                                                         : 5U)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->apb_fll_if__DOT__state))
                                                         ? 
                                                        ((IData)(vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync)
                                                          ? 6U
                                                          : 0U)
                                                         : 
                                                        ((IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync)
                                                          ? 8U
                                                          : 7U)))))));
        }
    } else {
        if ((8U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            vlTOPp->apb_fll_if__DOT__state_next = ((IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync)
                                                    ? 8U
                                                    : 0U);
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll2_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll2_rd_access) 
                 | (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_wr_access))) {
                vlTOPp->apb_fll_if__DOT__s_fll2_valid = 1U;
            }
        } else {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        vlTOPp->apb_fll_if__DOT__s_fll2_valid 
                            = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync)));
                    }
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll1_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll2_rd_access) 
                          | (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_wr_access))))) {
                if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll1_rd_access) 
                     | (IData)(vlTOPp->apb_fll_if__DOT__s_fll1_wr_access))) {
                    vlTOPp->apb_fll_if__DOT__s_fll1_valid = 1U;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                vlTOPp->apb_fll_if__DOT__s_fll1_valid 
                    = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync)));
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_fll3_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll2_rd_access) 
                          | (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_wr_access))))) {
                if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll1_rd_access) 
                              | (IData)(vlTOPp->apb_fll_if__DOT__s_fll1_wr_access))))) {
                    if (((IData)(vlTOPp->apb_fll_if__DOT__s_fll3_rd_access) 
                         | (IData)(vlTOPp->apb_fll_if__DOT__s_fll3_wr_access))) {
                        vlTOPp->apb_fll_if__DOT__s_fll3_valid = 1U;
                    }
                }
            }
        } else {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                vlTOPp->apb_fll_if__DOT__s_fll3_valid 
                                    = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_fll_if__DOT__s_bbgen_valid = 0U;
    if (((((((((0U == (IData)(vlTOPp->apb_fll_if__DOT__state)) 
               | (1U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
              | (2U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
             | (3U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
            | (4U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
           | (5U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
          | (6U == (IData)(vlTOPp->apb_fll_if__DOT__state))) 
         | (7U == (IData)(vlTOPp->apb_fll_if__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->apb_fll_if__DOT__state))) {
            if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll2_rd_access) 
                          | (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_wr_access))))) {
                if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll1_rd_access) 
                              | (IData)(vlTOPp->apb_fll_if__DOT__s_fll1_wr_access))))) {
                    if ((1U & (~ ((IData)(vlTOPp->apb_fll_if__DOT__s_fll3_rd_access) 
                                  | (IData)(vlTOPp->apb_fll_if__DOT__s_fll3_wr_access))))) {
                        if (((IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_rd_access) 
                             | (IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_wr_access))) {
                            vlTOPp->apb_fll_if__DOT__s_bbgen_valid = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                if ((2U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                if ((6U != (IData)(vlTOPp->apb_fll_if__DOT__state))) {
                                    vlTOPp->apb_fll_if__DOT__s_bbgen_valid 
                                        = (1U & (~ (IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PRDATA = vlTOPp->apb_fll_if__DOT__s_read_data;
    vlTOPp->apb_fll_if__DOT__s_write_ready = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        vlTOPp->apb_fll_if__DOT__s_write_ready = (1U 
                                                  & ((0x40U 
                                                      & (IData)(vlTOPp->PADDR))
                                                      ? 
                                                     (((IData)(vlTOPp->PADDR) 
                                                       >> 5U) 
                                                      | (((IData)(vlTOPp->PADDR) 
                                                          >> 4U) 
                                                         | (((IData)(vlTOPp->PADDR) 
                                                             >> 3U) 
                                                            | (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))))
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlTOPp->PADDR))
                                                       ? 
                                                      (((IData)(vlTOPp->PADDR) 
                                                        >> 4U) 
                                                       | (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))
                                                       : (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))));
    }
    vlTOPp->apb_fll_if__DOT__s_read_ready = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->apb_fll_if__DOT__s_read_ready = (1U 
                                                 & ((0x40U 
                                                     & (IData)(vlTOPp->PADDR))
                                                     ? 
                                                    (((IData)(vlTOPp->PADDR) 
                                                      >> 5U) 
                                                     | (((IData)(vlTOPp->PADDR) 
                                                         >> 4U) 
                                                        | (((IData)(vlTOPp->PADDR) 
                                                            >> 3U) 
                                                           | (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->PADDR))
                                                      ? 
                                                     (((IData)(vlTOPp->PADDR) 
                                                       >> 4U) 
                                                      | (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))
                                                      : (IData)(vlTOPp->apb_fll_if__DOT__s_rvalid))));
    }
    vlTOPp->fll2_wrn_o = (1U & ((~ (IData)(vlTOPp->apb_fll_if__DOT__s_fll2_valid)) 
                                | (~ (IData)(vlTOPp->PWRITE))));
    if (vlTOPp->apb_fll_if__DOT__s_fll2_valid) {
        vlTOPp->fll2_add_o = (3U & ((IData)(vlTOPp->PADDR) 
                                    >> 2U));
        vlTOPp->fll2_data_o = vlTOPp->PWDATA;
    } else {
        vlTOPp->fll2_add_o = 0U;
        vlTOPp->fll2_data_o = 0U;
    }
    vlTOPp->fll1_wrn_o = (1U & ((~ (IData)(vlTOPp->apb_fll_if__DOT__s_fll1_valid)) 
                                | (~ (IData)(vlTOPp->PWRITE))));
    if (vlTOPp->apb_fll_if__DOT__s_fll1_valid) {
        vlTOPp->fll1_add_o = (3U & ((IData)(vlTOPp->PADDR) 
                                    >> 2U));
        vlTOPp->fll1_data_o = vlTOPp->PWDATA;
    } else {
        vlTOPp->fll1_add_o = 0U;
        vlTOPp->fll1_data_o = 0U;
    }
    vlTOPp->fll3_wrn_o = (1U & ((~ (IData)(vlTOPp->apb_fll_if__DOT__s_fll3_valid)) 
                                | (~ (IData)(vlTOPp->PWRITE))));
    if (vlTOPp->apb_fll_if__DOT__s_fll3_valid) {
        vlTOPp->fll3_add_o = (3U & ((IData)(vlTOPp->PADDR) 
                                    >> 2U));
        vlTOPp->fll3_data_o = vlTOPp->PWDATA;
    } else {
        vlTOPp->fll3_add_o = 0U;
        vlTOPp->fll3_data_o = 0U;
    }
    vlTOPp->bbgen_wrn_o = (1U & ((~ (IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_valid)) 
                                 | (~ (IData)(vlTOPp->PWRITE))));
    vlTOPp->bbgen_sel_o = ((IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_valid) 
                           & ((IData)(vlTOPp->PADDR) 
                              >> 2U));
    vlTOPp->bbgen_data_o = ((IData)(vlTOPp->apb_fll_if__DOT__s_bbgen_valid)
                             ? vlTOPp->PWDATA : 0U);
    vlTOPp->PREADY = ((IData)(vlTOPp->PWRITE) ? (IData)(vlTOPp->apb_fll_if__DOT__s_write_ready)
                       : (IData)(vlTOPp->apb_fll_if__DOT__s_read_ready));
}

void Vapb_fll_if::_eval_initial(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_eval_initial\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_fll_if::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::final\n"); );
    // Variables
    Vapb_fll_if__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_fll_if::_eval_settle(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_eval_settle\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vapb_fll_if::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_ctor_var_reset\n"); );
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
    fll1_req_o = VL_RAND_RESET_I(1);
    fll1_wrn_o = VL_RAND_RESET_I(1);
    fll1_add_o = VL_RAND_RESET_I(2);
    fll1_data_o = VL_RAND_RESET_I(32);
    fll1_ack_i = VL_RAND_RESET_I(1);
    fll1_r_data_i = VL_RAND_RESET_I(32);
    fll1_lock_i = VL_RAND_RESET_I(1);
    fll2_req_o = VL_RAND_RESET_I(1);
    fll2_wrn_o = VL_RAND_RESET_I(1);
    fll2_add_o = VL_RAND_RESET_I(2);
    fll2_data_o = VL_RAND_RESET_I(32);
    fll2_ack_i = VL_RAND_RESET_I(1);
    fll2_r_data_i = VL_RAND_RESET_I(32);
    fll2_lock_i = VL_RAND_RESET_I(1);
    fll3_req_o = VL_RAND_RESET_I(1);
    fll3_wrn_o = VL_RAND_RESET_I(1);
    fll3_add_o = VL_RAND_RESET_I(2);
    fll3_data_o = VL_RAND_RESET_I(32);
    fll3_ack_i = VL_RAND_RESET_I(1);
    fll3_r_data_i = VL_RAND_RESET_I(32);
    fll3_lock_i = VL_RAND_RESET_I(1);
    bbgen_req_o = VL_RAND_RESET_I(1);
    bbgen_wrn_o = VL_RAND_RESET_I(1);
    bbgen_sel_o = VL_RAND_RESET_I(1);
    bbgen_data_o = VL_RAND_RESET_I(32);
    bbgen_ack_i = VL_RAND_RESET_I(1);
    bbgen_r_data_i = VL_RAND_RESET_I(32);
    bbgen_lock_i = VL_RAND_RESET_I(4);
    apb_fll_if__DOT__s_fll1_rd_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll1_wr_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll2_rd_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll2_wr_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll3_rd_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll3_wr_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_bbgen_rd_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_bbgen_wr_access = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_read_ready = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_write_ready = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_read_data = VL_RAND_RESET_I(32);
    apb_fll_if__DOT__s_rvalid = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll1_ack_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll1_ack_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll2_ack_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll2_ack_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll3_ack_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll3_ack_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_bbgen_ack_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_bbgen_ack_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll1_lock_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll1_lock_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll2_lock_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll2_lock_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll3_lock_sync0 = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_fll3_lock_sync = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__r_bbgen_lock_sync0 = VL_RAND_RESET_I(4);
    apb_fll_if__DOT__r_bbgen_lock_sync = VL_RAND_RESET_I(4);
    apb_fll_if__DOT__s_fll1_valid = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll2_valid = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_fll3_valid = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__s_bbgen_valid = VL_RAND_RESET_I(1);
    apb_fll_if__DOT__state = VL_RAND_RESET_I(5);
    apb_fll_if__DOT__state_next = VL_RAND_RESET_I(5);
}
