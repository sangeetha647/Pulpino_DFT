// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_core.h for the primary calling header

#include "Vriscv_core.h"
#include "Vriscv_core__Syms.h"

VL_INLINE_OPT void Vriscv_core::_sequent__TOP__9(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_sequent__TOP__9\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 2U;
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = 1U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    }
                                } else {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                }
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
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
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
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
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
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
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xeU)))) {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
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
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 3U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux 
                                        = ((0x1000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? 1U : 3U);
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
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
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xeU)))) {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                      ? 2U
                                                                      : 3U);
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
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 0U;
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
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((0xff000000U & (((8U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                             ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                >> 0x18U) : (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                             >> 0x18U)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((4U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                               ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                                  >> 0x10U)
                                               : (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                                  >> 8U)
                                                  : 
                                                 (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                   ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result
                                                   : vlTOPp->riscv_core__DOT__alu_operand_c_ex)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0xfU & ((((0x47U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                     | (0x46U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)))
                     ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater)
                     : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
                   ^ (- (IData)((((((0x10U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                                    | (0x11U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                                   | (0x16U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                                  | (0x17U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                                 | (0x47U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan = 0U;
    if ((0x40U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0xfU & ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                            ? ((~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater)) 
                                               & (~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan)))
                                            : ((~ ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater) 
                                                   | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))) 
                                               & (~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan)))));
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                    = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal) 
                                       & (~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0xfU & ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                            ? (~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                            : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                ? ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0xfU & ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? (~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                    : (~ ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                          | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((0xff000000U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                    >> 0x1cU)) << 0x18U)) 
           | ((0xff0000U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                     >> 0x13U)) << 0x10U)) 
              | ((0xff00U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0xaU)) << 8U)) 
                 | (0xffU & (IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                     >> 1U))))));
    vlTOPp->data_unaligned_o = vlTOPp->riscv_core__DOT__data_misaligned;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 1U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr = 1U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 1U;
                                }
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
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
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0x80000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                                                    }
                                                } else {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
        if (vlTOPp->riscv_core__DOT__mult_multicycle) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
                                        = ((0x4000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? 2U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 4U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 4U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
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
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                    }
                                }
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
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
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xeU)))) {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 4U;
                                                    }
                                                } else {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 4U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
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
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
                                    = ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                        ? 1U : 2U);
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
                                    = ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                        ? 1U : 2U);
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0xbU;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 8U;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 8U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 8U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 7U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 7U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
                                                    = 
                                                    ((0x8000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 7U
                                                       : 6U));
                                            }
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
                                            = ((0x20000000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (
                                                   (0x10000000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 7U
                                                     : 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 7U
                                                      : 6U))
                                                    : 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 6U
                                                      : 7U)
                                                     : 6U))
                                                : (
                                                   (0x10000000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 6U
                                                      : 7U)
                                                     : 6U)
                                                    : 6U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                            }
                                        } else {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xeU)))) {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                                    }
                                                } else {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 9U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 9U;
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
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2bU == (0x7fU 
                                               & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0xbU == (0x7fU 
                                              & vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x3fU & ((0x1fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
                    + (0x1fU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4) 
                                >> 5U))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_id_imm 
        = (0x1fU & ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux))
                     ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux))
                         ? 1U : 0U) : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux))
                                        ? (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                           >> 0x19U)
                                        : (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                           >> 0x14U))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_id_imm 
        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux)
            ? ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux)
                ? (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                            >> 0x19U)) : 0U) : 0U);
    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target 
                = (vlTOPp->riscv_core__DOT__pc_id + 
                   (0x3eU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                             >> 0xeU)));
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target 
            = (vlTOPp->riscv_core__DOT__pc_id + (0x1ffeU 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x13U)));
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel))
            ? (vlTOPp->riscv_core__DOT__pc_id + ((0xfff00000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                    >> 0x1fU)))) 
                                                     << 0x14U)) 
                                                 | ((0xff000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id) 
                                                    | ((0x800U 
                                                        & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U))))))
            : ((3U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel))
                ? (vlTOPp->riscv_core__DOT__pc_id + 
                   ((0xffffe000U & ((- (IData)((1U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1fU)))) 
                                    << 0xdU)) | ((0x1000U 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 7U)))))))
                : ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel))
                    ? (vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id 
                       + vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type)
                    : (vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id 
                       + vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id 
        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel)
            ? (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                        >> 7U)) : (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                            >> 0xfU)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    if (vlTOPp->riscv_core__DOT__regfile_we_wb) {
        if (((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                            >> 0x14U))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec)) 
             & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                >> 0x14U))))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
    }
    if (vlTOPp->riscv_core__DOT__regfile_alu_we_fw) {
        if (((((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
               == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                            >> 0x14U))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec)) 
             & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                >> 0x14U))))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
        = ((((IData)(vlTOPp->riscv_core__DOT__regfile_waddr_ex) 
             == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 0x14U))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regb_used_dec)) 
           & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 0x14U))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux))
            ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux))
                ? 0U : (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                 >> 0xfU))) : ((1U 
                                                & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_mux))
                                                ? (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))
                                                : (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 0x1bU))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
             == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 0xfU))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec)) 
           & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 0xfU))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
             == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 0xfU))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec)) 
           & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 0xfU))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((((IData)(vlTOPp->riscv_core__DOT__regfile_waddr_ex) 
             == (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 0xfU))) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__rega_used_dec)) 
           & (0U != (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 0xfU))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlTOPp->riscv_core__DOT__branch_in_ex) 
           & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
            ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlTOPp->riscv_core__DOT__alu_operand_b_ex);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + (((((0x1cU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                         | (0x1dU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                        | (0x1eU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                       | (0x1fU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)))
                       ? (0x7fffffffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                                         >> 1U)) : 0U))
                : vlTOPp->riscv_core__DOT__alu_operand_a_ex));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((0xffffffe0U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                          >> 0x18U)))) 
                                           << 5U)) 
                           | (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                       >> 0x14U))) : vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0x7fffffffU & ((((IData)(1U) 
                                            << (0x1fU 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                                           - (IData)(1U)) 
                                          >> 1U)) : 
                       ((3U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode))
                         ? ((0x3000000U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                           >> 3U)) 
                            | ((0x30000U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                            >> 7U)) 
                               | ((0x300U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                             >> 0xdU)) 
                                  | ((2U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                            >> 0x13U)) 
                                     | (1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0x19U))))))
                         : ((0x10000U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                         >> 4U)) | 
                            (1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                   >> 0x19U))))))) : 
           ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
             ? ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                 ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                     ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_vu_type
                     : ((0xffffffc0U & ((- (IData)(
                                                   (1U 
                                                    & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                       >> 0x18U)))) 
                                        << 6U)) | (
                                                   (0x3eU 
                                                    & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x19U)))))
                 : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                     ? (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                 >> 0x19U)) : (0x1fU 
                                               & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x14U))))
             : ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                 ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                     ? (((IData)(vlTOPp->riscv_core__DOT__is_compressed_id) 
                         & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))
                         ? 2U : 4U) : (0xfffff000U 
                                       & vlTOPp->riscv_core__DOT__instr_rdata_id))
                 : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                     ? ((0xfffff000U & ((- (IData)(
                                                   (1U 
                                                    & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                       >> 0x1fU)))) 
                                        << 0xcU)) | 
                        ((0xfe0U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                    >> 0x14U)) | (0x1fU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 7U))))
                     : vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S 
        = (((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP 
             == vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP) 
            | ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP 
                > vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP) 
               ^ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP))) 
           & ((0U != vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP) 
              | (0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_int 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr;
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_int 
            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlTOPp->riscv_core__DOT__regfile_we_wb) {
        if (((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec)) 
             & (0U != (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlTOPp->riscv_core__DOT__regfile_alu_we_fw) {
        if (((((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
               == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec)) 
             & (0U != (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
        if (vlTOPp->riscv_core__DOT__mult_multicycle) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
        = ((((IData)(vlTOPp->riscv_core__DOT__regfile_waddr_ex) 
             == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
            & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regc_used_dec)) 
           & (0U != (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    if (vlTOPp->riscv_core__DOT__regfile_we_wb) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
    }
    if (vlTOPp->riscv_core__DOT__regfile_alu_we_fw) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlTOPp->riscv_core__DOT__data_misaligned) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__jr_stall = 0U;
    if (((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id)) 
         & ((((IData)(vlTOPp->riscv_core__DOT__regfile_we_wb) 
              & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
             | ((IData)(vlTOPp->riscv_core__DOT__regfile_we_ex) 
                & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id))) 
            | ((IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw) 
               & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id))))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__jr_stall = 1U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((0xff000000U & (((8U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                             ? (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 0x18U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                             >> 0x18U)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((4U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                               ? (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                  >> 0x10U)
                                               : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? 
                                                 (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                  >> 8U)
                                                  : 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                   ? vlTOPp->riscv_core__DOT__alu_operand_a_ex
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b)))));
}

VL_INLINE_OPT void Vriscv_core::_combo__TOP__10(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_combo__TOP__10\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp77;
    CData/*31:0*/ __Vtemp83;
    // Body
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_ack = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_ack = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_q;
    if (vlTOPp->data_rvalid_i) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
            = (vlTOPp->data_rdata_i & ((0xff000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q) 
                                                          >> 3U)))) 
                                           << 0x18U)) 
                                       | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q)))))))));
        if (((0U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q)) 
             | (1U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q)))) {
            vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                = ((0x1fU >= ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q) 
                              << 3U)) ? (vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                                         >> ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q) 
                                             << 3U))
                    : 0U);
        } else {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q))) {
                vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                    = (((0x1fU >= (((IData)(4U) - (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q)) 
                                   << 3U)) ? (vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                                              << (((IData)(4U) 
                                                   - (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q)) 
                                                  << 3U))
                         : 0U) | vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_q);
            }
        }
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__ext_bit 
            = ((0U != (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q)) 
               & ((2U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q)) 
                  | ((2U == (2U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q)))
                      ? (vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                         >> 7U) : ((1U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q)) 
                                   & (vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                                      >> 0xfU)))));
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q))) {
            vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                = ((0xffffff00U & ((- (IData)((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__ext_bit))) 
                                   << 8U)) | (0xffU 
                                              & vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d));
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q))) {
                vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d 
                    = ((0xffff0000U & ((- (IData)((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__ext_bit))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d));
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex)) 
             & (IData)(vlTOPp->riscv_core__DOT__mult_en_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
        } else {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
                } else {
                    if ((4U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        if (vlTOPp->riscv_core__DOT__ex_ready) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a) 
           | (0x10000U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                           << 0x10U) & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                        << 1U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b) 
           | (0x10000U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                           << 0xfU) & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                       << 1U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x3ffffffffULL & ((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                ? (((QData)((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_core__DOT__mult_operand_c_ex)))
                                : (QData)((IData)(vlTOPp->riscv_core__DOT__mult_operand_c_ex))) 
                              + VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b)))) 
                             + (QData)((IData)(((3U 
                                                 == (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))
                                                 ? 
                                                (0x7fffffffU 
                                                 & (((IData)(1U) 
                                                     << (IData)(vlTOPp->riscv_core__DOT__mult_imm_ex)) 
                                                    >> 1U))
                                                 : 0U)))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
            ? ((0x400U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                ? ((0x200U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                    ? ((0x100U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                        ? ((0x80U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                            ? 0U : ((0x40U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                               ? ((8U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlTOPp->cluster_id_i) 
                                                       << 5U) 
                                                      | (IData)(vlTOPp->core_id_i))))
                                                    : 0U))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                  ? 0U : ((0x80U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                           ? 0U : (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                          ? 0U
                                                          : 3U))))
                                                      : 0U))))))
                : ((0x200U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                    ? ((0x100U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                        ? ((0x80U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                            ? 0U : ((0x40U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                               ? ((8U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU]))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U]))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U]))))
                                               : ((8U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU]))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                         ? ((0x200U 
                                             & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                             ? ((0x100U 
                                                 & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : (IData)(
                                                                   (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                                                    >> 0x20U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? (IData)(
                                                                   (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q 
                                                                    >> 0x20U))
                                                         : (IData)(
                                                                   (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q 
                                                                    >> 0x20U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q)
                                                         : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q)))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_q
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q))))
                                                     : 0U)
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : ((0x100U 
                                                 & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                 ? 0U
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_q))))))))))
                                         : ((0x200U 
                                             & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                             ? ((0x100U 
                                                 & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_q) 
                                                             << 0x1aU)) 
                                                         | (0x1fU 
                                                            & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_q))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU]))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U])))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U]))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U]))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU]))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U])))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U])
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U]
                                                         : 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U]))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 
                                                        (1U 
                                                         | (0xffffff00U 
                                                            & vlTOPp->boot_addr_i))
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0x40801104U
                                                         : 
                                                        ((0x20000U 
                                                          & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                             << 0x11U)) 
                                                         | ((0x1800U 
                                                             & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                << 0xaU)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                           >> 6U)))))))))))))))
                                                 : 0U)
                                             : ((0x100U 
                                                 & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                 ? 0U
                                                 : 
                                                ((0x80U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlTOPp->cluster_id_i) 
                                                          << 5U) 
                                                         | (IData)(vlTOPp->core_id_i))))
                                                       : 0U))
                                                     : 0U))))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (1U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                     >> 1U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                               >> 2U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (2U & ((0x3ffffffeU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                    >> 2U)) | (0x1ffffffeU 
                                               & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                  >> 3U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (4U & ((0x1ffffffcU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                    >> 3U)) | (0xffffffcU 
                                               & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                  >> 4U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (8U & ((0xffffff8U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                   >> 4U)) | (0x7fffff8U 
                                              & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                 >> 5U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x10U & ((0x7fffff0U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 5U)) | (0x3fffff0U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                    >> 6U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x20U & ((0x3ffffe0U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 6U)) | (0x1ffffe0U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                    >> 7U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x40U & ((0x1ffffc0U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 7U)) | (0xffffc0U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                    >> 8U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x80U & ((0xffff80U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                     >> 8U)) | (0x7fff80U 
                                                & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                   >> 9U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x100U & ((0x7fff00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 9U)) | (0x3fff00U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                    >> 0xaU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x200U & ((0x3ffe00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 0xaU)) | (0x1ffe00U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                      >> 0xbU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x400U & ((0x1ffc00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 0xbU)) | (0xffc00U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                      >> 0xcU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x800U & ((0xff800U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                     >> 0xcU)) | (0x7f800U 
                                                  & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                     >> 0xdU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x1000U & ((0x7f000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 0xdU)) | (0x3f000U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                      >> 0xeU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x2000U & ((0x3e000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 0xeU)) | (0x1e000U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                      >> 0xfU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x4000U & ((0x1c000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                      >> 0xfU)) | (0xc000U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
                                                      >> 0x10U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                        ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                            << 0x1bU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                         << 0x16U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                          ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                              << 0x11U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                              << 0xcU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                               << 7U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                               << 2U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                            ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                << 0x1dU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                << 0x18U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                              ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                  << 0x13U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                  << 0xeU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                   << 9U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                   << 4U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp77 = (0x1fU & ((0x2000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                               << 0x1fU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                            >> 1U))
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                               << 0x1aU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                            >> 6U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
           | (0xc0000000U & (((0x2000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                   << 0x1fU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                                >> 1U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                   << 0x1aU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                                >> 6U))) 
                             << 0x1eU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0x3fffffffU & (__Vtemp77 >> 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                         ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                             << 0x15U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                             << 0x10U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                               << 0xbU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                               << 6U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                            ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                << 1U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                << 0x1cU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                             ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                 << 0x17U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                 << 0x12U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                              ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                  << 0xdU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                  << 8U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp83 = (0x1fU & ((0x2000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                               << 3U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                         >> 0x1dU))
                           : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                              >> 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U]) 
           | (0xf0000000U & (((0x2000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                   << 3U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
                                             >> 0x1dU))
                               : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                  >> 2U)) << 0x1cU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0xfffffffU & (__Vtemp83 >> 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                         ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                            >> 7U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                      >> 0xcU)) << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                          ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                             >> 0x11U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
                                          >> 0x16U)) 
                        << 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x3fU & (((1U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                      ? ((0x1fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                         - (IData)(1U)) : 0x1fU) + 
                    ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)
                      ? 0U : 1U)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_dec)))) {
                            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_dec)))) {
                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_dec) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q)))) {
                            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__is_fetch_failed_id)))) {
                                if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q)))) {
                                    if (((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                               | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)))) {
                                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec) {
                                                    vlTOPp->riscv_core__DOT__csr_restore_mret_id = 1U;
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
        }
    }
    vlTOPp->riscv_core__DOT__exc_pc_mux_id = 1U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__exc_pc_mux_id = 2U;
                } else {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                            vlTOPp->riscv_core__DOT__exc_pc_mux_id = 0U;
                        } else {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__exc_pc_mux_id = 0U;
                            } else {
                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                    vlTOPp->riscv_core__DOT__exc_pc_mux_id = 0U;
                                } else {
                                    if (((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                               | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                                            vlTOPp->riscv_core__DOT__exc_pc_mux_id = 0U;
                                        } else {
                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                                vlTOPp->riscv_core__DOT__exc_pc_mux_id = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__exc_pc_mux_id = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                            vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                        } else {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                            } else {
                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                    vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                                } else {
                                    if (((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                               | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                                            vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                                        } else {
                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                                vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__trap_addr_mux = 0U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                            vlTOPp->riscv_core__DOT__exc_cause 
                                = ((IData)(vlTOPp->riscv_core__DOT__data_we_ex)
                                    ? 5U : 7U);
                        } else {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__exc_cause = 1U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q)))) {
                                    if (((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                               | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn)))) {
                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                                vlTOPp->riscv_core__DOT__exc_cause = 0xbU;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__exc_cause 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x3fU & ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                         ? ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                             ? ((1U 
                                                 & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(0x1fU) 
                                                    - 
                                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]))
                                                 : 0x20U)
                                             : ((1U 
                                                 & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                                                 ? 
                                                (0x1fU 
                                                 & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U])
                                                 : 0x20U))
                                         : ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                             ? ((1U 
                                                 & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                                                 ? 
                                                ((0x1fU 
                                                  & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))
                                                 : 
                                                ((0x80000000U 
                                                  & vlTOPp->riscv_core__DOT__alu_operand_a_ex)
                                                  ? 0x1fU
                                                  : 0U))
                                             : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__csr_save_if = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__csr_save_if = 1U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__csr_save_if = 1U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__csr_save_if = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__perf_pipeline_stall = 0U;
    if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        vlTOPp->riscv_core__DOT__perf_pipeline_stall 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        vlTOPp->riscv_core__DOT__perf_pipeline_stall 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__perf_pipeline_stall 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__is_fetch_failed_id)))) {
                                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__instr_valid_id) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q))))) {
                                    vlTOPp->riscv_core__DOT__perf_pipeline_stall 
                                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__is_decoding = ((~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                >> 4U)) 
                                            & ((~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                   >> 3U)) 
                                               & (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                   >> 2U) 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                       >> 1U)) 
                                                     & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                        & ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex)) 
                                                           & ((~ (IData)(vlTOPp->riscv_core__DOT__is_fetch_failed_id)) 
                                                              & ((IData)(vlTOPp->riscv_core__DOT__instr_valid_id) 
                                                                 | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q)))))))));
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->riscv_core__DOT__ex_ready) 
                             << 5U) | ((0x10U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP)))) 
                                                 << 4U)) 
                                       | (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                            << 2U) 
                                           | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S 
        = vlTOPp->__Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_core__DOT__lsu_rdata = ((IData)(vlTOPp->data_rvalid_i)
                                           ? vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d
                                           : vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_q);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                           (((QData)((IData)(
                                                             ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                              & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                                                  ? (IData)(
                                                                            (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                             >> 0x21U))
                                                                  : (IData)(
                                                                            (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                             >> 0x1fU)))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                 & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                                                     ? (IData)(
                                                                               (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x20U))
                                                                     : (IData)(
                                                                               (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x1fU)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                           ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                             ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                             : (IData)(vlTOPp->riscv_core__DOT__mult_imm_ex))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->riscv_core__DOT__csr_op_ex))
            ? ((1U & (IData)(vlTOPp->riscv_core__DOT__csr_op_ex))
                ? ((~ vlTOPp->riscv_core__DOT__alu_operand_a_ex) 
                   & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                   | vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->riscv_core__DOT__alu_operand_a_ex);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((0xffffffc0U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt) 
           | (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
                        ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                        : vlTOPp->riscv_core__DOT__alu_operand_b_ex)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc = 0U;
    if (vlTOPp->riscv_core__DOT__trap_addr_mux) {
        if (vlTOPp->riscv_core__DOT__trap_addr_mux) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__trap_base_addr = 0U;
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__trap_base_addr 
            = (0xffffffU & (vlTOPp->boot_addr_i >> 8U));
    }
    if ((0U == (IData)(vlTOPp->riscv_core__DOT__exc_pc_mux_id))) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc 
            = (vlTOPp->riscv_core__DOT__if_stage_i__DOT__trap_base_addr 
               << 8U);
    } else {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__exc_pc_mux_id))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc 
                = ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__trap_base_addr 
                    << 8U) | (0x7cU & ((IData)(vlTOPp->riscv_core__DOT__exc_cause) 
                                       << 2U)));
        } else {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__exc_pc_mux_id))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc = 0x1a110800U;
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we = 0U;
    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__is_decoding)))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((((IData)(vlTOPp->riscv_core__DOT__data_req_ex) 
           & (IData)(vlTOPp->riscv_core__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlTOPp->riscv_core__DOT__lsu_ready_wb)) 
             & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb))) 
         & ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlTOPp->riscv_core__DOT__is_decoding) 
                & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we)) 
               & ((IData)(vlTOPp->riscv_core__DOT__regfile_waddr_ex) 
                  == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id)))))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id)) 
         & ((((IData)(vlTOPp->riscv_core__DOT__regfile_we_wb) 
              & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
             | ((IData)(vlTOPp->riscv_core__DOT__regfile_we_ex) 
                & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id))) 
            | ((IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw) 
               & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id))))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__load_stall = 0U;
    if (((((IData)(vlTOPp->riscv_core__DOT__data_req_ex) 
           & (IData)(vlTOPp->riscv_core__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlTOPp->riscv_core__DOT__lsu_ready_wb)) 
             & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb))) 
         & ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlTOPp->riscv_core__DOT__is_decoding) 
                & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we)) 
               & ((IData)(vlTOPp->riscv_core__DOT__regfile_waddr_ex) 
                  == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id)))))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__load_stall = 1U;
    }
    if (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN 
            = (0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                     >> 1U));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SN 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DN = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SN 
            = (1U & ((((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                       | ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                          >> 1U)) & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                     & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                         >> 0x1fU) ^ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed))));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D 
            = vlTOPp->riscv_core__DOT__alu_operand_b_ex;
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN 
            = (0x3fU & ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))
                         ? ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP) 
                            - (IData)(1U)) : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP)));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SN 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DN 
            = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S)
                ? (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S) 
                    << 0x1fU) | (0x7fffffffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                                                >> 1U)))
                : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP);
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SN 
            = (1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP;
    }
    vlTOPp->riscv_core__DOT__ex_ready = (((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                            & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready)) 
                                           & (IData)(vlTOPp->riscv_core__DOT__lsu_ready_ex)) 
                                          & (IData)(vlTOPp->riscv_core__DOT__lsu_ready_wb)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__branch_in_ex));
    vlTOPp->riscv_core__DOT__ex_valid = (((((IData)(vlTOPp->riscv_core__DOT__alu_en_ex) 
                                            | (IData)(vlTOPp->riscv_core__DOT__mult_en_ex)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__csr_access_ex)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__data_req_ex)) 
                                         & ((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                              & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready)) 
                                             & (IData)(vlTOPp->riscv_core__DOT__lsu_ready_ex)) 
                                            & (IData)(vlTOPp->riscv_core__DOT__lsu_ready_wb)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex)))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                    = (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))) {
                if (vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) {
                    if (vlTOPp->riscv_core__DOT__mult_clpx_img_ex) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                            = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result) 
                               | ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                  << 0x10U));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                            = ((0xffff0000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result) 
                               | (0xffffU & vlTOPp->riscv_core__DOT__mult_dot_op_c_ex));
                    } else {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                            = ((0xffff0000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result) 
                               | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                            = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result) 
                               | (0xffff0000U & vlTOPp->riscv_core__DOT__mult_dot_op_c_ex));
                    }
                } else {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                        = (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result);
                }
            } else {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
                    = (((((0x3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U]) 
                          + (0x3ffffU & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                          << 0xeU) 
                                         | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U] 
                                            >> 0x12U)))) 
                         + (0x3ffffU & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[2U] 
                                         << 0x1cU) 
                                        | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                           >> 4U)))) 
                        + (0x3ffffU & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[2U] 
                                        << 0xaU) | 
                                       (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                        >> 0x16U)))) 
                       + vlTOPp->riscv_core__DOT__mult_dot_op_c_ex);
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))
                ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : ((vlTOPp->riscv_core__DOT__mult_operand_c_ex 
                    + (vlTOPp->riscv_core__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex)))))) 
                   + VL_MULS_III(32,32,32, (vlTOPp->riscv_core__DOT__mult_operand_a_ex 
                                            ^ (- (IData)(
                                                         (1U 
                                                          == (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex))))), vlTOPp->riscv_core__DOT__mult_operand_b_ex)));
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x7b3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x400U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if ((0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_n 
                                            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x7b3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_n 
                                        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_q;
    if (((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
            | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
           | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
          | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
         | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((6U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x300U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_n 
                                        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x320U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_d 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x306U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q);
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[0U] 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x320U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U]);
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[2U] 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x322U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U]);
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[3U] 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x323U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[4U] 
        = (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x324U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))
            ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U]);
    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xffff0000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (0xffffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                             >> 0x10U)));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (0xffff0000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                 << 0x10U)));
    } else {
        if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
                = ((0xffffff00U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
                   | (0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                               >> 0x18U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
                = ((0xffff00ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
                   | (0xff00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                 >> 8U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
                = ((0xff00ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
                   | (0xff0000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   << 8U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
                = ((0xffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
                   | (0xff000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                     << 0x18U)));
        } else {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
                = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_we_id 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_in_id 
        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)
            ? 0U : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id));
    vlTOPp->riscv_core__DOT__id_ready = (((((~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)) 
                                            & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jr_stall))) 
                                           & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__load_stall))) 
                                          & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_access) 
                                                & ((IData)(vlTOPp->riscv_core__DOT__apu_en_ex) 
                                                   & ((IData)(vlTOPp->riscv_core__DOT__apu_lat_ex) 
                                                      >> 1U))))) 
                                         & (IData)(vlTOPp->riscv_core__DOT__ex_ready));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DN 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S)
            ? (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                      & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                          >> 0x1fU) ^ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))
                ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                   + vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D)
                : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                   - vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D))
            : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP);
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->data_gnt_i) 
                             << 5U) | (((IData)(vlTOPp->riscv_core__DOT__data_req_ex) 
                                        << 4U) | (((IData)(vlTOPp->data_rvalid_i) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->riscv_core__DOT__ex_valid) 
                                                      << 2U) 
                                                     | (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q)))));
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_d 
        = vlTOPp->__Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d
        [vlTOPp->__Vtableidx4];
    vlTOPp->riscv_core__DOT__data_req_pmp = vlTOPp->__Vtable4_riscv_core__DOT__data_req_pmp
        [vlTOPp->__Vtableidx4];
    vlTOPp->riscv_core__DOT__lsu_ready_ex = vlTOPp->__Vtable4_riscv_core__DOT__lsu_ready_ex
        [vlTOPp->__Vtableidx4];
    vlTOPp->riscv_core__DOT__lsu_ready_wb = vlTOPp->__Vtable4_riscv_core__DOT__lsu_ready_wb
        [vlTOPp->__Vtableidx4];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlTOPp->riscv_core__DOT__alu_is_clpx_ex)
                ? (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex) 
                    << 0x10U) | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex))
                : (((IData)(vlTOPp->riscv_core__DOT__bmask_b_ex) 
                    << 0x18U) | (((IData)(vlTOPp->riscv_core__DOT__bmask_b_ex) 
                                  << 0x10U) | (((IData)(vlTOPp->riscv_core__DOT__bmask_b_ex) 
                                                << 8U) 
                                               | (IData)(vlTOPp->riscv_core__DOT__bmask_b_ex)))))
            : ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_kill = 0U;
    vlTOPp->riscv_core__DOT__csr_save_id = 0U;
    vlTOPp->riscv_core__DOT__csr_save_cause = 0U;
    vlTOPp->riscv_core__DOT__csr_cause = 0U;
    vlTOPp->riscv_core__DOT__pc_mux_id = 0U;
    vlTOPp->riscv_core__DOT__pc_set = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlTOPp->riscv_core__DOT__halt_if = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id)) 
           | (1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_in_id));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int 
        = (1U & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0xfU));
    vlTOPp->riscv_core__DOT__debug_csr_save = 0U;
    vlTOPp->riscv_core__DOT__debug_cause = 1U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_n = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_mask = 0U;
    if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
            } else {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex) {
                            vlTOPp->riscv_core__DOT__pc_mux_id = 3U;
                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                        }
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x10U;
                    } else {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                            = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 0xeU : ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id)
                                           ? 0xeU : 
                                          ((4U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q)
                                            ? 0xfU : 0xeU)));
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__pc_set = 1U;
                        vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                        vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                        vlTOPp->riscv_core__DOT__debug_csr_save = 1U;
                        if ((4U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q)) {
                            vlTOPp->riscv_core__DOT__debug_cause = 4U;
                        }
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        if (vlTOPp->debug_req_i) {
                            vlTOPp->riscv_core__DOT__debug_cause = 3U;
                        }
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                            vlTOPp->riscv_core__DOT__debug_cause = 1U;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__pc_set = 1U;
                        vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                        if ((((IData)(vlTOPp->debug_req_i) 
                              & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                             | (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                 & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                            vlTOPp->riscv_core__DOT__csr_save_id = 1U;
                            vlTOPp->riscv_core__DOT__debug_csr_save = 1U;
                            if (vlTOPp->debug_req_i) {
                                vlTOPp->riscv_core__DOT__debug_cause = 3U;
                            }
                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                                vlTOPp->riscv_core__DOT__debug_cause = 1U;
                            }
                        }
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_dec) {
                            vlTOPp->riscv_core__DOT__pc_mux_id = 5U;
                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_dec) {
                                vlTOPp->riscv_core__DOT__pc_mux_id = 6U;
                                vlTOPp->riscv_core__DOT__pc_set = 1U;
                            } else {
                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_dec) {
                                    vlTOPp->riscv_core__DOT__pc_mux_id = 7U;
                                    vlTOPp->riscv_core__DOT__pc_set = 1U;
                                }
                            }
                        }
                        if ((1U & ((vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xfU;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                            vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                                vlTOPp->riscv_core__DOT__pc_set = 1U;
                            } else {
                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                    vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                                    vlTOPp->riscv_core__DOT__pc_set = 1U;
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                                    if ((1U & ((vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                                >> 2U) 
                                               & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xfU;
                                    }
                                } else {
                                    if (((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                               | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                                            vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                                            if ((1U 
                                                 & ((vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 2U) 
                                                    & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xfU;
                                            }
                                        } else {
                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                                vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                                                vlTOPp->riscv_core__DOT__pc_set = 1U;
                                                if (
                                                    (1U 
                                                     & ((vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                                         >> 2U) 
                                                        & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xfU;
                                                }
                                            } else {
                                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                                                } else {
                                                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                                                    } else {
                                                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)))) {
                                                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                                                                } else {
                                                                    vlTOPp->riscv_core__DOT__pc_mux_id = 1U;
                                                                    vlTOPp->riscv_core__DOT__pc_set = 1U;
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
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        if (vlTOPp->riscv_core__DOT__ex_valid) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                            = ((IData)(vlTOPp->riscv_core__DOT__id_ready)
                                ? (((IData)(vlTOPp->debug_req_i) 
                                    & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                    ? 0x10U : 9U) : 0xaU);
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        if (((IData)(vlTOPp->irq_i) 
                             & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_kill = 1U;
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        if (((IData)(vlTOPp->irq_i) 
                             & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_kill = 1U;
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_n = 1U;
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__pc_set = 1U;
                        vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                        vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                        vlTOPp->riscv_core__DOT__csr_cause 
                            = (0x20U | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q));
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    } else {
                        vlTOPp->riscv_core__DOT__pc_set = 1U;
                        vlTOPp->riscv_core__DOT__pc_mux_id = 4U;
                        vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                        vlTOPp->riscv_core__DOT__csr_cause 
                            = (0x20U | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q));
                        vlTOPp->riscv_core__DOT__csr_save_id = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex) {
                            vlTOPp->riscv_core__DOT__pc_mux_id = 3U;
                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->riscv_core__DOT__is_fetch_failed_id) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                                vlTOPp->riscv_core__DOT__csr_cause = 1U;
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                            } else {
                                if (((IData)(vlTOPp->riscv_core__DOT__instr_valid_id) 
                                     | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q))) {
                                    if (((((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs)) 
                                           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int)) 
                                          & (~ (IData)(vlTOPp->debug_req_i))) 
                                         & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_mask = 1U;
                                    } else {
                                        if (((IData)(vlTOPp->debug_req_i) 
                                             & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            vlTOPp->riscv_core__DOT__halt_if = 1U;
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x10U;
                                        } else {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_kill 
                                                = (1U 
                                                   == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs));
                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec) {
                                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                vlTOPp->riscv_core__DOT__csr_save_id = 1U;
                                                vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                                                vlTOPp->riscv_core__DOT__csr_cause = 2U;
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                                            } else {
                                                if (
                                                    ((((((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                                         | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                                        | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                                       | (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                                      | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status)) 
                                                     | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id))) {
                                                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                                        vlTOPp->riscv_core__DOT__pc_mux_id = 2U;
                                                        if (
                                                            (1U 
                                                             & ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jr_stall)) 
                                                                & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                                            vlTOPp->riscv_core__DOT__pc_set = 1U;
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                                        }
                                                    } else {
                                                        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn) {
                                                            vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x10U;
                                                            } else {
                                                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x10U;
                                                                } else {
                                                                    vlTOPp->riscv_core__DOT__csr_save_id = 1U;
                                                                    vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                                    vlTOPp->riscv_core__DOT__csr_cause = 3U;
                                                                }
                                                            }
                                                        } else {
                                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec) {
                                                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                            } else {
                                                                if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                                                    vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                                    vlTOPp->riscv_core__DOT__csr_save_id = 1U;
                                                                    vlTOPp->riscv_core__DOT__csr_save_cause = 1U;
                                                                    vlTOPp->riscv_core__DOT__csr_cause = 0xbU;
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                                } else {
                                                                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                                                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                                    } else {
                                                                        if (
                                                                            (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                                              | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                                             | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                                                            vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xbU;
                                                                        } else {
                                                                            if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status) {
                                                                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                                                                = 
                                                                                ((IData)(vlTOPp->riscv_core__DOT__id_ready)
                                                                                 ? 0xbU
                                                                                 : 5U);
                                                                            } else {
                                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                                                                = 
                                                                                ((IData)(vlTOPp->riscv_core__DOT__id_ready)
                                                                                 ? 0xaU
                                                                                 : 5U);
                                                                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & ((vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 2U) 
                                                    & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                                                vlTOPp->riscv_core__DOT__halt_if = 1U;
                                                if (vlTOPp->riscv_core__DOT__id_ready) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                                        = 
                                                        (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                          | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec))
                                                          ? 0xbU
                                                          : 
                                                         (((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn))
                                                           ? 0xbU
                                                           : 
                                                          (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                            | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec))
                                                            ? 0xbU
                                                            : 
                                                           ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                             ? 0x11U
                                                             : 0x10U))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->riscv_core__DOT__id_ready) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                        }
                        if (((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs)) 
                             & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                            vlTOPp->riscv_core__DOT__halt_if = 1U;
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        }
                        if (((IData)(vlTOPp->debug_req_i) 
                             & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xfU;
                            vlTOPp->riscv_core__DOT__halt_if = 1U;
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                    } else {
                        vlTOPp->riscv_core__DOT__halt_if = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        if ((1U & ((IData)(vlTOPp->irq_i) 
                                   | (((IData)(vlTOPp->debug_req_i) 
                                       | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                      | (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
                                         >> 2U))))) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlTOPp->riscv_core__DOT__pc_mux_id = 0U;
                        vlTOPp->riscv_core__DOT__pc_set = 1U;
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                    } else {
                        if (vlTOPp->fetch_enable_i) {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q;
    if (((IData)(vlTOPp->riscv_core__DOT__data_req_pmp) 
         & (IData)(vlTOPp->data_gnt_i))) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_d 
            = vlTOPp->data_be_o;
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q;
    if (((IData)(vlTOPp->riscv_core__DOT__data_req_pmp) 
         & (IData)(vlTOPp->data_gnt_i))) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_d 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt;
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q;
    if (((IData)(vlTOPp->riscv_core__DOT__data_req_pmp) 
         & (IData)(vlTOPp->data_gnt_i))) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_d 
            = vlTOPp->riscv_core__DOT__data_sign_ext_ex;
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q;
    if (((IData)(vlTOPp->riscv_core__DOT__data_req_pmp) 
         & (IData)(vlTOPp->data_gnt_i))) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_d 
            = vlTOPp->riscv_core__DOT__data_type_ex;
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_d 
        = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q;
    if ((((IData)(vlTOPp->riscv_core__DOT__data_req_pmp) 
          & (IData)(vlTOPp->data_gnt_i)) & (IData)(vlTOPp->riscv_core__DOT__data_misaligned))) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_d = 1U;
    } else {
        if (vlTOPp->data_rvalid_i) {
            vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_d 
                = ((1U == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q))
                    ? 2U : 0U);
        }
    }
    vlTOPp->data_req_o = vlTOPp->riscv_core__DOT__data_req_pmp;
    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0xffff0000U & (VL_SHIFTRS_III(16,16,4, 
                                                ((0x8000U 
                                                  & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 0xfU) 
                                                     & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x10U))) 
                                                 | (0x7fffU 
                                                    & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (0xfU 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x10U)));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0xffffU & VL_SHIFTRS_III(16,16,4, 
                                           ((0xffff8000U 
                                             & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                 << 0xfU) 
                                                & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                            | (0x7fffU 
                                               & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                           (0xfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                = ((0xffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
                   | (0xff000000U & (VL_SHIFTRS_III(8,8,3, 
                                                    ((0x80U 
                                                      & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                          << 7U) 
                                                         & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                            >> 0x18U))) 
                                                     | (0x7fU 
                                                        & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                           >> 0x18U))), 
                                                    (7U 
                                                     & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                        >> 0x18U))) 
                                     << 0x18U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                = ((0xff00ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
                   | (0xff0000U & (VL_SHIFTRS_III(8,8,3, 
                                                  ((0xff80U 
                                                    & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                        << 7U) 
                                                       & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x10U))) 
                                                   | (0x7fU 
                                                      & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                         >> 0x10U))), 
                                                  (7U 
                                                   & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                      >> 0x10U))) 
                                   << 0x10U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                = ((0xffff00ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
                   | (0xff00U & (VL_SHIFTRS_III(8,8,3, 
                                                ((0xffff80U 
                                                  & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 7U) 
                                                     & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 8U))) 
                                                 | (0x7fU 
                                                    & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                = ((0xffffff00U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
                   | (0xffU & VL_SHIFTRS_III(8,8,3, 
                                             ((0xffffff80U 
                                               & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                   << 7U) 
                                                  & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                              | (0x7fU 
                                                 & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                             (7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
        } else {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                = ((IData)(((0x26U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                             ? (((QData)((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                             : (((QData)((IData)((- (IData)(
                                                            ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                             & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                >> 0x1fU)))))) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))))) 
                   >> (0x1fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int));
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked 
        = ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)
              ? 0U : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we)) 
            & (~ (- (IData)((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_mask))))) 
           & (- (IData)((IData)(vlTOPp->riscv_core__DOT__id_ready))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_q;
    if (((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
            | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
           | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
          | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
         | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((6U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x300U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x340U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if ((0x341U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_n 
                                            = ((0x20U 
                                                & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x1aU)) 
                                               | (0x1fU 
                                                  & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__debug_csr_save)))) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_n 
                = vlTOPp->riscv_core__DOT__csr_cause;
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q;
    if (((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
            | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
           | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
          | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
         | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((6U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                                    = ((0x40U & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                 << 6U)) 
                                       | ((0x20U & 
                                           (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            << 2U)) 
                                          | ((0x10U 
                                              & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                             | ((8U 
                                                 & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 4U)) 
                                                | ((6U 
                                                    & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                         >> 0x11U)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__debug_csr_save)))) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n));
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        if (vlTOPp->riscv_core__DOT__csr_restore_mret_id) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x5fU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (0x20U & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                               << 2U)));
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (8U | (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n));
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n));
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0x40000000U | (0xfffffffU 
                                          & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n));
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (3U | vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xfffffff7U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xffffffefU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xfffffbffU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
                    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xfffffdffU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__csr_save_cause) {
        if (vlTOPp->riscv_core__DOT__debug_csr_save) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n);
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(vlTOPp->riscv_core__DOT__debug_cause) 
                      << 6U));
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q;
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_n 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q;
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlTOPp->riscv_core__DOT__pc_id;
    if (((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
            | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
           | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
          | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
         | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((6U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x300U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x340U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if ((0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_n 
                                            = (0xfffffffeU 
                                               & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_n 
                            = (0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__csr_save_cause) {
        if (vlTOPp->riscv_core__DOT__csr_save_if) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr;
        } else {
            if (vlTOPp->riscv_core__DOT__csr_save_id) {
                vlTOPp->riscv_core__DOT__cs_registers_i__DOT__exception_pc 
                    = vlTOPp->riscv_core__DOT__pc_id;
            }
        }
        if (vlTOPp->riscv_core__DOT__debug_csr_save) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_n 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__exception_pc;
        } else {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_n 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__exception_pc;
        }
    }
    vlTOPp->riscv_core__DOT__clear_instr_valid = (((IData)(vlTOPp->riscv_core__DOT__id_ready) 
                                                   | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id)) 
                                                  | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex));
    vlTOPp->riscv_core__DOT__id_valid = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id)) 
                                         & (IData)(vlTOPp->riscv_core__DOT__id_ready));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__halt_if)) 
           & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid) 
              & (IData)(vlTOPp->riscv_core__DOT__id_ready)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (1U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                    >> 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (2U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                    >> 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (4U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                    >> 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (8U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                    >> 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                       >> 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                       >> 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                       >> 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                       >> 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x100U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x200U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x400U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x800U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x1000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                         >> 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x2000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                         >> 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x4000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                         >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x8000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                         >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x100000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                           << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x200000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                           << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x400000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                           << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x800000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                           << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x1000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                            << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x2000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                            << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x4000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x8000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                            << 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                             << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                             << 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                             << 0x1fU)));
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked))) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we 
            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked;
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid 
            = (1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                     >> 7U));
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we 
            = vlTOPp->riscv_core__DOT__csr_hwlp_we;
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid 
            = (1U & (IData)(vlTOPp->riscv_core__DOT__csr_hwlp_regid));
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_valid 
        = (((IData)(vlTOPp->riscv_core__DOT__instr_valid_id) 
            & (IData)(vlTOPp->riscv_core__DOT__clear_instr_valid)) 
           & (IData)(vlTOPp->riscv_core__DOT__is_hwlp_id));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | ((((~ (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                    >> 2U)) & (IData)(vlTOPp->riscv_core__DOT__id_valid)) 
               & (IData)(vlTOPp->riscv_core__DOT__is_decoding)) 
              << 2U));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch) 
                             << 5U) | (((IData)(vlTOPp->riscv_core__DOT__pc_set) 
                                        << 4U) | (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__offset_fsm_cs))))));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns 
        = vlTOPp->__Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns
        [vlTOPp->__Vtableidx1];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready 
        = vlTOPp->__Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready
        [vlTOPp->__Vtableidx1];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req 
        = vlTOPp->__Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req
        [vlTOPp->__Vtableidx1];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid 
        = vlTOPp->__Vtable1_riscv_core__DOT__if_stage_i__DOT__valid
        [vlTOPp->__Vtableidx1];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DN 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S)
            ? ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                : (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP) 
                    << 0x1fU) | (0x7fffffffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
                                                >> 1U))))
            : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_failed = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_failed 
                    = (1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid)));
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_failed = 0U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) {
                    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
                    }
                }
            } else {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS)))) {
                if ((1U & (~ ((IData)(vlTOPp->instr_rvalid_i) 
                              & (3U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))))) {
                    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))) {
                    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = 1U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                }
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked)))) {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                             | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                        } else {
                            if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                                 & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                } else {
                    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                    }
                }
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                           & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = 0U;
            } else {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
                        = ((IData)(vlTOPp->instr_gnt_i)
                            ? 2U : 1U);
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                if (vlTOPp->instr_rvalid_i) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
                        = ((IData)(vlTOPp->instr_gnt_i)
                            ? 2U : 1U);
                }
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked)))) {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
                            = ((IData)(vlTOPp->instr_gnt_i)
                                ? 2U : 1U);
                    } else {
                        if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                             | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = 3U;
                        } else {
                            if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                                 & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = 3U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
                    = ((IData)(vlTOPp->instr_gnt_i)
                        ? 2U : 1U);
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                           & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS 
                        = ((IData)(vlTOPp->instr_gnt_i)
                            ? 2U : 1U);
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__instr_addr_pmp = ((IData)(4U) 
                                               + (0xfffffffcU 
                                                  & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q));
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
                    vlTOPp->riscv_core__DOT__instr_addr_pmp 
                        = (0xfffffffeU & ((4U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                           ? ((2U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                   : 0U)
                                               : ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                   : vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc))
                                           : ((2U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                                                   : vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target)
                                               : ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlTOPp->riscv_core__DOT__pc_id)
                                                   : 
                                                  (0xfffffffeU 
                                                   & vlTOPp->boot_addr_i)))));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__instr_addr_pmp 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q;
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__instr_addr_pmp 
                        = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)
                            ? (0xfffffffeU & ((4U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                    : vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc))
                                               : ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                                                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->riscv_core__DOT__pc_id)
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlTOPp->boot_addr_i)))))
                            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
                }
            } else {
                vlTOPp->riscv_core__DOT__instr_addr_pmp 
                    = ((IData)(4U) + (0xfffffffcU & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q));
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__instr_addr_pmp 
                        = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)
                            ? (0xfffffffeU & ((4U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                    : vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc))
                                               : ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                                                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->riscv_core__DOT__pc_id)
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlTOPp->boot_addr_i)))))
                            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
                } else {
                    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) {
                        vlTOPp->riscv_core__DOT__instr_addr_pmp 
                            = vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__instr_addr_pmp 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q;
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__instr_addr_pmp 
                        = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)
                            ? (0xfffffffeU & ((4U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                    : vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc))
                                               : ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                                                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->riscv_core__DOT__pc_id)
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlTOPp->boot_addr_i)))))
                            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
                } else {
                    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))) {
                        vlTOPp->riscv_core__DOT__instr_addr_pmp 
                            = vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target;
                    }
                }
            } else {
                vlTOPp->riscv_core__DOT__instr_addr_pmp 
                    = ((IData)(4U) + (0xfffffffcU & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q));
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                     | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))) {
                    vlTOPp->riscv_core__DOT__instr_addr_pmp 
                        = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)
                            ? (0xfffffffeU & ((4U & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                               ? ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q
                                                    : vlTOPp->riscv_core__DOT__if_stage_i__DOT__exc_pc))
                                               : ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                                                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__pc_mux_id))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->riscv_core__DOT__pc_id)
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlTOPp->boot_addr_i)))))
                            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
                } else {
                    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))) {
                        vlTOPp->riscv_core__DOT__instr_addr_pmp 
                            = vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__instr_req_pmp = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            vlTOPp->riscv_core__DOT__instr_req_pmp = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__instr_req_pmp = 0U;
            } else {
                vlTOPp->riscv_core__DOT__instr_req_pmp = 0U;
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
                    vlTOPp->riscv_core__DOT__instr_req_pmp = 1U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                if (vlTOPp->instr_rvalid_i) {
                    vlTOPp->riscv_core__DOT__instr_req_pmp = 1U;
                }
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked)))) {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__instr_req_pmp = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                vlTOPp->riscv_core__DOT__instr_req_pmp = 1U;
            } else {
                vlTOPp->riscv_core__DOT__instr_req_pmp = 0U;
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                           & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))))) {
                    vlTOPp->riscv_core__DOT__instr_req_pmp = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked)))) {
                    if (vlTOPp->instr_rvalid_i) {
                        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = 1U;
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                                      | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))))) {
                            if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                                 & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) 
                              | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch))))) {
                    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = 1U;
                    }
                }
            } else {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                           & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))))) {
                    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked) 
                         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored))) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events = 0U;
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7ffdU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__load_stall) 
               & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q)) 
              << 1U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7ffbU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jr_stall) 
               & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q)) 
              << 2U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7ff7U & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (8U & ((((~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid)) 
                      | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                     & (~ (IData)(vlTOPp->riscv_core__DOT__pc_set))) 
                    << 3U)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7fefU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((((IData)(vlTOPp->data_req_o) & (IData)(vlTOPp->data_gnt_i)) 
               & (~ (IData)(vlTOPp->data_we_o))) << 4U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7fdfU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((((IData)(vlTOPp->data_req_o) & (IData)(vlTOPp->data_gnt_i)) 
               & (IData)(vlTOPp->data_we_o)) << 5U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7fbfU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_in_id)) 
                | (2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_in_id))) 
               & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q)) 
              << 6U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7f7fU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (((IData)(vlTOPp->riscv_core__DOT__branch_in_ex) 
               & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q)) 
              << 7U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7effU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (0xffffff00U & ((((IData)(vlTOPp->riscv_core__DOT__branch_in_ex) 
                               << 8U) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                         << 5U)) & 
                             ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q) 
                              << 8U))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7dffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((((IData)(vlTOPp->riscv_core__DOT__id_valid) 
                & (IData)(vlTOPp->riscv_core__DOT__is_decoding)) 
               & (IData)(vlTOPp->riscv_core__DOT__is_compressed_id)) 
              << 9U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x7bffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((IData)(vlTOPp->riscv_core__DOT__perf_pipeline_stall) 
              << 0xaU));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = (0x77ffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = (0x6fffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = (0x5fffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = (0x3fffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0x3fffU & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | ((IData)(vlTOPp->ext_perf_counters_i) 
              << 0xeU));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                if (((IData)(vlTOPp->riscv_core__DOT__instr_req_int) 
                     & ((((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> 1U)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)) 
                         | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch)) 
                        | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked)))) {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid = 1U;
                    }
                } else {
                    if (vlTOPp->instr_rvalid_i) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
            & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result) 
           | (((0x2aU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                : (- (IData)(((0x28U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                              & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlTOPp->riscv_core__DOT__bmask_a_ex)))))) 
              & (~ vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xfffffff8U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xffffffc7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x38U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xfffffe3fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x1c0U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xfffff1ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0xe00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xffff8fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x7000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xfffc7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x38000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xffe3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x1c0000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xff1fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0xe00000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xf8ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x7000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((0xc7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev) 
           | (0x38000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfffffffcU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1eU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfffffff3U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xcU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                      >> 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xffffffcfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x30U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xffffff3fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc0U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfffffcffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x300U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfffff3ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc00U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xaU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xffffcfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x3000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xffff3fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfffcffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x30000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfff3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc0000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xffcfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x300000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xaU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xff3fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc00000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xfcffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x3000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xf3ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0xcfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0x30000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = ((0x3fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev) 
           | (0xc0000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x1eU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (1U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (2U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (4U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (8U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    >> 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x10U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x20U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x40U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x80U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                       >> 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x100U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x200U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x400U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x800U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x1000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x2000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x4000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x8000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                         >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x10000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x20000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x40000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x80000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x100000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x200000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x400000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x800000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                           << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x1000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x2000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x4000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x8000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                            << 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x10000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x20000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x40000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev) 
           | (0x80000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 0x1fU)));
    vlTOPp->instr_addr_o = vlTOPp->riscv_core__DOT__instr_addr_pmp;
    vlTOPp->instr_req_o = vlTOPp->riscv_core__DOT__instr_req_pmp;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_busy 
        = ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)) 
           | (IData)(vlTOPp->riscv_core__DOT__instr_req_pmp));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | (((~ (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                   >> 3U)) & ((0xeU >= (0xfU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U])) 
                              & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events) 
                                 >> (0xfU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U])))) 
              << 3U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | (((~ (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                   >> 4U)) & ((0xeU >= (0xfU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U])) 
                              & ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__hpm_events) 
                                 >> (0xfU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U])))) 
              << 4U));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                   >> 3U) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid)) 
                 | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((8U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
            ? vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U]
            : (vlTOPp->instr_rdata_i & (- (IData)((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? ((0U == (3U & (IData)(vlTOPp->riscv_core__DOT__bmask_a_ex)))
                                        ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__bmask_a_ex)))
                                            ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->riscv_core__DOT__bmask_a_ex)))
                                                ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev
                                                : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)))
                                    : 0U);
                        }
                    }
                } else {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax
                                : (1U & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                         >> 3U))) : 
                           ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                             ? ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                 ? (1U & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                          >> 3U)) : 0U)
                             : 0U));
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                            ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                            : ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP)
                                ? (- vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D)
                                : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D));
                }
            } else {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                       ^ vlTOPp->riscv_core__DOT__alu_operand_b_ex)
                                    : (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                       | vlTOPp->riscv_core__DOT__alu_operand_b_ex))
                                : ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                                    : (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                       | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                            : ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                ? ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                       & (~ vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask))
                                    : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                                : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
                } else {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                        ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                        : ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                            ? ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                ? ((0x17U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? ((1U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                               >> 0x1fU) 
                                              | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))
                                        ? 0U : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)
                                    : ((1U & ((IData)(
                                                      (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                       >> 0x24U)) 
                                              | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))
                                        ? (~ vlTOPp->riscv_core__DOT__alu_operand_b_ex)
                                        : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                                : ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                       & vlTOPp->riscv_core__DOT__alu_operand_b_ex)
                                    : ((IData)(vlTOPp->riscv_core__DOT__alu_is_clpx_ex)
                                        ? ((0xffff0000U 
                                            & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                           | (0xffffU 
                                              & vlTOPp->riscv_core__DOT__alu_operand_a_ex))
                                        : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                            : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
            } else {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                                   | (0xff000000U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 0x18U)));
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xff00ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                                   | (0xff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                  >> 2U)))) 
                                                   << 0x10U)));
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xffff00ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                                   | (0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                >> 1U)))) 
                                                 << 8U)));
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                                = ((0xffffff00U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                                   | (0xffU & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result))))));
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff000000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                >> 3U)))) 
                                                 << 0x18U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xff00ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff0000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                              >> 2U)))) 
                                               << 0x10U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffff00ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                            >> 1U)))) 
                                             << 8U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffffff00U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result))))));
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                     >> 3U));
                    } else {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff000000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                >> 3U)))) 
                                                 << 0x18U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xff00ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff0000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                              >> 2U)))) 
                                               << 0x10U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffff00ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xff00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                            >> 1U)))) 
                                             << 8U)));
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0xffffff00U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result) 
                               | (0xffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result))))));
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid 
        = (1U & ((1U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
                         >> 1U) & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q))))
                  ? ((3U != (3U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                   >> 0x10U))) ? (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                          >> 2U) | (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                     >> 3U) & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid))))
                  : (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS)))) {
                if ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))) {
                    if ((((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) 
                          & (3U != (3U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                          >> 0x10U)))) 
                         & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                            >> 1U))) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative = 1U;
                    } else {
                        if ((1U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                                    >> 1U) & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 2U;
                }
            } else {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 2U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) 
                     & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 0U;
                }
            } else {
                if (((IData)(vlTOPp->instr_rvalid_i) 
                     & (3U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS 
                        = (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) 
                            & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp))
                            ? 0U : 3U);
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 2U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS 
                        = ((((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid) 
                             & (3U != (3U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                             >> 0x10U)))) 
                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                               >> 1U)) ? 4U : ((1U 
                                                & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                                                    >> 1U) 
                                                   & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))))
                                                ? 5U
                                                : ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp)
                                                    ? 2U
                                                    : 1U)));
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = 0U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
                   >> 1U) & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q))))
            ? ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
                ? ((0xffff0000U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & (vlTOPp->instr_rdata_i 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U))))
            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw = 0U;
    if (vlTOPp->riscv_core__DOT__alu_en_ex) {
        vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlTOPp->riscv_core__DOT__mult_en_ex) {
        vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlTOPp->riscv_core__DOT__csr_access_ex) {
        vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((0U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
        if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else {
                    if ((0U == (0xffU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 5U)))) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x1000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                            if ((0U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U)))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((2U != (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            if ((0U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                        if ((0U == ((0x20U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U))))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        if ((0U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
                if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0x1000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0U == (0x1fU & 
                                            (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    if ((0U != (0x1fU 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else {
                        if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                            if ((1U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        >> 0xcU) | 
                                       (0U == (0x1fU 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 2U)))))) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
        if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x842023U | ((0x4000000U 
                                         & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x15U)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x700000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | ((0xc00U 
                                                     & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                    | (0x200U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 3U))))))));
                }
            }
        } else {
            if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x42403U | ((0x4000000U 
                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x15U)) 
                                       | ((0x3800000U 
                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x400000U 
                                              & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x10U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 5U)))))));
                }
            } else {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10413U | ((0x3c000000U 
                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x13U)) 
                                       | ((0x3000000U 
                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x800000U 
                                              & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | ((0x400000U 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x10U)) 
                                                | (0x380U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 5U)))))));
                }
            }
        }
    } else {
        if ((1U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x40U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((0x20U 
                                                & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                            : ((0x20U 
                                                & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))));
                        if ((2U == (0x1fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x2000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
                }
            }
        } else {
            if ((2U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))) {
                if ((0x8000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x12023U | ((0xc000000U 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                               | ((0x2000000U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0x1f00000U 
                                                      & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | (0xe00U 
                                                        & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    } else {
                        if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))));
                                if ((0U == (0x1fU & 
                                            (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    if ((0U == (0x1fU 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed = 0x100073U;
                                    }
                                } else {
                                    if ((0U == (0x1fU 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                                        vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                            = (0xe7U 
                                               | (0xf8000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)));
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)));
                                if ((0U == (0x1fU & 
                                            (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = (0x67U | 
                                           (0xf8000U 
                                            & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)));
                                }
                            }
                        }
                    }
                } else {
                    if ((0x4000U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x12003U | ((0xc000000U 
                                                & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x18U)) 
                                               | ((0x2000000U 
                                                   & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0x1c00000U 
                                                      & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | (0xf80U 
                                                        & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    } else {
                        if ((1U & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x1013U | ((0x1f00000U 
                                               & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata))));
                        }
                    }
                }
            } else {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata;
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[2U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[3U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[3U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[0U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[3U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q;
    if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j = 0U;
        {
            while (VL_GTS_III(1,32,32, 4U, vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                              >> (3U & ((IData)(3U) 
                                        - vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)))))) {
                    VL_ASSIGNSEL_WIII(32,(0x7fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                   << 5U)), vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int, vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
                    VL_ASSIGNSEL_WIII(32,(0x7fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                   << 5U)), vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int, vlTOPp->instr_rdata_i);
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
                        = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                           | ((IData)(1U) << (3U & 
                                              ((IData)(3U) 
                                               - vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j))));
                    goto __Vlabel2;
                }
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                    = ((IData)(1U) + vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j);
            }
            __Vlabel2: ;
        }
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp) {
            if ((8U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q;
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[0U] 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata;
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U] 
                    = vlTOPp->instr_rdata_i;
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
                    = (4U | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int));
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
                    = (0xcU & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int));
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int 
                    = ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int)) 
                       | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp));
            } else {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int 
                    = ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int)) 
                       | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp) 
                          << 1U));
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlTOPp->riscv_core__DOT__lsu_rdata
                : vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[
               (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                         >> 0x14U))]));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlTOPp->riscv_core__DOT__lsu_rdata
                : vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[
               (0x1fU & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id))]));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlTOPp->riscv_core__DOT__lsu_rdata
                : vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_n 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int;
    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_n 
            = (2U & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int) 
                     << 1U));
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[1U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[2U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[2U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[3U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[3U];
    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U] 
            = ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int))
                ? vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U]
                : ((2U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])
                    ? ((3U != (3U & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                     >> 0x10U))) ? 
                       (0xfffffffcU & ((IData)(4U) 
                                       + (0xfffffffcU 
                                          & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])))
                        : (2U | (0xfffffffcU & ((IData)(4U) 
                                                + (0xfffffffcU 
                                                   & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])))))
                    : ((3U != (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))
                        ? (2U | (0xfffffffcU & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U]))
                        : (0xfffffffcU & ((IData)(4U) 
                                          + (0xfffffffcU 
                                             & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U]))))));
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[0U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U];
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3U] 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3U];
    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
        if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3U] = 0U;
        } else {
            if ((2U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U];
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U];
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3U];
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3U] = 0U;
            } else {
                if ((3U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
                        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U];
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
                        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U];
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
                        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3U];
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3U] = 0U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int;
    if (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid))) {
        if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
                = (0xeU & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                           << 1U));
        } else {
            if ((2U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
                    = (0xeU & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                               << 1U));
            } else {
                if ((3U == (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))) {
                    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
                        = (0xeU & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                                   << 1U));
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target
                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id
                    : ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                        ? 0U : (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                         >> 0xfU))))
                : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlTOPp->riscv_core__DOT__pc_id
                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id)));
    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_int 
                = vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id;
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_int 
            = (0xfffU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                         >> 0x14U));
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id
                    : ((0xffffffe0U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b) 
                       | (0x1fU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id))))
            : ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_b)
                : ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id
                    : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt 
        = ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked))
            ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_int
            : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_vec 
        = ((3U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode))
            ? ((0xff000000U & (vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b 
                               << 0x18U)) | ((0xff0000U 
                                              & (vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b))))
            : ((0xffff0000U & (vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_b 
        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__scalar_replication)
            ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_vec
            : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b);
}

void Vriscv_core::_eval(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_eval\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if ((((IData)(vlTOPp->riscv_core__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__riscv_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
    vlTOPp->__Vclklast__TOP__riscv_core__DOT__clk = vlTOPp->riscv_core__DOT__clk;
}

VL_INLINE_OPT QData Vriscv_core::_change_request(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_change_request\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vriscv_core::_change_request_1(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_change_request_1\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->riscv_core__DOT__ex_ready ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_ready)
         | (vlTOPp->riscv_core__DOT__lsu_ready_ex ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_ex)
         | (vlTOPp->riscv_core__DOT__lsu_ready_wb ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_wb)
         | (vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__valid)
         | (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__fetch_valid)
         | (vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)
         | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
         | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2])|| (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4])
         | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)
         | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b));
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__ex_ready ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_ready))) VL_DBG_MSGF("        CHANGE: riscv_core.sv:279: riscv_core.ex_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__lsu_ready_ex ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_ex))) VL_DBG_MSGF("        CHANGE: riscv_core.sv:285: riscv_core.lsu_ready_ex\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__lsu_ready_wb ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_wb))) VL_DBG_MSGF("        CHANGE: riscv_core.sv:287: riscv_core.lsu_ready_wb\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__valid))) VL_DBG_MSGF("        CHANGE: riscv_if_stage.sv:103: riscv_core.if_stage_i.valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__fetch_valid))) VL_DBG_MSGF("        CHANGE: riscv_if_stage.sv:111: riscv_core.if_stage_i.fetch_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) VL_DBG_MSGF("        CHANGE: riscv_controller.sv:193: riscv_core.id_stage_i.controller_i.ctrl_fsm_cs\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes))) VL_DBG_MSGF("        CHANGE: riscv_alu.sv:1173: riscv_core.ex_stage_i.alu_i.alu_ff_i.sel_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3]) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4] ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4]))) VL_DBG_MSGF("        CHANGE: riscv_alu.sv:1174: riscv_core.ex_stage_i.alu_i.alu_ff_i.index_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a))) VL_DBG_MSGF("        CHANGE: riscv_mult.sv:74: riscv_core.ex_stage_i.mult_i.short_op_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b ^ vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))) VL_DBG_MSGF("        CHANGE: riscv_mult.sv:75: riscv_core.ex_stage_i.mult_i.short_op_b\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_ready 
        = vlTOPp->riscv_core__DOT__ex_ready;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_ex 
        = vlTOPp->riscv_core__DOT__lsu_ready_ex;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__lsu_ready_wb 
        = vlTOPp->riscv_core__DOT__lsu_ready_wb;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__valid 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__fetch_valid 
        = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_valid;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U] 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U];
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U] 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[1U];
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U];
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U];
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U];
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlTOPp->__Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_core::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((clock_en_i & 0xfeU))) {
        Verilated::overWidthError("clock_en_i");}
    if (VL_UNLIKELY((test_en_i & 0xfeU))) {
        Verilated::overWidthError("test_en_i");}
    if (VL_UNLIKELY((fregfile_disable_i & 0xfeU))) {
        Verilated::overWidthError("fregfile_disable_i");}
    if (VL_UNLIKELY((core_id_i & 0xf0U))) {
        Verilated::overWidthError("core_id_i");}
    if (VL_UNLIKELY((cluster_id_i & 0xc0U))) {
        Verilated::overWidthError("cluster_id_i");}
    if (VL_UNLIKELY((instr_gnt_i & 0xfeU))) {
        Verilated::overWidthError("instr_gnt_i");}
    if (VL_UNLIKELY((instr_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("instr_rvalid_i");}
    if (VL_UNLIKELY((data_gnt_i & 0xfeU))) {
        Verilated::overWidthError("data_gnt_i");}
    if (VL_UNLIKELY((data_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("data_rvalid_i");}
    if (VL_UNLIKELY((apu_master_gnt_i & 0xfeU))) {
        Verilated::overWidthError("apu_master_gnt_i");}
    if (VL_UNLIKELY((apu_master_valid_i & 0xfeU))) {
        Verilated::overWidthError("apu_master_valid_i");}
    if (VL_UNLIKELY((apu_master_flags_i & 0xe0U))) {
        Verilated::overWidthError("apu_master_flags_i");}
    if (VL_UNLIKELY((irq_i & 0xfeU))) {
        Verilated::overWidthError("irq_i");}
    if (VL_UNLIKELY((irq_id_i & 0xe0U))) {
        Verilated::overWidthError("irq_id_i");}
    if (VL_UNLIKELY((irq_sec_i & 0xfeU))) {
        Verilated::overWidthError("irq_sec_i");}
    if (VL_UNLIKELY((debug_req_i & 0xfeU))) {
        Verilated::overWidthError("debug_req_i");}
    if (VL_UNLIKELY((fetch_enable_i & 0xfeU))) {
        Verilated::overWidthError("fetch_enable_i");}
    if (VL_UNLIKELY((ext_perf_counters_i & 0xfeU))) {
        Verilated::overWidthError("ext_perf_counters_i");}
}
#endif  // VL_DEBUG
