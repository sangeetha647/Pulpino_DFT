// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_core.h for the primary calling header

#include "Vriscv_core.h"
#include "Vriscv_core__Syms.h"

void Vriscv_core::_settle__TOP__4(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_settle__TOP__4\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel) {
        if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_int 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr;
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_int 
            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target;
    }
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
    vlTOPp->riscv_core__DOT__clk = ((IData)(vlTOPp->clk_i) 
                                    & (IData)(vlTOPp->riscv_core__DOT__core_clock_gate_i__DOT__clk_en));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
        = ((0xff000000U & (((8U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                             ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                >> 0x18U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                             >> 0x18U)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((4U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                               ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                  >> 0x10U)
                                               : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                  >> 8U)
                                                  : 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0)))));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target = 0U;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt = 0U;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)) {
            if ((1U & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr) 
                       >> (1U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target 
                    = (IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q 
                               >> (0x3fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j 
                                            << 5U))));
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt 
                    = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt) 
                       | ((IData)(1U) << (1U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)));
                goto __Vlabel1;
            }
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j 
                = ((IData)(1U) + vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j);
        }
        __Vlabel1: ;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 1U;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked 
            = (1U & ((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                         >> 1U)) & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                                    | ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr)) 
                                       & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                                             >> 1U))))));
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0xffffU & VL_SHIFTRS_III(16,16,2, (0xffffU 
                                              & (IData)(
                                                        (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                         >> 0xfU))), (IData)(vlTOPp->riscv_core__DOT__mult_clpx_shift_ex)));
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
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater 
        = (0xfU & (- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                     >> 3U) ^ (((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                 & vlTOPp->riscv_core__DOT__alu_operand_b_ex) 
                                                >> 0x1fU) 
                                               & (~ 
                                                  ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal) 
                                                   >> 3U))))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4 
        = ((0x3e0U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
           | (0x1fU & ((0xfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
                       + (0xfU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                  >> 4U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4 
        = ((0x1fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
           | (0x3e0U & (((0xfU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                              >> 0xcU))) 
                        << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x1fffffffffULL & (VL_EXTENDS_QQ(37,36, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                              + VL_EXTENDS_QQ(37,36, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
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
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x3fU & ((0x1fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
                    + (0x1fU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4) 
                                >> 5U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((0xff000000U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                    >> 0x1cU)) << 0x18U)) 
           | ((0xff0000U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                     >> 0x13U)) << 0x10U)) 
              | ((0xff00U & ((IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0xaU)) << 8U)) 
                 | (0xffU & (IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                     >> 1U))))));
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlTOPp->riscv_core__DOT__branch_in_ex) 
           & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S 
        = (((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP 
             == vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP) 
            | ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP 
                > vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP) 
               ^ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP))) 
           & ((0U != vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP) 
              | (0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked 
        = ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)
              ? 0U : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we)) 
            & (~ (- (IData)((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_mask))))) 
           & (- (IData)((IData)(vlTOPp->riscv_core__DOT__id_ready))));
    vlTOPp->riscv_core__DOT__clear_instr_valid = (((IData)(vlTOPp->riscv_core__DOT__id_ready) 
                                                   | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id)) 
                                                  | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__branch_taken_ex));
    vlTOPp->riscv_core__DOT__id_valid = ((~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__halt_id)) 
                                         & (IData)(vlTOPp->riscv_core__DOT__id_ready));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlTOPp->riscv_core__DOT__halt_if)) 
           & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__valid) 
              & (IData)(vlTOPp->riscv_core__DOT__id_ready)));
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
    vlTOPp->instr_addr_o = vlTOPp->riscv_core__DOT__instr_addr_pmp;
    vlTOPp->instr_req_o = vlTOPp->riscv_core__DOT__instr_req_pmp;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_busy 
        = ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS)) 
           | (IData)(vlTOPp->riscv_core__DOT__instr_req_pmp));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                   >> 3U) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid)) 
                 | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((8U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
            ? vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U]
            : (vlTOPp->instr_rdata_i & (- (IData)((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
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
}

void Vriscv_core::_settle__TOP__6(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_settle__TOP__6\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp35;
    CData/*31:0*/ __Vtemp41;
    // Body
    vlTOPp->apu_master_operands_o[0U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[0U];
    vlTOPp->apu_master_operands_o[1U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[1U];
    vlTOPp->apu_master_operands_o[2U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[2U];
    vlTOPp->apu_master_operands_o[0U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[0U];
    vlTOPp->apu_master_operands_o[1U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[1U];
    vlTOPp->apu_master_operands_o[2U] = vlTOPp->riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o[2U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | (1U & (~ vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | ((((~ (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                    >> 2U)) & (IData)(vlTOPp->riscv_core__DOT__id_valid)) 
               & (IData)(vlTOPp->riscv_core__DOT__is_decoding)) 
              << 2U));
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
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xffff07ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0xf800U & (((1U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                           ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U]
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                               << 0x1bU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                            >> 5U))) 
                         << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xffe0ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x1f0000U & (((4U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                 << 0x16U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0xaU))
                             : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                 << 0x11U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0xfU))) 
                           << 0x10U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xfc1fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x3e00000U & (((0x10U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                  << 0xcU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0x14U))
                              : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                  << 7U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                            >> 0x19U))) 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0x83ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x7c000000U & (((0x40U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                   << 2U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                             >> 0x1eU))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x1dU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 3U))) 
                             << 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x80000000U & (((0x100U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x18U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 8U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x13U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 0xdU))) 
                             << 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfffffff0U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xfU & (((0x100U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                        ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                            << 0x18U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                         >> 8U)) : 
                       ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                         << 0x13U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                      >> 0xdU))) >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfffffe0fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x1f0U & (((0x400U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                          ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                              << 0xeU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                          >> 0x12U))
                          : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                              << 9U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                        >> 0x17U))) 
                        << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xffffc1ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x3e00U & (((0x1000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                               << 4U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                         >> 0x1cU))
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                               << 0x1fU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                            >> 1U))) 
                         << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfff83fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x7c000U & (((0x4000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                            ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                << 0x1aU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 6U))
                            : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                << 0x15U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0xbU))) 
                          << 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xff07ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xf80000U & (((0x10000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                 << 0x10U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                              >> 0x10U))
                             : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                 << 0xbU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x15U))) 
                           << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xe0ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x1f000000U & (((0x40000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                   << 6U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x1aU))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                   << 1U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x1fU))) 
                             << 0x18U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xe0000000U & (((0x100000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                   << 0x1cU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                >> 4U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                   << 0x17U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                >> 9U))) 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffffffcU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (3U & (((0x100000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                      ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                          << 0x1cU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                       >> 4U)) : ((
                                                   vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                     >> 9U))) 
                    >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xffffff83U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x7cU & (((0x400000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                         ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                             << 0x12U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                          >> 0xeU))
                         : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                             << 0xdU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                         >> 0x13U))) 
                       << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffff07fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0xf80U & (((0x1000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                          ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                              << 8U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                        >> 0x18U)) : 
                         ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                           << 3U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                     >> 0x1dU))) << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffe0fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x1f000U & (((0x4000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                            ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                               >> 2U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                         >> 7U)) << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xffc1ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x3e0000U & (((0x10000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                >> 0xcU) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                            >> 0x11U)) 
                           << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xf83fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x7c00000U & (((0x40000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                 >> 0x16U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                              >> 0x1bU)) 
                            << 0x16U)));
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
    __Vtemp35 = (0x1fU & ((0x2000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
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
           | (0x3fffffffU & (__Vtemp35 >> 2U)));
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
    __Vtemp41 = (0x1fU & ((0x2000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
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
           | (0xfffffffU & (__Vtemp41 >> 4U)));
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
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN 
        = (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                     ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                     : ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))
                         ? ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP) 
                            - (IData)(1U)) : (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))));
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

void Vriscv_core::_eval_initial(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_eval_initial\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
    vlTOPp->__Vclklast__TOP__riscv_core__DOT__clk = vlTOPp->riscv_core__DOT__clk;
}

void Vriscv_core::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::final\n"); );
    // Variables
    Vriscv_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_core::_eval_settle(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_eval_settle\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

void Vriscv_core::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    clock_en_i = VL_RAND_RESET_I(1);
    test_en_i = VL_RAND_RESET_I(1);
    fregfile_disable_i = VL_RAND_RESET_I(1);
    boot_addr_i = VL_RAND_RESET_I(32);
    core_id_i = VL_RAND_RESET_I(4);
    cluster_id_i = VL_RAND_RESET_I(6);
    instr_req_o = VL_RAND_RESET_I(1);
    instr_gnt_i = VL_RAND_RESET_I(1);
    instr_rvalid_i = VL_RAND_RESET_I(1);
    instr_addr_o = VL_RAND_RESET_I(32);
    instr_rdata_i = VL_RAND_RESET_I(32);
    data_req_o = VL_RAND_RESET_I(1);
    data_gnt_i = VL_RAND_RESET_I(1);
    data_rvalid_i = VL_RAND_RESET_I(1);
    data_we_o = VL_RAND_RESET_I(1);
    data_be_o = VL_RAND_RESET_I(4);
    data_addr_o = VL_RAND_RESET_I(32);
    data_wdata_o = VL_RAND_RESET_I(32);
    data_rdata_i = VL_RAND_RESET_I(32);
    data_atop_o = VL_RAND_RESET_I(6);
    data_unaligned_o = VL_RAND_RESET_I(1);
    apu_master_req_o = VL_RAND_RESET_I(1);
    apu_master_ready_o = VL_RAND_RESET_I(1);
    apu_master_gnt_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, apu_master_operands_o);
    apu_master_op_o = VL_RAND_RESET_I(6);
    apu_master_type_o = VL_RAND_RESET_I(1);
    apu_master_flags_o = VL_RAND_RESET_I(15);
    apu_master_valid_i = VL_RAND_RESET_I(1);
    apu_master_result_i = VL_RAND_RESET_I(32);
    apu_master_flags_i = VL_RAND_RESET_I(5);
    irq_i = VL_RAND_RESET_I(1);
    irq_id_i = VL_RAND_RESET_I(5);
    irq_ack_o = VL_RAND_RESET_I(1);
    irq_id_o = VL_RAND_RESET_I(5);
    irq_sec_i = VL_RAND_RESET_I(1);
    sec_lvl_o = VL_RAND_RESET_I(1);
    debug_req_i = VL_RAND_RESET_I(1);
    fetch_enable_i = VL_RAND_RESET_I(1);
    core_busy_o = VL_RAND_RESET_I(1);
    ext_perf_counters_i = VL_RAND_RESET_I(1);
    riscv_core__DOT__is_hwlp_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__hwlp_dec_cnt_id = VL_RAND_RESET_I(2);
    riscv_core__DOT__instr_valid_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__is_compressed_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__is_fetch_failed_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__pc_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__clear_instr_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__pc_set = VL_RAND_RESET_I(1);
    riscv_core__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    riscv_core__DOT__exc_pc_mux_id = VL_RAND_RESET_I(3);
    riscv_core__DOT__exc_cause = VL_RAND_RESET_I(6);
    riscv_core__DOT__trap_addr_mux = VL_RAND_RESET_I(1);
    riscv_core__DOT__is_decoding = VL_RAND_RESET_I(1);
    riscv_core__DOT__useincr_addr_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_misaligned = VL_RAND_RESET_I(1);
    riscv_core__DOT__mult_multicycle = VL_RAND_RESET_I(1);
    riscv_core__DOT__branch_in_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    riscv_core__DOT__alu_en_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__alu_operator_ex = VL_RAND_RESET_I(7);
    riscv_core__DOT__alu_operand_a_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__alu_operand_c_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__bmask_a_ex = VL_RAND_RESET_I(5);
    riscv_core__DOT__bmask_b_ex = VL_RAND_RESET_I(5);
    riscv_core__DOT__imm_vec_ext_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__alu_vec_mode_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__alu_is_clpx_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__alu_is_subrot_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__alu_clpx_shift_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__mult_operator_ex = VL_RAND_RESET_I(3);
    riscv_core__DOT__mult_operand_a_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_operand_b_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_operand_c_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_en_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__mult_sel_subword_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__mult_signed_mode_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__mult_imm_ex = VL_RAND_RESET_I(5);
    riscv_core__DOT__mult_dot_op_a_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_dot_op_b_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_dot_op_c_ex = VL_RAND_RESET_I(32);
    riscv_core__DOT__mult_dot_signed_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__mult_is_clpx_ex_o = VL_RAND_RESET_I(1);
    riscv_core__DOT__mult_clpx_shift_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__mult_clpx_img_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__apu_en_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__apu_lat_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__regfile_waddr_ex = VL_RAND_RESET_I(6);
    riscv_core__DOT__regfile_we_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__regfile_we_wb = VL_RAND_RESET_I(1);
    riscv_core__DOT__regfile_alu_waddr_ex = VL_RAND_RESET_I(6);
    riscv_core__DOT__regfile_alu_we_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__regfile_alu_we_fw = VL_RAND_RESET_I(1);
    riscv_core__DOT__regfile_alu_wdata_fw = VL_RAND_RESET_I(32);
    riscv_core__DOT__csr_access_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_op_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__csr_addr_int = VL_RAND_RESET_I(12);
    riscv_core__DOT__data_we_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_atop_ex = VL_RAND_RESET_I(6);
    riscv_core__DOT__data_type_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__data_sign_ext_ex = VL_RAND_RESET_I(2);
    riscv_core__DOT__data_req_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_load_event_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_misaligned_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    riscv_core__DOT__halt_if = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_ready = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_ready = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__lsu_ready_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__lsu_ready_wb = VL_RAND_RESET_I(1);
    riscv_core__DOT__instr_req_int = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_save_if = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_save_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_cause = VL_RAND_RESET_I(6);
    riscv_core__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__debug_cause = VL_RAND_RESET_I(3);
    riscv_core__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_hwlp_regid = VL_RAND_RESET_I(1);
    riscv_core__DOT__csr_hwlp_we = VL_RAND_RESET_I(3);
    riscv_core__DOT__perf_pipeline_stall = VL_RAND_RESET_I(1);
    riscv_core__DOT__core_ctrl_firstfetch = VL_RAND_RESET_I(1);
    riscv_core__DOT__core_busy_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_req_pmp = VL_RAND_RESET_I(1);
    riscv_core__DOT__data_addr_pmp = VL_RAND_RESET_I(32);
    riscv_core__DOT__instr_req_pmp = VL_RAND_RESET_I(1);
    riscv_core__DOT__instr_addr_pmp = VL_RAND_RESET_I(32);
    riscv_core__DOT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, riscv_core__DOT____Vcellout__ex_stage_i__apu_master_operands_o);
    riscv_core__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__offset_fsm_cs = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__if_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_busy = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__branch_req = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__fetch_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__fetch_addr = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__is_hwlp_id_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__exc_pc = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__hwlp_target = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt_if = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__trap_base_addr = VL_RAND_RESET_I(24);
    riscv_core__DOT__if_stage_i__DOT__fetch_failed = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS = VL_RAND_RESET_I(3);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS = VL_RAND_RESET_I(3);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS = VL_RAND_RESET_I(3);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS = VL_RAND_RESET_I(3);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fetch_is_hwlp = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int);
    VL_RAND_RESET_W(128, riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n = VL_RAND_RESET_I(4);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int = VL_RAND_RESET_I(4);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q = VL_RAND_RESET_I(4);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_n = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_int = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q = VL_RAND_RESET_I(2);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j = 0;
    riscv_core__DOT__id_stage_i__DOT__deassert_we = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__uret_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__rega_used_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__regb_used_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__regc_used_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__jump_in_id = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__jr_stall = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__load_stall = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__hwloop_mask = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__halt_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__imm_vu_type = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__jump_target = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__exc_ack = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__exc_kill = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__regfile_addr_rc_id = VL_RAND_RESET_I(6);
    riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id = VL_RAND_RESET_I(6);
    riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__alu_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    riscv_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__regc_mux = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(4);
    riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__mult_operator = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__mult_int_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mult_sel_subword = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mult_signed_mode = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__mult_dot_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__regfile_we_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__data_we_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__data_type_id = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__data_req_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__data_load_event_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__atop_id = VL_RAND_RESET_I(6);
    riscv_core__DOT__id_stage_i__DOT__hwloop_regid = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__hwloop_we = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__hwloop_target = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__hwloop_start_int = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__hwloop_cnt = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_int = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__hwloop_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__csr_access = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__csr_status = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__prepost_useincr = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__operand_a_fw_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__operand_c_fw_id = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__operand_b = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__operand_b_vec = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__operand_c = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__alu_operand_b = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__bmask_a_mux = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mult_imm_mux = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__bmask_a_id_imm = VL_RAND_RESET_I(5);
    riscv_core__DOT__id_stage_i__DOT__bmask_b_id_imm = VL_RAND_RESET_I(5);
    riscv_core__DOT__id_stage_i__DOT__alu_vec_mode = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__scalar_replication = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__is_clpx = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__is_subrot = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__mret_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__uret_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__dret_dec = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem);
    riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec = VL_RAND_RESET_I(32);
    riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu = VL_RAND_RESET_I(26);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we = VL_RAND_RESET_I(3);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(5);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(5);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_n = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs = VL_RAND_RESET_I(2);
    riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q = VL_RAND_RESET_I(5);
    riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q = VL_RAND_RESET_Q(64);
    riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q = VL_RAND_RESET_Q(64);
    riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q = VL_RAND_RESET_Q(64);
    riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n = VL_RAND_RESET_Q(64);
    riscv_core__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__mult_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = VL_RAND_RESET_Q(36);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = VL_RAND_RESET_Q(36);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = VL_RAND_RESET_Q(37);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex = VL_RAND_RESET_I(16);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = VL_RAND_RESET_I(8);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = VL_RAND_RESET_I(4);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 = VL_RAND_RESET_I(24);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3 = VL_RAND_RESET_I(16);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4 = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(160, riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DN = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DN = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DN = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SN = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SN = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SN = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D = VL_RAND_RESET_I(32);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN = VL_RAND_RESET_I(6);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a = VL_RAND_RESET_I(17);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b = VL_RAND_RESET_I(17);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_RAND_RESET_Q(34);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result = VL_RAND_RESET_Q(34);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = VL_RAND_RESET_I(5);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = VL_RAND_RESET_I(2);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_RAND_RESET_I(1);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_RAND_RESET_I(3);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_RAND_RESET_I(3);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = VL_RAND_RESET_Q(33);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = VL_RAND_RESET_I(16);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a = VL_RAND_RESET_Q(36);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(72, riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a = VL_RAND_RESET_Q(34);
    riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(68, riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul);
    riscv_core__DOT__load_store_unit_i__DOT__shamt = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__mask_d = VL_RAND_RESET_I(4);
    riscv_core__DOT__load_store_unit_i__DOT__mask_q = VL_RAND_RESET_I(4);
    riscv_core__DOT__load_store_unit_i__DOT__shamt_d = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__shamt_q = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__type_d = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__type_q = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__sign_ext_d = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__resp_state_d = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__resp_state_q = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__ext_bit = VL_RAND_RESET_I(1);
    riscv_core__DOT__load_store_unit_i__DOT__rdata_d = VL_RAND_RESET_I(32);
    riscv_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__load_store_unit_i__DOT__state_d = VL_RAND_RESET_I(2);
    riscv_core__DOT__load_store_unit_i__DOT__state_q = VL_RAND_RESET_I(2);
    riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    riscv_core__DOT__cs_registers_i__DOT__mepc_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dcsr_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__depc_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__depc_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dscratch0_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dscratch0_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dscratch1_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__dscratch1_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mscratch_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mscratch_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mstatus_q = VL_RAND_RESET_I(7);
    riscv_core__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(7);
    riscv_core__DOT__cs_registers_i__DOT__mcause_q = VL_RAND_RESET_I(6);
    riscv_core__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(6);
    riscv_core__DOT__cs_registers_i__DOT__stack_base_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__stack_base_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__stack_size_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__stack_size_n = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mcounteren_d = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mcounteren_q = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment = VL_RAND_RESET_I(32);
    riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d);
    VL_RAND_RESET_W(1024, riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q);
    riscv_core__DOT__cs_registers_i__DOT__hpm_events = VL_RAND_RESET_I(15);
    riscv_core__DOT__cs_registers_i__DOT__id_valid_q = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[0] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[1] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[2] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[3] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[4] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[5] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[6] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[7] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[8] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[9] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[10] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[11] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[12] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[13] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[14] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[15] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[16] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[17] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[18] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[19] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[20] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[21] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[22] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[23] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[24] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[25] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[26] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[27] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[28] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[29] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[30] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[31] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[32] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[33] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[34] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[35] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[36] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[37] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[38] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[39] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[40] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[41] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[42] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[43] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[44] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[45] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[46] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[47] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[48] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[49] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[50] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[51] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[52] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[53] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[54] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[55] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[56] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[57] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[58] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[59] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[60] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[61] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[62] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns[63] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[0] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[1] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[2] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[3] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[4] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[5] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[6] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[7] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[8] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[9] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[10] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[11] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[12] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[13] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[14] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[15] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[16] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[17] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[18] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[19] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[20] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[21] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[22] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[23] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[24] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[25] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[26] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[27] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[28] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[29] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[30] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[31] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[32] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[33] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[34] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[35] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[36] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[37] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[38] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[39] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[40] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[41] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[42] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[43] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[44] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[45] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[46] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[47] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[48] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[49] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[50] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[51] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[52] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[53] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[54] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[55] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[56] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[57] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[58] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[59] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[60] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[61] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[62] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__fetch_ready[63] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[0] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[1] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[2] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[3] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[4] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[5] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[6] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[7] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[8] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[9] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[10] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[11] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[12] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[13] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[14] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[15] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[16] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[17] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[18] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[19] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[20] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[21] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[22] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[23] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[24] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[25] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[26] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[27] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[28] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[29] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[30] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[31] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[32] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[33] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[34] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[35] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[36] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[37] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[38] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[39] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[40] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[41] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[42] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[43] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[44] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[45] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[46] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[47] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[48] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[49] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[50] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[51] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[52] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[53] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[54] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[55] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[56] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[57] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[58] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[59] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[60] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[61] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[62] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__branch_req[63] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[0] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[1] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[2] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[3] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[4] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[5] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[6] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[7] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[8] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[9] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[10] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[11] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[12] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[13] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[14] = 1U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[15] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[16] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[17] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[18] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[19] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[20] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[21] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[22] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[23] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[24] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[25] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[26] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[27] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[28] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[29] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[30] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[31] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[32] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[33] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[34] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[35] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[36] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[37] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[38] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[39] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[40] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[41] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[42] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[43] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[44] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[45] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[46] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[47] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[48] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[49] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[50] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[51] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[52] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[53] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[54] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[55] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[56] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[57] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[58] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[59] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[60] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[61] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[62] = 0U;
    __Vtable1_riscv_core__DOT__if_stage_i__DOT__valid[63] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[0] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[1] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[2] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[3] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[4] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[5] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[6] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[7] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[8] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[9] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[10] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[11] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[12] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[13] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[14] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[15] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[16] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[17] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[18] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[19] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[20] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[21] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[22] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[23] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[24] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[25] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[26] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[27] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[28] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[29] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[30] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[31] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[32] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[33] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[34] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[35] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[36] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[37] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[38] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[39] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[40] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[41] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[42] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[43] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[44] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[45] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[46] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[47] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[48] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[49] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[50] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[51] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[52] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[53] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[54] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[55] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[56] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[57] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[58] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[59] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[60] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[61] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[62] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[63] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[64] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[65] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[66] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[67] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[68] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[69] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[70] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[71] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[72] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[73] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[74] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[75] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[76] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[77] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[78] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[79] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[80] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[81] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[82] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[83] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[84] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[85] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[86] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[87] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[88] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[89] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[90] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[91] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[92] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[93] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[94] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[95] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[96] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[97] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[98] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[99] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[100] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[101] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[102] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[103] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[104] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[105] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[106] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[107] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[108] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[109] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[110] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[111] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[112] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[113] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[114] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[115] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[116] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[117] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[118] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[119] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[120] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[121] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[122] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[123] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[124] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[125] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[126] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[127] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[128] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[129] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[130] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[131] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[132] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[133] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[134] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[135] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[136] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[137] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[138] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[139] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[140] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[141] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[142] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[143] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[144] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[145] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[146] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[147] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[148] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[149] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[150] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[151] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[152] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[153] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[154] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[155] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[156] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[157] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[158] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[159] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[160] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[161] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[162] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[163] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[164] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[165] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[166] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[167] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[168] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[169] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[170] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[171] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[172] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[173] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[174] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[175] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[176] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[177] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[178] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[179] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[180] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[181] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[182] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[183] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[184] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[185] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[186] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[187] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[188] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[189] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[190] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[191] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[192] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[193] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[194] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[195] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[196] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[197] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[198] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[199] = 8U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[200] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[201] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[202] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[203] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[204] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[205] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[206] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[207] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[208] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[209] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[210] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[211] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[212] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[213] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[214] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[215] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[216] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[217] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[218] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[219] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[220] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[221] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[222] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[223] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[224] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[225] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[226] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[227] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[228] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[229] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[230] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[231] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[232] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[233] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[234] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[235] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[236] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[237] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[238] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[239] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[240] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[241] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[242] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[243] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[244] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[245] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[246] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[247] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[248] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[249] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[250] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[251] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[252] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[253] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[254] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[255] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[256] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[257] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[258] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[259] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[260] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[261] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[262] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[263] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[264] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[265] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[266] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[267] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[268] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[269] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[270] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[271] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[272] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[273] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[274] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[275] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[276] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[277] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[278] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[279] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[280] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[281] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[282] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[283] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[284] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[285] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[286] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[287] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[288] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[289] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[290] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[291] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[292] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[293] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[294] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[295] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[296] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[297] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[298] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[299] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[300] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[301] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[302] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[303] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[304] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[305] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[306] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[307] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[308] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[309] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[310] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[311] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[312] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[313] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[314] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[315] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[316] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[317] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[318] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[319] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[320] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[321] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[322] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[323] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[324] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[325] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[326] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[327] = 0xaU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[328] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[329] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[330] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[331] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[332] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[333] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[334] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[335] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[336] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[337] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[338] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[339] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[340] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[341] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[342] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[343] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[344] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[345] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[346] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[347] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[348] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[349] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[350] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[351] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[352] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[353] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[354] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[355] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[356] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[357] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[358] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[359] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[360] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[361] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[362] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[363] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[364] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[365] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[366] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[367] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[368] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[369] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[370] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[371] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[372] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[373] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[374] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[375] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[376] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[377] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[378] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[379] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[380] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[381] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[382] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[383] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[384] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[385] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[386] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[387] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[388] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[389] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[390] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[391] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[392] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[393] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[394] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[395] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[396] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[397] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[398] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[399] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[400] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[401] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[402] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[403] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[404] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[405] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[406] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[407] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[408] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[409] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[410] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[411] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[412] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[413] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[414] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[415] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[416] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[417] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[418] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[419] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[420] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[421] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[422] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[423] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[424] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[425] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[426] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[427] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[428] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[429] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[430] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[431] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[432] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[433] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[434] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[435] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[436] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[437] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[438] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[439] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[440] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[441] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[442] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[443] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[444] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[445] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[446] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[447] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[448] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[449] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[450] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[451] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[452] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[453] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[454] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[455] = 0xfU;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[456] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[457] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[458] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[459] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[460] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[461] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[462] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[463] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[464] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[465] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[466] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[467] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[468] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[469] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[470] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[471] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[472] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[473] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[474] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[475] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[476] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[477] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[478] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[479] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[480] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[481] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[482] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[483] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[484] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[485] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[486] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[487] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[488] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[489] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[490] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[491] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[492] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[493] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[494] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[495] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[496] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[497] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[498] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[499] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[500] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[501] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[502] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[503] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[504] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[505] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[506] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[507] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[508] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[509] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[510] = 0U;
    __Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed[511] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[0] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[1] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[2] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[3] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[4] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[5] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[6] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[7] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[8] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[9] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[10] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[11] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[12] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[13] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[14] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[15] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[16] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[17] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[18] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[19] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[20] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[21] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[22] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[23] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[24] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[25] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[26] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[27] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[28] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[29] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[30] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[31] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[32] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[33] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[34] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[35] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[36] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[37] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[38] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[39] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[40] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[41] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[42] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[43] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[44] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[45] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[46] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[47] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[48] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[49] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[50] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[51] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[52] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[53] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[54] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[55] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[56] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[57] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[58] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[59] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[60] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[61] = 2U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[62] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN[63] = 3U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[0] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[1] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[2] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[3] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[4] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[5] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[6] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[7] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[8] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[9] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[10] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[11] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[12] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[13] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[14] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[15] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[16] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[17] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[18] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[19] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[20] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[21] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[22] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[23] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[24] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[25] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[26] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[27] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[28] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[29] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[30] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[31] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[32] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[33] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[34] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[35] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[36] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[37] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[38] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[39] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[40] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[41] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[42] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[43] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[44] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[45] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[46] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[47] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[48] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[49] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[50] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[51] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[52] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[53] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[54] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[55] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[56] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[57] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[58] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[59] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[60] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[61] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[62] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready[63] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[0] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[1] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[2] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[3] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[4] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[5] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[6] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[7] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[8] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[9] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[10] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[11] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[12] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[13] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[14] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[15] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[16] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[17] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[18] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[19] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[20] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[21] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[22] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[23] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[24] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[25] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[26] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[27] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[28] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[29] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[30] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[31] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[32] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[33] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[34] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[35] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[36] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[37] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[38] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[39] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[40] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[41] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[42] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[43] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[44] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[45] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[46] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[47] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[48] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[49] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[50] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[51] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[52] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[53] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[54] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[55] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[56] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[57] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[58] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[59] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[60] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[61] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[62] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S[63] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[0] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[1] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[2] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[3] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[4] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[5] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[6] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[7] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[8] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[9] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[10] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[11] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[12] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[13] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[14] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[15] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[16] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[17] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[18] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[19] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[20] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[21] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[22] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[23] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[24] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[25] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[26] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[27] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[28] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[29] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[30] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[31] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[32] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[33] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[34] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[35] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[36] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[37] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[38] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[39] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[40] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[41] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[42] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[43] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[44] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[45] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[46] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[47] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[48] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[49] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[50] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[51] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[52] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[53] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[54] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[55] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[56] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[57] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[58] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[59] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[60] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[61] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[62] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S[63] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[0] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[1] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[2] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[3] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[4] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[5] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[6] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[7] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[8] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[9] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[10] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[11] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[12] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[13] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[14] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[15] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[16] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[17] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[18] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[19] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[20] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[21] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[22] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[23] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[24] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[25] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[26] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[27] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[28] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[29] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[30] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[31] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[32] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[33] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[34] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[35] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[36] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[37] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[38] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[39] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[40] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[41] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[42] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[43] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[44] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[45] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[46] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[47] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[48] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[49] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[50] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[51] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[52] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[53] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[54] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[55] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[56] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[57] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[58] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[59] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[60] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[61] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[62] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S[63] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[0] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[1] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[2] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[3] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[4] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[5] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[6] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[7] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[8] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[9] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[10] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[11] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[12] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[13] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[14] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[15] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[16] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[17] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[18] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[19] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[20] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[21] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[22] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[23] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[24] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[25] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[26] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[27] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[28] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[29] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[30] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[31] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[32] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[33] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[34] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[35] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[36] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[37] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[38] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[39] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[40] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[41] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[42] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[43] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[44] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[45] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[46] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[47] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[48] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[49] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[50] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[51] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[52] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[53] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[54] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[55] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[56] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[57] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[58] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[59] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[60] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[61] = 1U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[62] = 0U;
    __Vtable3_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S[63] = 0U;
    __Vtableidx4 = 0;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[0] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[1] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[2] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[3] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[4] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[5] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[6] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[7] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[8] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[9] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[10] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[11] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[12] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[13] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[14] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[15] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[16] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[17] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[18] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[19] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[20] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[21] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[22] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[23] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[24] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[25] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[26] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[27] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[28] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[29] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[30] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[31] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[32] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[33] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[34] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[35] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[36] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[37] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[38] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[39] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[40] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[41] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[42] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[43] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[44] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[45] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[46] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[47] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[48] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[49] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[50] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[51] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[52] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[53] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[54] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[55] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[56] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[57] = 2U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[58] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[59] = 3U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[60] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[61] = 1U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[62] = 0U;
    __Vtable4_riscv_core__DOT__load_store_unit_i__DOT__state_d[63] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[0] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[1] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[2] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[3] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[4] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[5] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[6] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[7] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[8] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[9] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[10] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[11] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[12] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[13] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[14] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[15] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[16] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[17] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[18] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[19] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[20] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[21] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[22] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[23] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[24] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[25] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[26] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[27] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[28] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[29] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[30] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[31] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[32] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[33] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[34] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[35] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[36] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[37] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[38] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[39] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[40] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[41] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[42] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[43] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[44] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[45] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[46] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[47] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[48] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[49] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[50] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[51] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[52] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[53] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[54] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[55] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[56] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[57] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[58] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[59] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[60] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[61] = 1U;
    __Vtable4_riscv_core__DOT__data_req_pmp[62] = 0U;
    __Vtable4_riscv_core__DOT__data_req_pmp[63] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[0] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[1] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[2] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[3] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[4] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[5] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[6] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[7] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[8] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[9] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[10] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[11] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[12] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[13] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[14] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[15] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[16] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[17] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[18] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[19] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[20] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[21] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[22] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[23] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[24] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[25] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[26] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[27] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[28] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[29] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[30] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[31] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[32] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[33] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[34] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[35] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[36] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[37] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[38] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[39] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[40] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[41] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[42] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[43] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[44] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[45] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[46] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[47] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[48] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[49] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[50] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[51] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[52] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[53] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[54] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[55] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[56] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[57] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[58] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[59] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[60] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[61] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[62] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_ex[63] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[0] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[1] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[2] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[3] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[4] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[5] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[6] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[7] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[8] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[9] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[10] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[11] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[12] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[13] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[14] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[15] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[16] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[17] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[18] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[19] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[20] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[21] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[22] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[23] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[24] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[25] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[26] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[27] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[28] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[29] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[30] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[31] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[32] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[33] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[34] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[35] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[36] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[37] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[38] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[39] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[40] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[41] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[42] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[43] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[44] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[45] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[46] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[47] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[48] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[49] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[50] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[51] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[52] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[53] = 0U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[54] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[55] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[56] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[57] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[58] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[59] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[60] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[61] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[62] = 1U;
    __Vtable4_riscv_core__DOT__lsu_ready_wb[63] = 1U;
    __Vchglast__TOP__riscv_core__DOT__ex_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_core__DOT__lsu_ready_ex = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_core__DOT__lsu_ready_wb = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_core__DOT__if_stage_i__DOT__fetch_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(5);
    __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes);
    __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a = VL_RAND_RESET_I(17);
    __Vchglast__TOP__riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b = VL_RAND_RESET_I(17);
}
