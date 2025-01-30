// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_fll_if.h for the primary calling header

#include "Vapb_fll_if.h"
#include "Vapb_fll_if__Syms.h"

//==========

void Vapb_fll_if::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_fll_if::eval\n"); );
    Vapb_fll_if__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_fll_if.sv", 11, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_fll_if::_eval_initial_loop(Vapb_fll_if__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_fll_if.sv", 11, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_fll_if::_sequent__TOP__2(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_sequent__TOP__2\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync 
            = vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync0;
        vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync = 
            ((IData)(vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync0) 
             & 1U);
        vlTOPp->apb_fll_if__DOT__state = vlTOPp->apb_fll_if__DOT__state_next;
        vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync0 
            = vlTOPp->bbgen_lock_i;
        vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync0 
            = ((IData)(vlTOPp->fll3_lock_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync0 
            = ((IData)(vlTOPp->fll1_lock_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync0 
            = ((IData)(vlTOPp->fll2_lock_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync0 = 
            ((IData)(vlTOPp->fll2_ack_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync0 = 
            ((IData)(vlTOPp->fll1_ack_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync0 = 
            ((IData)(vlTOPp->fll3_ack_i) & 1U);
        vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync0 
            = ((IData)(vlTOPp->bbgen_ack_i) & 1U);
    } else {
        vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync = 0U;
        vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync = 0U;
        vlTOPp->apb_fll_if__DOT__state = 0U;
        vlTOPp->apb_fll_if__DOT__r_bbgen_lock_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll3_lock_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll1_lock_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll2_lock_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll2_ack_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll1_ack_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_fll3_ack_sync0 = 0U;
        vlTOPp->apb_fll_if__DOT__r_bbgen_ack_sync0 = 0U;
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
}

VL_INLINE_OPT void Vapb_fll_if::_combo__TOP__3(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_combo__TOP__3\n"); );
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
    vlTOPp->PREADY = ((IData)(vlTOPp->PWRITE) ? (IData)(vlTOPp->apb_fll_if__DOT__s_write_ready)
                       : (IData)(vlTOPp->apb_fll_if__DOT__s_read_ready));
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
}

void Vapb_fll_if::_eval(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_eval\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_fll_if::_change_request(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_change_request\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_fll_if::_change_request_1(Vapb_fll_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_change_request_1\n"); );
    Vapb_fll_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_fll_if::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_fll_if::_eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((fll1_ack_i & 0xfeU))) {
        Verilated::overWidthError("fll1_ack_i");}
    if (VL_UNLIKELY((fll1_lock_i & 0xfeU))) {
        Verilated::overWidthError("fll1_lock_i");}
    if (VL_UNLIKELY((fll2_ack_i & 0xfeU))) {
        Verilated::overWidthError("fll2_ack_i");}
    if (VL_UNLIKELY((fll2_lock_i & 0xfeU))) {
        Verilated::overWidthError("fll2_lock_i");}
    if (VL_UNLIKELY((fll3_ack_i & 0xfeU))) {
        Verilated::overWidthError("fll3_ack_i");}
    if (VL_UNLIKELY((fll3_lock_i & 0xfeU))) {
        Verilated::overWidthError("fll3_lock_i");}
    if (VL_UNLIKELY((bbgen_ack_i & 0xfeU))) {
        Verilated::overWidthError("bbgen_ack_i");}
    if (VL_UNLIKELY((bbgen_lock_i & 0xf0U))) {
        Verilated::overWidthError("bbgen_lock_i");}
}
#endif  // VL_DEBUG
