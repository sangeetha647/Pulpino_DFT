// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadbg_top.h for the primary calling header

#include "Vadbg_top.h"
#include "Vadbg_top__Syms.h"

//==========
CData/*5:0*/ Vadbg_top::__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[16];
CData/*3:0*/ Vadbg_top::__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[16];
CData/*0:0*/ Vadbg_top::__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[16];
CData/*2:0*/ Vadbg_top::__Vtable2_axi_master_aw_size[16];
CData/*2:0*/ Vadbg_top::__Vtable2_axi_master_ar_size[16];
CData/*0:0*/ Vadbg_top::__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[16];
CData/*0:0*/ Vadbg_top::__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[16];
CData/*0:0*/ Vadbg_top::__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[16];

VL_CTOR_IMP(Vadbg_top) {
    Vadbg_top__Syms* __restrict vlSymsp = __VlSymsp = new Vadbg_top__Syms(this, name());
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadbg_top::__Vconfigure(Vadbg_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vadbg_top::~Vadbg_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vadbg_top::_initial__TOP__1(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_initial__TOP__1\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi_master_aw_prot = 0U;
    vlTOPp->axi_master_aw_region = 0U;
    vlTOPp->axi_master_aw_len = 0U;
    vlTOPp->axi_master_aw_burst = 0U;
    vlTOPp->axi_master_aw_lock = 0U;
    vlTOPp->axi_master_aw_cache = 0U;
    vlTOPp->axi_master_aw_qos = 0U;
    vlTOPp->axi_master_aw_id = 0U;
    vlTOPp->axi_master_aw_user = 0U;
    vlTOPp->axi_master_ar_prot = 0U;
    vlTOPp->axi_master_ar_region = 0U;
    vlTOPp->axi_master_ar_len = 0U;
    vlTOPp->axi_master_ar_burst = 0U;
    vlTOPp->axi_master_ar_lock = 0U;
    vlTOPp->axi_master_ar_cache = 0U;
    vlTOPp->axi_master_ar_qos = 0U;
    vlTOPp->axi_master_ar_id = 0U;
    vlTOPp->axi_master_ar_user = 0U;
    vlTOPp->axi_master_w_user = 0U;
    vlTOPp->axi_master_w_last = 1U;
}

void Vadbg_top::_settle__TOP__4(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_settle__TOP__4\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int = 0U;
    if ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & (IData)(vlTOPp->cpu_ack_i));
    }
    if ((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 1U));
    }
    if ((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 2U));
    }
    if ((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 3U));
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U] 
        = (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error);
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U] 
        = ((0xfffffffeU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U]) 
           | (IData)((vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                      >> 0x20U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlTOPp->axi_master_ar_addr = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_aw_addr = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_w_data = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg;
    vlTOPp->axi_master_w_strb = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg;
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlTOPp->cpu_we_o = ((0xeU & (IData)(vlTOPp->cpu_we_o)) 
                        | ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                           & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)));
    vlTOPp->cpu_we_o = ((0xdU & (IData)(vlTOPp->cpu_we_o)) 
                        | (((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 1U));
    vlTOPp->cpu_we_o = ((0xbU & (IData)(vlTOPp->cpu_we_o)) 
                        | (((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 2U));
    vlTOPp->cpu_we_o = ((7U & (IData)(vlTOPp->cpu_we_o)) 
                        | (((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 3U));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->shift_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->shift_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U] 
        = ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U] 
        = ((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U] 
        = ((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U] 
        = ((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffffffff0000ULL & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | (IData)((IData)(((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                               ? (0xffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                               : 0U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffff0000ffffULL & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x10U));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffff0000ffffffffULL & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x20U));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffffffffULL & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x30U));
    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (1U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (2U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (4U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (8U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x400U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x800U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x1000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x2000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x4000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x400000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                           >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                            >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                             >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (1U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (2U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (4U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (8U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                           >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                            >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                             >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out 
        = ((0x80U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
            ? ((0x40U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                ? ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : vlTOPp->axi_master_r_data)
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? vlTOPp->axi_master_r_data
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->axi_master_r_data 
                                                                      >> 0x30U)))))))))))
                : ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? vlTOPp->axi_master_r_data : (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                    ? vlTOPp->axi_master_r_data
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                     ? vlTOPp->axi_master_r_data
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                      ? vlTOPp->axi_master_r_data
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                       ? vlTOPp->axi_master_r_data
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                        ? vlTOPp->axi_master_r_data
                                                        : (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlTOPp->axi_master_r_data 
                                                                                >> 0x38U))))))))))))
            : ((0x40U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                ? ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? vlTOPp->axi_master_r_data : (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                    ? vlTOPp->axi_master_r_data
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                     ? vlTOPp->axi_master_r_data
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                      ? vlTOPp->axi_master_r_data
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                       ? vlTOPp->axi_master_r_data
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                        ? vlTOPp->axi_master_r_data
                                                        : (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlTOPp->axi_master_r_data 
                                                                                >> 0x30U)))))))))))
                : ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->axi_master_r_data 
                                                                      >> 0x28U))))))))))
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x10U))))
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x18U)))))
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x10U))))
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 8U)))
                                    : vlTOPp->axi_master_r_data)))))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int = 0U;
    if ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[0U];
    }
    if ((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[1U];
    }
    if ((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[2U];
    }
    if ((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[3U];
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                            ? 1U : 2U) & (~ (IData)(
                                                    (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                     >> 0x3fU)))) 
                         & (IData)(vlTOPp->update_dr_i))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                    >> 0x3bU))))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->update_dr_i))) {
                        if (((9U == (0xfU & (IData)(
                                                    (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                     >> 0x3bU)))) 
                             | (0xdU == (0xfU & (IData)(
                                                        (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                         >> 0x3bU)))))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
        = (((QData)((IData)(vlTOPp->tdi_i)) << 0x3fU) 
           | (0x7fffffffffffffffULL & (vlTOPp->adbg_top__DOT__input_shift_reg 
                                       >> 1U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->update_dr_i))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                    >> 0x3bU))))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction 
        = ((3U == (0xfU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x3bU)))) | (7U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                               >> 0x3bU)))));
    vlTOPp->__Vtableidx1 = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__operation;
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bits 
        = vlTOPp->__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits
        [vlTOPp->__Vtableidx1];
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes 
        = vlTOPp->__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes
        [vlTOPp->__Vtableidx1];
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__rd_op = 
        vlTOPp->__Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op
        [vlTOPp->__Vtableidx1];
    vlTOPp->axi_master_r_ready = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)))) {
                vlTOPp->axi_master_r_ready = 1U;
            }
        }
    }
    vlTOPp->axi_master_b_ready = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_b_ready = 1U;
            }
        }
    }
    vlTOPp->axi_master_ar_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)))) {
                vlTOPp->axi_master_ar_valid = 1U;
            }
        }
    }
    vlTOPp->axi_master_w_valid = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state)))) {
            vlTOPp->axi_master_w_valid = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_w_valid = 1U;
            }
        }
    }
    vlTOPp->axi_master_aw_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_aw_valid = 1U;
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 1U;
            } else {
                if (((~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                          & (IData)(vlTOPp->axi_master_b_valid))))) {
                if (((~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 0U;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 1U;
            } else {
                if (((~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state;
    if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 0U;
            } else {
                if (((~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 0U;
                }
            }
        } else {
            if (vlTOPp->axi_master_w_ready) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                  & (IData)(vlTOPp->axi_master_aw_ready)) 
                 & (~ (IData)(vlTOPp->axi_master_w_ready)))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 2U;
            } else {
                if ((((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                      & (IData)(vlTOPp->axi_master_aw_ready)) 
                     & (IData)(vlTOPp->axi_master_w_ready))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
                } else {
                    if (((~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                         & (IData)(vlTOPp->axi_master_ar_ready))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
                    }
                }
            }
        } else {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state 
                = (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2) 
                    != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q))
                    ? 1U : 0U);
        }
    }
    vlTOPp->cpu_stall_o = (((IData)(vlTOPp->cpu_bp_i) 
                            | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)) 
                           | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
    vlTOPp->cpu_data_o[0U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U];
    vlTOPp->cpu_data_o[1U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U];
    vlTOPp->cpu_data_o[2U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U];
    vlTOPp->cpu_data_o[3U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U];
    vlTOPp->cpu_addr_o = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o;
    vlTOPp->adbg_top__DOT__module_inhibit = ((2U & (IData)(vlTOPp->adbg_top__DOT__module_inhibit)) 
                                             | (IData)(vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o));
    vlTOPp->adbg_top__DOT__module_inhibit = ((1U & (IData)(vlTOPp->adbg_top__DOT__module_inhibit)) 
                                             | ((IData)(vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o) 
                                                << 1U));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en) 
           & (0U == (7U & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x38U)))));
    if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
               & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int)));
    }
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg) 
                             << 3U) | (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
                                        << 2U) | (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en 
        = vlTOPp->__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en
        [vlTOPp->__Vtableidx3];
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en 
        = vlTOPp->__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en
        [vlTOPp->__Vtableidx3];
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int 
        = vlTOPp->__Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int
        [vlTOPp->__Vtableidx3];
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->update_dr_i))) {
                        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state 
        = ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
            ? ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? 0U : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                         ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlTOPp->update_dr_i)
                                 ? 0U : 0xbU) : ((IData)(vlTOPp->update_dr_i)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlTOPp->update_dr_i)
                                 ? 0U : 9U) : ((IData)(vlTOPp->update_dr_i)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                    ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((IData)(vlTOPp->update_dr_i)
                            ? 0U : ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                     ? ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlTOPp->update_dr_i)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((0U 
                                                          == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                          ? 1U
                                                          : 2U) 
                                                        >> 1U) 
                                                       & (IData)(
                                                                 (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                  >> 0x3fU))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))
                            ? 0U : (((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                        ? 1U : 2U) 
                                      >> 1U) & (IData)(vlTOPp->capture_dr_i))
                                     ? 6U : 5U)) : 
                       ((IData)(vlTOPp->update_dr_i)
                         ? 0U : (((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count)) 
                                  & (0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlTOPp->update_dr_i)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    (((((0U 
                                                         == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                         ? 1U
                                                         : 2U) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->capture_dr_i))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    ((((((~ (IData)(
                                                                    (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & (((0U 
                                                              == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                              ? 1U
                                                              : 2U) 
                                                            >> 1U)) 
                                                        & (IData)(vlTOPp->update_dr_i)) 
                                                       & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction)) 
                                                      & (IData)(
                                                                (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                 >> 0x3dU)))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & (((0U 
                                                              == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                              ? 1U
                                                              : 2U) 
                                                            >> 1U)) 
                                                        & (IData)(vlTOPp->update_dr_i)) 
                                                       & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction))
                                                       ? 5U
                                                       : 0U))))));
    vlTOPp->__Vtableidx2 = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes;
    vlTOPp->axi_master_aw_size = vlTOPp->__Vtable2_axi_master_aw_size
        [vlTOPp->__Vtableidx2];
    vlTOPp->axi_master_ar_size = vlTOPp->__Vtable2_axi_master_ar_size
        [vlTOPp->__Vtableidx2];
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec 
        = ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
            ? 0xffU : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                        ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                            ? 0xffU : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                                        ? 0xffU : (
                                                   (4U 
                                                    & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter)
                                                    ? 0xf0U
                                                    : 0xfU)))
                        : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                            ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                                ? 0xffU : ((0U == (3U 
                                                   & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter 
                                                      >> 1U)))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & 
                                              (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter 
                                               >> 1U)))
                                             ? 0xcU
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter 
                                                     >> 1U)))
                                                 ? 0x30U
                                                 : 0xc0U))))
                            : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))
                                ? ((0U == (7U & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                    ? 1U : ((1U == 
                                             (7U & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                             ? 2U : 
                                            ((2U == 
                                              (7U & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                              ? 4U : 
                                             ((3U == 
                                               (7U 
                                                & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                               ? 8U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                                   ? 0x10U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                                    ? 0x20U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter))
                                                     ? 0x40U
                                                     : 0x80U)))))))
                                : 0xffU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count) 
           == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bits));
    vlTOPp->cpu_stb_o = ((0xeU & (IData)(vlTOPp->cpu_stb_o)) 
                         | ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)));
    vlTOPp->cpu_stb_o = ((0xdU & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 1U));
    vlTOPp->cpu_stb_o = ((0xbU & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 2U));
    vlTOPp->cpu_stb_o = ((7U & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((3U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 3U));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->capture_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->capture_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                    }
                } else {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i 
        = ((0x80U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
            ? ((0x40U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                ? ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                            >> 0x20U))) 
                                           << 0x20U)))))
                        : vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu)
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x30U)))))))
                : ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x38U))))))))
            : ((0x40U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                ? ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x30U)))))))
                : ((0x20U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x20U)))))
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x28U))))))
                    : ((0x10U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x20U)))))
                        : ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? (QData)((IData)(
                                                          (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                           >> 0x20U)))
                                        : vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu)
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x10U)))
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x18U))))
                            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x10U)))
                                : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                      >> 0x30U)))))
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 8U)) : 
                                   ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                   >> 0x38U)))))
                                     : vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_biu))))))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state 
        = ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
            ? ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                ? 0U : ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                         ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                             ? ((IData)(vlTOPp->update_dr_i)
                                 ? 0U : 0xbU) : ((IData)(vlTOPp->update_dr_i)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                             ? ((IData)(vlTOPp->update_dr_i)
                                 ? 0U : 9U) : ((IData)(vlTOPp->update_dr_i)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                ? ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                    ? ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                        ? ((IData)(vlTOPp->update_dr_i)
                            ? 0U : ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max)
                                     ? ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlTOPp->update_dr_i)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (((0U 
                                                         == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                         ? 1U
                                                         : 2U) 
                                                       & (IData)(
                                                                 (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                  >> 0x3fU))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                        ? ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))
                            ? 0U : ((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                       ? 1U : 2U) & (IData)(vlTOPp->capture_dr_i))
                                     ? 6U : 5U)) : 
                       ((IData)(vlTOPp->update_dr_i)
                         ? 0U : (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) 
                                  & (0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlTOPp->update_dr_i)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    ((((0U 
                                                        == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                        ? 1U
                                                        : 2U) 
                                                      & (IData)(vlTOPp->capture_dr_i))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    (((((~ (IData)(
                                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                    >> 0x3fU))) 
                                                        & ((0U 
                                                            == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                            ? 1U
                                                            : 2U)) 
                                                       & (IData)(vlTOPp->update_dr_i)) 
                                                      & ((((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                        >> 0x3bU)))) 
                                                           | (6U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                          >> 0x3bU))))) 
                                                          | (7U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                         >> 0x3bU))))) 
                                                         | (8U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                        >> 0x3bU))))))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & ((0U 
                                                             == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                                                             ? 1U
                                                             : 2U)) 
                                                        & (IData)(vlTOPp->update_dr_i)) 
                                                       & ((((1U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                         >> 0x3bU)))) 
                                                            | (2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                           >> 0x3bU))))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                          >> 0x3bU))))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                                         >> 0x3bU))))))
                                                       ? 5U
                                                       : 0U))))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel)
                       ? ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                          - (IData)(1U)) : (IData)(
                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                    >> 7U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel)
            ? ((IData)(1U) + vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter)
            : (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                       >> 0x17U)));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_i) : vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->capture_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->capture_dr_i))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                    }
                } else {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          << 5U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 8U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 8U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 9U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 9U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        << 0xfU))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            << 0x13U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x14U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x15U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x17U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x18U))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              ^ vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc) 
                             << 0x1fU)));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel)
                       ? ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count) 
                          - (IData)(1U)) : (IData)(
                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                    >> 0xbU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_addr_counter 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_sel)
            ? (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter 
               + (IData)((QData)((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes))))
            : (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                       >> 0x1bU)));
    vlTOPp->tdo_o = (1U & ((0U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg))
                            ? ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready)
                                : ((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                    ? vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U]
                                    : ((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                        ? ((IData)(
                                                   (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                    >> 0x20U)) 
                                           == vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc)
                                        : vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc)))
                            : ((1U == (IData)(vlTOPp->adbg_top__DOT__module_id_reg)) 
                               & ((0U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                   ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                   : ((1U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                       ? vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg
                                       : ((2U == (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                           ? ((IData)(
                                                      (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                       >> 0x20U)) 
                                              == vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)
                                           : vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc))))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_i) : vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U]));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          << 5U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                          << 8U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                     << 8U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                          << 9U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                     << 9U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                        << 0xfU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            << 0x13U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x14U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x15U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x17U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x18U))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_data_in) 
                              ^ vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc) 
                             << 0x1fU)));
}

void Vadbg_top::_eval_initial(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_eval_initial\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__axi_aclk = vlTOPp->axi_aclk;
    vlTOPp->__Vclklast__TOP__axi_aresetn = vlTOPp->axi_aresetn;
    vlTOPp->__Vclklast__TOP__tck_i = vlTOPp->tck_i;
    vlTOPp->__Vclklast__TOP__trstn_i = vlTOPp->trstn_i;
}

void Vadbg_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::final\n"); );
    // Variables
    Vadbg_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadbg_top::_eval_settle(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_eval_settle\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vadbg_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_ctor_var_reset\n"); );
    // Body
    tck_i = VL_RAND_RESET_I(1);
    tdi_i = VL_RAND_RESET_I(1);
    tdo_o = VL_RAND_RESET_I(1);
    trstn_i = VL_RAND_RESET_I(1);
    shift_dr_i = VL_RAND_RESET_I(1);
    pause_dr_i = VL_RAND_RESET_I(1);
    update_dr_i = VL_RAND_RESET_I(1);
    capture_dr_i = VL_RAND_RESET_I(1);
    debug_select_i = VL_RAND_RESET_I(1);
    cpu_addr_o = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, cpu_data_i);
    VL_RAND_RESET_W(128, cpu_data_o);
    cpu_bp_i = VL_RAND_RESET_I(4);
    cpu_stall_o = VL_RAND_RESET_I(4);
    cpu_stb_o = VL_RAND_RESET_I(4);
    cpu_we_o = VL_RAND_RESET_I(4);
    cpu_ack_i = VL_RAND_RESET_I(4);
    cpu_rst_o = VL_RAND_RESET_I(4);
    axi_aclk = VL_RAND_RESET_I(1);
    axi_aresetn = VL_RAND_RESET_I(1);
    axi_master_aw_valid = VL_RAND_RESET_I(1);
    axi_master_aw_addr = VL_RAND_RESET_I(32);
    axi_master_aw_prot = VL_RAND_RESET_I(3);
    axi_master_aw_region = VL_RAND_RESET_I(4);
    axi_master_aw_len = VL_RAND_RESET_I(8);
    axi_master_aw_size = VL_RAND_RESET_I(3);
    axi_master_aw_burst = VL_RAND_RESET_I(2);
    axi_master_aw_lock = VL_RAND_RESET_I(1);
    axi_master_aw_cache = VL_RAND_RESET_I(4);
    axi_master_aw_qos = VL_RAND_RESET_I(4);
    axi_master_aw_id = VL_RAND_RESET_I(3);
    axi_master_aw_user = VL_RAND_RESET_I(6);
    axi_master_aw_ready = VL_RAND_RESET_I(1);
    axi_master_ar_valid = VL_RAND_RESET_I(1);
    axi_master_ar_addr = VL_RAND_RESET_I(32);
    axi_master_ar_prot = VL_RAND_RESET_I(3);
    axi_master_ar_region = VL_RAND_RESET_I(4);
    axi_master_ar_len = VL_RAND_RESET_I(8);
    axi_master_ar_size = VL_RAND_RESET_I(3);
    axi_master_ar_burst = VL_RAND_RESET_I(2);
    axi_master_ar_lock = VL_RAND_RESET_I(1);
    axi_master_ar_cache = VL_RAND_RESET_I(4);
    axi_master_ar_qos = VL_RAND_RESET_I(4);
    axi_master_ar_id = VL_RAND_RESET_I(3);
    axi_master_ar_user = VL_RAND_RESET_I(6);
    axi_master_ar_ready = VL_RAND_RESET_I(1);
    axi_master_w_valid = VL_RAND_RESET_I(1);
    axi_master_w_data = VL_RAND_RESET_Q(64);
    axi_master_w_strb = VL_RAND_RESET_I(8);
    axi_master_w_user = VL_RAND_RESET_I(6);
    axi_master_w_last = VL_RAND_RESET_I(1);
    axi_master_w_ready = VL_RAND_RESET_I(1);
    axi_master_r_valid = VL_RAND_RESET_I(1);
    axi_master_r_data = VL_RAND_RESET_Q(64);
    axi_master_r_resp = VL_RAND_RESET_I(2);
    axi_master_r_last = VL_RAND_RESET_I(1);
    axi_master_r_id = VL_RAND_RESET_I(3);
    axi_master_r_user = VL_RAND_RESET_I(6);
    axi_master_r_ready = VL_RAND_RESET_I(1);
    axi_master_b_valid = VL_RAND_RESET_I(1);
    axi_master_b_resp = VL_RAND_RESET_I(2);
    axi_master_b_id = VL_RAND_RESET_I(3);
    axi_master_b_user = VL_RAND_RESET_I(6);
    axi_master_b_ready = VL_RAND_RESET_I(1);
    adbg_top__DOT__input_shift_reg = VL_RAND_RESET_Q(64);
    adbg_top__DOT__module_id_reg = VL_RAND_RESET_I(5);
    adbg_top__DOT__module_inhibit = VL_RAND_RESET_I(2);
    adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o = VL_RAND_RESET_I(1);
    adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__address_counter = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_axi__DOT__bit_count = VL_RAND_RESET_I(6);
    adbg_top__DOT__i_dbg_axi__DOT__word_count = VL_RAND_RESET_I(16);
    adbg_top__DOT__i_dbg_axi__DOT__operation = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(65, adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg);
    adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error = VL_RAND_RESET_Q(33);
    adbg_top__DOT__i_dbg_axi__DOT__addr_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__op_reg_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__word_ct_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__word_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__tdo_output_sel = VL_RAND_RESET_I(2);
    adbg_top__DOT__i_dbg_axi__DOT__biu_strobe = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__crc_clr = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__crc_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__crc_in_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__crc_shift_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__intreg_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__error_reg_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__bit_count_max = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__biu_ready = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__rd_op = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__word_size_bits = VL_RAND_RESET_I(6);
    adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_axi__DOT__data_to_addr_counter = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_axi__DOT__data_to_word_counter = VL_RAND_RESET_I(16);
    adbg_top__DOT__i_dbg_axi__DOT__data_to_biu = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_axi__DOT__crc_data_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg);
    adbg_top__DOT__i_dbg_axi__DOT__module_state = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_axi__DOT__module_next_state = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg = VL_RAND_RESET_I(8);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec = VL_RAND_RESET_I(8);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state = VL_RAND_RESET_I(2);
    adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = VL_RAND_RESET_I(2);
    adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count = VL_RAND_RESET_I(6);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count = VL_RAND_RESET_I(16);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__internal_register_select = VL_RAND_RESET_I(3);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = VL_RAND_RESET_I(2);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_clr = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter = VL_RAND_RESET_I(16);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_data_in = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o = VL_RAND_RESET_Q(64);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu = VL_RAND_RESET_I(4);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state = VL_RAND_RESET_I(1);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = VL_RAND_RESET_I(32);
    adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[0] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[1] = 7U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[2] = 0xfU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[3] = 0x1fU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[4] = 0x3fU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[5] = 7U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[6] = 0xfU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[7] = 0x1fU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[8] = 0x3fU;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[9] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[10] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[11] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[12] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[13] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[14] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bits[15] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[0] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[1] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[2] = 2U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[3] = 4U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[4] = 8U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[5] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[6] = 2U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[7] = 4U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[8] = 4U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[9] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[10] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[11] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[12] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[13] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[14] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__word_size_bytes[15] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[0] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[1] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[2] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[3] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[4] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[5] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[6] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[7] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[8] = 1U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[9] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[10] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[11] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[12] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[13] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[14] = 0U;
    __Vtable1_adbg_top__DOT__i_dbg_axi__DOT__rd_op[15] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_axi_master_aw_size[0] = 3U;
    __Vtable2_axi_master_aw_size[1] = 0U;
    __Vtable2_axi_master_aw_size[2] = 1U;
    __Vtable2_axi_master_aw_size[3] = 3U;
    __Vtable2_axi_master_aw_size[4] = 2U;
    __Vtable2_axi_master_aw_size[5] = 3U;
    __Vtable2_axi_master_aw_size[6] = 3U;
    __Vtable2_axi_master_aw_size[7] = 3U;
    __Vtable2_axi_master_aw_size[8] = 3U;
    __Vtable2_axi_master_aw_size[9] = 3U;
    __Vtable2_axi_master_aw_size[10] = 3U;
    __Vtable2_axi_master_aw_size[11] = 3U;
    __Vtable2_axi_master_aw_size[12] = 3U;
    __Vtable2_axi_master_aw_size[13] = 3U;
    __Vtable2_axi_master_aw_size[14] = 3U;
    __Vtable2_axi_master_aw_size[15] = 3U;
    __Vtable2_axi_master_ar_size[0] = 3U;
    __Vtable2_axi_master_ar_size[1] = 0U;
    __Vtable2_axi_master_ar_size[2] = 1U;
    __Vtable2_axi_master_ar_size[3] = 3U;
    __Vtable2_axi_master_ar_size[4] = 2U;
    __Vtable2_axi_master_ar_size[5] = 3U;
    __Vtable2_axi_master_ar_size[6] = 3U;
    __Vtable2_axi_master_ar_size[7] = 3U;
    __Vtable2_axi_master_ar_size[8] = 3U;
    __Vtable2_axi_master_ar_size[9] = 3U;
    __Vtable2_axi_master_ar_size[10] = 3U;
    __Vtable2_axi_master_ar_size[11] = 3U;
    __Vtable2_axi_master_ar_size[12] = 3U;
    __Vtable2_axi_master_ar_size[13] = 3U;
    __Vtable2_axi_master_ar_size[14] = 3U;
    __Vtable2_axi_master_ar_size[15] = 3U;
    __Vtableidx3 = 0;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[0] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[1] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[2] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[3] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[4] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[5] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[6] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[7] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[8] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[9] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[10] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[11] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[12] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[13] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[14] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[15] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[0] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[1] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[2] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[3] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[4] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[5] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[6] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[7] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[8] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[9] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[10] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[11] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[12] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[13] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[14] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[15] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[0] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[1] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[2] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[3] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[4] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[5] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[6] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[7] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[8] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[9] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[10] = 0U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[11] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[12] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[13] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[14] = 1U;
    __Vtable3_adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[15] = 1U;
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready = VL_RAND_RESET_I(1);
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = VL_RAND_RESET_I(4);
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
}
