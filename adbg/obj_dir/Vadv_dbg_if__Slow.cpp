// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadv_dbg_if.h for the primary calling header

#include "Vadv_dbg_if.h"
#include "Vadv_dbg_if__Syms.h"

//==========
CData/*3:0*/ Vadv_dbg_if::__Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[32];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[512];
CData/*5:0*/ Vadv_dbg_if::__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[16];
CData/*3:0*/ Vadv_dbg_if::__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[16];
CData/*2:0*/ Vadv_dbg_if::__Vtable6_axi_master_aw_size[16];
CData/*2:0*/ Vadv_dbg_if::__Vtable6_axi_master_ar_size[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[16];
CData/*0:0*/ Vadv_dbg_if::__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[16];

VL_CTOR_IMP(Vadv_dbg_if) {
    Vadv_dbg_if__Syms* __restrict vlSymsp = __VlSymsp = new Vadv_dbg_if__Syms(this, name());
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadv_dbg_if::__Vconfigure(Vadv_dbg_if__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vadv_dbg_if::~Vadv_dbg_if() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vadv_dbg_if::_initial__TOP__1(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_initial__TOP__1\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vadv_dbg_if::_settle__TOP__5(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_settle__TOP__5\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg 
        = (1U & ((IData)(vlTOPp->test_mode_i) ? (IData)(vlTOPp->tck_pad_i)
                  : (~ (IData)(vlTOPp->tck_pad_i))));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->tms_pad_i) 
                             << 4U) | (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__TAP_state));
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state 
        = vlTOPp->__Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int = 0U;
    if ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & (IData)(vlTOPp->cpu_ack_i));
    }
    if ((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 1U));
    }
    if ((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 2U));
    }
    if ((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int 
            = (1U & ((IData)(vlTOPp->cpu_ack_i) >> 3U));
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U] 
        = (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U] 
        = ((0xfffffffeU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U]) 
           | (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                      >> 0x20U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlTOPp->axi_master_ar_addr = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_aw_addr = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_w_data = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg;
    vlTOPp->axi_master_w_strb = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlTOPp->cpu_we_o = ((0xeU & (IData)(vlTOPp->cpu_we_o)) 
                        | ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                           & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)));
    vlTOPp->cpu_we_o = ((0xdU & (IData)(vlTOPp->cpu_we_o)) 
                        | (((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 1U));
    vlTOPp->cpu_we_o = ((0xbU & (IData)(vlTOPp->cpu_we_o)) 
                        | (((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 2U));
    vlTOPp->cpu_we_o = ((7U & (IData)(vlTOPp->cpu_we_o)) 
                        | (((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)) 
                           << 3U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U] 
        = ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U] 
        = ((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U] 
        = ((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U] 
        = ((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffffffff0000ULL & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | (IData)((IData)(((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                               ? (0xffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                               : 0U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffff0000ffffULL & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x10U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffff0000ffffffffULL & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x20U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o 
        = ((0xffffffffffffULL & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o) 
           | ((QData)((IData)(((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))
                                ? (0xffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)
                                : 0U))) << 0x30U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (1U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (2U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (4U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (8U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x400U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x800U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x1000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x2000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x4000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x400000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                           >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                            >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                             >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (1U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (2U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (4U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (8U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                           >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                            >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                             >> 1U)));
    vlTOPp->__Vtableidx2 = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__TAP_state;
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir 
        = vlTOPp->__Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir
        [vlTOPp->__Vtableidx2];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out 
        = ((0x80U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
            ? ((0x40U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                ? ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : vlTOPp->axi_master_r_data)
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? vlTOPp->axi_master_r_data
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->axi_master_r_data 
                                                                      >> 0x30U)))))))))))
                : ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? vlTOPp->axi_master_r_data : (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                    ? vlTOPp->axi_master_r_data
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                     ? vlTOPp->axi_master_r_data
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                      ? vlTOPp->axi_master_r_data
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                       ? vlTOPp->axi_master_r_data
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                        ? vlTOPp->axi_master_r_data
                                                        : (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlTOPp->axi_master_r_data 
                                                                                >> 0x38U))))))))))))
            : ((0x40U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                ? ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? vlTOPp->axi_master_r_data : (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                    ? vlTOPp->axi_master_r_data
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                     ? vlTOPp->axi_master_r_data
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                      ? vlTOPp->axi_master_r_data
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                       ? vlTOPp->axi_master_r_data
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                                        ? vlTOPp->axi_master_r_data
                                                        : (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlTOPp->axi_master_r_data 
                                                                                >> 0x30U)))))))))))
                : ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                    ? ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->axi_master_r_data 
                                                                      >> 0x28U))))))))))
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? vlTOPp->axi_master_r_data
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? vlTOPp->axi_master_r_data
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (QData)((IData)(
                                                          (vlTOPp->axi_master_r_data 
                                                           >> 0x20U)))))))
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                            ? ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x10U))))
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x18U)))))
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? vlTOPp->axi_master_r_data
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 0x10U))))
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                    ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg))
                                        ? vlTOPp->axi_master_r_data
                                        : (0xffffffffffffffULL 
                                           & (vlTOPp->axi_master_r_data 
                                              >> 8U)))
                                    : vlTOPp->axi_master_r_data)))))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int = 0U;
    if ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[0U];
    }
    if ((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[1U];
    }
    if ((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[2U];
    }
    if ((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select))) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int 
            = vlTOPp->cpu_data_i[3U];
    }
    vlTOPp->__Vtableidx3 = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir;
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select 
        = vlTOPp->__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select
        [vlTOPp->__Vtableidx3];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select 
        = vlTOPp->__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select
        [vlTOPp->__Vtableidx3];
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select 
        = vlTOPp->__Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select
        [vlTOPp->__Vtableidx3];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
        = (((QData)((IData)(vlTOPp->tdi_pad_i)) << 0x3fU) 
           | (0x7fffffffffffffffULL & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                       >> 1U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction 
        = ((3U == (0xfU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x3bU)))) | (7U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                               >> 0x3bU)))));
    vlTOPp->__Vtableidx5 = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__operation;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits 
        = vlTOPp->__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits
        [vlTOPp->__Vtableidx5];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes 
        = vlTOPp->__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes
        [vlTOPp->__Vtableidx5];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op 
        = vlTOPp->__Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op
        [vlTOPp->__Vtableidx5];
    vlTOPp->axi_master_r_ready = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)))) {
                vlTOPp->axi_master_r_ready = 1U;
            }
        }
    }
    vlTOPp->axi_master_b_ready = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_b_ready = 1U;
            }
        }
    }
    vlTOPp->axi_master_ar_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)))) {
                vlTOPp->axi_master_ar_valid = 1U;
            }
        }
    }
    vlTOPp->axi_master_w_valid = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state)))) {
            vlTOPp->axi_master_w_valid = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_w_valid = 1U;
            }
        }
    }
    vlTOPp->axi_master_aw_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) {
                vlTOPp->axi_master_aw_valid = 1U;
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 1U;
            } else {
                if (((~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                          & (IData)(vlTOPp->axi_master_b_valid))))) {
                if (((~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 0U;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 1U;
            } else {
                if (((~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state;
    if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                 & (IData)(vlTOPp->axi_master_b_valid))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 0U;
            } else {
                if (((~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                     & (IData)(vlTOPp->axi_master_r_valid))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 0U;
                }
            }
        } else {
            if (vlTOPp->axi_master_w_ready) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state))) {
            if ((((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                  & (IData)(vlTOPp->axi_master_aw_ready)) 
                 & (~ (IData)(vlTOPp->axi_master_w_ready)))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 2U;
            } else {
                if ((((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg) 
                      & (IData)(vlTOPp->axi_master_aw_ready)) 
                     & (IData)(vlTOPp->axi_master_w_ready))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
                } else {
                    if (((~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)) 
                         & (IData)(vlTOPp->axi_master_ar_ready))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = 3U;
                    }
                }
            }
        } else {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state 
                = (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2) 
                    != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q))
                    ? 1U : 0U);
        }
    }
    vlTOPp->cpu_stall_o = (((IData)(vlTOPp->cpu_bp_i) 
                            | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)) 
                           | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
    vlTOPp->cpu_data_o[0U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U];
    vlTOPp->cpu_data_o[1U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U];
    vlTOPp->cpu_data_o[2U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U];
    vlTOPp->cpu_data_o[3U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U];
    vlTOPp->cpu_addr_o = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit 
        = ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit)) 
           | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit 
        = ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit)) 
           | ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o) 
              << 1U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                            ? 1U : 2U) & (~ (IData)(
                                                    (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                     >> 0x3fU)))) 
                         & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                    >> 0x3bU))))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr))) {
                        if (((9U == (0xfU & (IData)(
                                                    (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                     >> 0x3bU)))) 
                             | (0xdU == (0xfU & (IData)(
                                                        (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                         >> 0x3bU)))))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                    >> 0x3bU))))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
               & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int)));
    }
    vlTOPp->__Vtableidx7 = (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg) 
                             << 3U) | (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
                                        << 2U) | (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en 
        = vlTOPp->__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en
        [vlTOPp->__Vtableidx7];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en 
        = vlTOPp->__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en
        [vlTOPp->__Vtableidx7];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int 
        = vlTOPp->__Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int
        [vlTOPp->__Vtableidx7];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                             ? 1U : 2U) >> 1U) & (~ (IData)(
                                                            (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                             >> 0x3fU)))) 
                         & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr))) {
                        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state 
        = ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
            ? ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? 0U : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                         ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                 ? 0U : 0xbU) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                 ? 0U : 9U) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                    ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                            ? 0U : ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                     ? ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((0U 
                                                          == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                          ? 1U
                                                          : 2U) 
                                                        >> 1U) 
                                                       & (IData)(
                                                                 (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                  >> 0x3fU))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))
                            ? 0U : (((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                        ? 1U : 2U) 
                                      >> 1U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))
                                     ? 6U : 5U)) : 
                       ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                         ? 0U : (((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count)) 
                                  & (0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    (((((0U 
                                                         == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                         ? 1U
                                                         : 2U) 
                                                       >> 1U) 
                                                      & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    ((((((~ (IData)(
                                                                    (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & (((0U 
                                                              == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                              ? 1U
                                                              : 2U) 
                                                            >> 1U)) 
                                                        & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)) 
                                                       & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction)) 
                                                      & (IData)(
                                                                (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                 >> 0x3dU)))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & (((0U 
                                                              == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                              ? 1U
                                                              : 2U) 
                                                            >> 1U)) 
                                                        & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)) 
                                                       & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction))
                                                       ? 5U
                                                       : 0U))))));
    vlTOPp->__Vtableidx6 = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes;
    vlTOPp->axi_master_aw_size = vlTOPp->__Vtable6_axi_master_aw_size
        [vlTOPp->__Vtableidx6];
    vlTOPp->axi_master_ar_size = vlTOPp->__Vtable6_axi_master_ar_size
        [vlTOPp->__Vtableidx6];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec 
        = ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
            ? 0xffU : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                        ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                            ? 0xffU : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                                        ? 0xffU : (
                                                   (4U 
                                                    & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter)
                                                    ? 0xf0U
                                                    : 0xfU)))
                        : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                            ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                                ? 0xffU : ((0U == (3U 
                                                   & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter 
                                                      >> 1U)))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & 
                                              (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter 
                                               >> 1U)))
                                             ? 0xcU
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter 
                                                     >> 1U)))
                                                 ? 0x30U
                                                 : 0xc0U))))
                            : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))
                                ? ((0U == (7U & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                    ? 1U : ((1U == 
                                             (7U & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                             ? 2U : 
                                            ((2U == 
                                              (7U & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                              ? 4U : 
                                             ((3U == 
                                               (7U 
                                                & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                               ? 8U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                                   ? 0x10U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                                    ? 0x20U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter))
                                                     ? 0x40U
                                                     : 0x80U)))))))
                                : 0xffU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count) 
           == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en) 
           & (0U == (7U & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x38U)))));
    vlTOPp->cpu_stb_o = ((0xeU & (IData)(vlTOPp->cpu_stb_o)) 
                         | ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                            & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)));
    vlTOPp->cpu_stb_o = ((0xdU & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((1U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 1U));
    vlTOPp->cpu_stb_o = ((0xbU & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((2U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 2U));
    vlTOPp->cpu_stb_o = ((7U & (IData)(vlTOPp->cpu_stb_o)) 
                         | (((3U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select)) 
                             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int)) 
                            << 3U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                            ? 1U : 2U) >> 1U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                    }
                } else {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i 
        = ((0x80U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
            ? ((0x40U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                ? ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                            >> 0x20U))) 
                                           << 0x20U)))))
                        : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu)
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x30U)))))))
                : ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x38U))))))))
            : ((0x40U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                ? ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x30U)))))))
                : ((0x20U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                    ? ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x20U)))))
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x28U))))))
                    : ((0x10U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                        ? ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x20U)))))
                        : ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                            ? ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? (QData)((IData)(
                                                          (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                           >> 0x20U)))
                                        : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu)
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x30U))))) 
                                           << 0x10U)))
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x18U))))
                            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 0x10U)))
                                : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                    ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                      >> 0x30U)))))
                                        : ((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                       >> 0x38U))))) 
                                           << 8U)) : 
                                   ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
                                                                   >> 0x38U)))))
                                     : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu))))))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state 
        = ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
            ? ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                ? 0U : ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                         ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                             ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                 ? 0U : 0xbU) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                             ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                 ? 0U : 9U) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                ? ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                    ? ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                        ? ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                            ? 0U : ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max)
                                     ? ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (((0U 
                                                         == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                         ? 1U
                                                         : 2U) 
                                                       & (IData)(
                                                                 (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                  >> 0x3fU))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                        ? ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))
                            ? 0U : ((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                       ? 1U : 2U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))
                                     ? 6U : 5U)) : 
                       ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                         ? 0U : (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) 
                                  & (0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    ((((0U 
                                                        == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                        ? 1U
                                                        : 2U) 
                                                      & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    (((((~ (IData)(
                                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                    >> 0x3fU))) 
                                                        & ((0U 
                                                            == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                            ? 1U
                                                            : 2U)) 
                                                       & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)) 
                                                      & ((((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                        >> 0x3bU)))) 
                                                           | (6U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                          >> 0x3bU))))) 
                                                          | (7U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                         >> 0x3bU))))) 
                                                         | (8U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                        >> 0x3bU))))))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                     >> 0x3fU))) 
                                                         & ((0U 
                                                             == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                             ? 1U
                                                             : 2U)) 
                                                        & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)) 
                                                       & ((((1U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                         >> 0x3bU)))) 
                                                            | (2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                           >> 0x3bU))))) 
                                                           | (3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                          >> 0x3bU))))) 
                                                          | (4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                         >> 0x3bU))))))
                                                       ? 5U
                                                       : 0U))))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel)
                       ? ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                          - (IData)(1U)) : (IData)(
                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                    >> 7U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel)
            ? ((IData)(1U) + vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__address_counter)
            : (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                       >> 0x17U)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if ((((0U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                           ? 1U : 2U) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((4U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count)))) {
                            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    if ((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = 1U;
                    }
                } else {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state))) {
                        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state)))) {
                    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          << 5U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 8U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 8U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 9U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 9U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        << 0xfU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            << 0x13U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x14U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x15U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x17U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x18U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              ^ vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc) 
                             << 0x1fU)));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel)
                       ? ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count) 
                          - (IData)(1U)) : (IData)(
                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                    >> 0xbU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_addr_counter 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel)
            ? (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter 
               + (IData)((QData)((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes))))
            : (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                       >> 0x1bU)));
    vlTOPp->__Vtableidx4 = ((0x100U & (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg 
                                       << 8U)) | ((0x80U 
                                                   & (((0U 
                                                        == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                                         ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                                          ? 
                                                         vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel))
                                                           ? 
                                                          ((IData)(
                                                                   (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                    >> 0x20U)) 
                                                           == vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc)
                                                           : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc)))
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg)) 
                                                        & ((0U 
                                                            == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                            ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                             ? vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                              ? 
                                                             ((IData)(
                                                                      (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                                       >> 0x20U)) 
                                                              == vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)
                                                              : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc))))) 
                                                      << 7U)) 
                                                  | (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir) 
                                                               << 1U)) 
                                                           | (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir))))));
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out 
        = vlTOPp->__Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out
        [vlTOPp->__Vtableidx4];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U]));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                          << 5U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                          << 8U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                     << 8U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                          << 9U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                     << 9U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                        << 0xfU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            << 0x13U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x14U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x15U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             << 0x17U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x18U))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in) 
                              ^ vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc) 
                             << 0x1fU)));
}

void Vadv_dbg_if::_eval_initial(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_eval_initial\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__axi_aclk = vlTOPp->axi_aclk;
    vlTOPp->__Vclklast__TOP__axi_aresetn = vlTOPp->axi_aresetn;
    vlTOPp->__Vclklast__TOP__tck_pad_i = vlTOPp->tck_pad_i;
    vlTOPp->__Vclklast__TOP__trstn_pad_i = vlTOPp->trstn_pad_i;
    vlTOPp->__Vclklast__TOP__adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg 
        = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg;
}

void Vadv_dbg_if::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::final\n"); );
    // Variables
    Vadv_dbg_if__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadv_dbg_if::_eval_settle(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_eval_settle\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void Vadv_dbg_if::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_ctor_var_reset\n"); );
    // Body
    tms_pad_i = VL_RAND_RESET_I(1);
    tck_pad_i = VL_RAND_RESET_I(1);
    trstn_pad_i = VL_RAND_RESET_I(1);
    tdi_pad_i = VL_RAND_RESET_I(1);
    tdo_pad_o = VL_RAND_RESET_I(1);
    tdo_padoe_o = VL_RAND_RESET_I(1);
    test_mode_i = VL_RAND_RESET_I(1);
    cpu_clk_i = VL_RAND_RESET_I(4);
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
    adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__TAP_state = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg = VL_RAND_RESET_I(5);
    adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit = VL_RAND_RESET_I(2);
    adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count = VL_RAND_RESET_I(6);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count = VL_RAND_RESET_I(16);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__operation = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(65, adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error = VL_RAND_RESET_Q(33);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__op_reg_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_shift_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__tdo_output_sel = VL_RAND_RESET_I(2);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_clr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_shift_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__intreg_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count_max = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits = VL_RAND_RESET_I(6);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_addr_counter = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_word_counter = VL_RAND_RESET_I(16);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg = VL_RAND_RESET_I(8);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec = VL_RAND_RESET_I(8);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state = VL_RAND_RESET_I(2);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state = VL_RAND_RESET_I(2);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__address_counter = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count = VL_RAND_RESET_I(6);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count = VL_RAND_RESET_I(16);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__operation = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__internal_register_select = VL_RAND_RESET_I(3);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = VL_RAND_RESET_I(2);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_clr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter = VL_RAND_RESET_I(16);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o = VL_RAND_RESET_Q(64);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu = VL_RAND_RESET_I(4);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_ack_int = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state = VL_RAND_RESET_I(1);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = VL_RAND_RESET_I(32);
    adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[0] = 2U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[1] = 3U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[2] = 2U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[3] = 3U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[4] = 0xeU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[5] = 0xcU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[6] = 2U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[7] = 6U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[8] = 0xaU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[9] = 0xbU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[10] = 0xaU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[11] = 0xbU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[12] = 0xcU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[13] = 0xcU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[14] = 0xaU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[15] = 0xcU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[16] = 5U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[17] = 5U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[18] = 1U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[19] = 0U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[20] = 0xfU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[21] = 7U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[22] = 1U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[23] = 4U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[24] = 0xdU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[25] = 0xdU;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[26] = 9U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[27] = 8U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[28] = 7U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[29] = 7U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[30] = 9U;
    __Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state[31] = 0xfU;
    __Vtableidx2 = 0;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset[15] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[6] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr[15] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[2] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr[15] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[5] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr[15] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[14] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir[15] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[10] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[13] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir[15] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[0] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[1] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[2] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[3] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[4] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[5] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[6] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[7] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[8] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[9] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[10] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[11] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[12] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[13] = 1U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[14] = 0U;
    __Vtable2_adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir[15] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[0] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[1] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[2] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[3] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[4] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[5] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[6] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[7] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[8] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[9] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[10] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[11] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[12] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[13] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[14] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select[15] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[0] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[1] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[2] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[3] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[4] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[5] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[6] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[7] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[8] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[9] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[10] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[11] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[12] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[13] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[14] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select[15] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[0] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[1] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[2] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[3] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[4] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[5] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[6] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[7] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[8] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[9] = 0U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[10] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[11] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[12] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[13] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[14] = 1U;
    __Vtable3_adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select[15] = 1U;
    __Vtableidx4 = 0;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[0] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[1] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[2] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[3] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[4] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[5] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[6] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[7] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[8] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[9] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[10] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[11] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[12] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[13] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[14] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[15] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[16] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[17] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[18] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[19] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[20] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[21] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[22] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[23] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[24] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[25] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[26] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[27] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[28] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[29] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[30] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[31] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[32] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[33] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[34] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[35] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[36] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[37] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[38] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[39] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[40] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[41] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[42] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[43] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[44] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[45] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[46] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[47] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[48] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[49] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[50] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[51] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[52] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[53] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[54] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[55] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[56] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[57] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[58] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[59] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[60] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[61] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[62] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[63] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[64] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[65] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[66] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[67] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[68] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[69] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[70] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[71] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[72] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[73] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[74] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[75] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[76] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[77] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[78] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[79] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[80] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[81] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[82] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[83] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[84] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[85] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[86] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[87] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[88] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[89] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[90] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[91] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[92] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[93] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[94] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[95] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[96] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[97] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[98] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[99] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[100] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[101] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[102] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[103] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[104] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[105] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[106] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[107] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[108] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[109] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[110] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[111] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[112] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[113] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[114] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[115] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[116] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[117] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[118] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[119] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[120] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[121] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[122] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[123] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[124] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[125] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[126] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[127] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[128] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[129] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[130] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[131] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[132] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[133] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[134] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[135] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[136] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[137] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[138] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[139] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[140] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[141] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[142] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[143] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[144] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[145] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[146] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[147] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[148] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[149] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[150] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[151] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[152] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[153] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[154] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[155] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[156] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[157] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[158] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[159] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[160] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[161] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[162] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[163] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[164] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[165] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[166] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[167] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[168] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[169] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[170] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[171] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[172] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[173] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[174] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[175] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[176] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[177] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[178] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[179] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[180] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[181] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[182] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[183] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[184] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[185] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[186] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[187] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[188] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[189] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[190] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[191] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[192] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[193] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[194] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[195] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[196] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[197] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[198] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[199] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[200] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[201] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[202] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[203] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[204] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[205] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[206] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[207] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[208] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[209] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[210] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[211] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[212] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[213] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[214] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[215] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[216] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[217] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[218] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[219] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[220] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[221] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[222] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[223] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[224] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[225] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[226] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[227] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[228] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[229] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[230] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[231] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[232] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[233] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[234] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[235] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[236] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[237] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[238] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[239] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[240] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[241] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[242] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[243] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[244] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[245] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[246] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[247] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[248] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[249] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[250] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[251] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[252] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[253] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[254] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[255] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[256] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[257] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[258] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[259] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[260] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[261] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[262] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[263] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[264] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[265] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[266] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[267] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[268] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[269] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[270] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[271] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[272] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[273] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[274] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[275] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[276] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[277] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[278] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[279] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[280] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[281] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[282] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[283] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[284] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[285] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[286] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[287] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[288] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[289] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[290] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[291] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[292] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[293] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[294] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[295] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[296] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[297] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[298] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[299] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[300] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[301] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[302] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[303] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[304] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[305] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[306] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[307] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[308] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[309] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[310] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[311] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[312] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[313] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[314] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[315] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[316] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[317] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[318] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[319] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[320] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[321] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[322] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[323] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[324] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[325] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[326] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[327] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[328] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[329] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[330] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[331] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[332] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[333] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[334] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[335] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[336] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[337] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[338] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[339] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[340] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[341] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[342] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[343] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[344] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[345] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[346] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[347] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[348] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[349] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[350] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[351] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[352] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[353] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[354] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[355] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[356] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[357] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[358] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[359] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[360] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[361] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[362] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[363] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[364] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[365] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[366] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[367] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[368] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[369] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[370] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[371] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[372] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[373] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[374] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[375] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[376] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[377] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[378] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[379] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[380] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[381] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[382] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[383] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[384] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[385] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[386] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[387] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[388] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[389] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[390] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[391] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[392] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[393] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[394] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[395] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[396] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[397] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[398] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[399] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[400] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[401] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[402] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[403] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[404] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[405] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[406] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[407] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[408] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[409] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[410] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[411] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[412] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[413] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[414] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[415] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[416] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[417] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[418] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[419] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[420] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[421] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[422] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[423] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[424] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[425] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[426] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[427] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[428] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[429] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[430] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[431] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[432] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[433] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[434] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[435] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[436] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[437] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[438] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[439] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[440] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[441] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[442] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[443] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[444] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[445] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[446] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[447] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[448] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[449] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[450] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[451] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[452] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[453] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[454] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[455] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[456] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[457] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[458] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[459] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[460] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[461] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[462] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[463] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[464] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[465] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[466] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[467] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[468] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[469] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[470] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[471] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[472] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[473] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[474] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[475] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[476] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[477] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[478] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[479] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[480] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[481] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[482] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[483] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[484] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[485] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[486] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[487] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[488] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[489] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[490] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[491] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[492] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[493] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[494] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[495] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[496] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[497] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[498] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[499] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[500] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[501] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[502] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[503] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[504] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[505] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[506] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[507] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[508] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[509] = 0U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[510] = 1U;
    __Vtable4_adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out[511] = 1U;
    __Vtableidx5 = 0;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[0] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[1] = 7U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[2] = 0xfU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[3] = 0x1fU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[4] = 0x3fU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[5] = 7U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[6] = 0xfU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[7] = 0x1fU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[8] = 0x3fU;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[9] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[10] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[11] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[12] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[13] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[14] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bits[15] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[0] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[1] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[2] = 2U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[3] = 4U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[4] = 8U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[5] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[6] = 2U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[7] = 4U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[8] = 4U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[9] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[10] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[11] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[12] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[13] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[14] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_size_bytes[15] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[0] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[1] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[2] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[3] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[4] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[5] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[6] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[7] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[8] = 1U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[9] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[10] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[11] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[12] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[13] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[14] = 0U;
    __Vtable5_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op[15] = 0U;
    __Vtableidx6 = 0;
    __Vtable6_axi_master_aw_size[0] = 3U;
    __Vtable6_axi_master_aw_size[1] = 0U;
    __Vtable6_axi_master_aw_size[2] = 1U;
    __Vtable6_axi_master_aw_size[3] = 3U;
    __Vtable6_axi_master_aw_size[4] = 2U;
    __Vtable6_axi_master_aw_size[5] = 3U;
    __Vtable6_axi_master_aw_size[6] = 3U;
    __Vtable6_axi_master_aw_size[7] = 3U;
    __Vtable6_axi_master_aw_size[8] = 3U;
    __Vtable6_axi_master_aw_size[9] = 3U;
    __Vtable6_axi_master_aw_size[10] = 3U;
    __Vtable6_axi_master_aw_size[11] = 3U;
    __Vtable6_axi_master_aw_size[12] = 3U;
    __Vtable6_axi_master_aw_size[13] = 3U;
    __Vtable6_axi_master_aw_size[14] = 3U;
    __Vtable6_axi_master_aw_size[15] = 3U;
    __Vtable6_axi_master_ar_size[0] = 3U;
    __Vtable6_axi_master_ar_size[1] = 0U;
    __Vtable6_axi_master_ar_size[2] = 1U;
    __Vtable6_axi_master_ar_size[3] = 3U;
    __Vtable6_axi_master_ar_size[4] = 2U;
    __Vtable6_axi_master_ar_size[5] = 3U;
    __Vtable6_axi_master_ar_size[6] = 3U;
    __Vtable6_axi_master_ar_size[7] = 3U;
    __Vtable6_axi_master_ar_size[8] = 3U;
    __Vtable6_axi_master_ar_size[9] = 3U;
    __Vtable6_axi_master_ar_size[10] = 3U;
    __Vtable6_axi_master_ar_size[11] = 3U;
    __Vtable6_axi_master_ar_size[12] = 3U;
    __Vtable6_axi_master_ar_size[13] = 3U;
    __Vtable6_axi_master_ar_size[14] = 3U;
    __Vtable6_axi_master_ar_size[15] = 3U;
    __Vtableidx7 = 0;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[0] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[1] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[2] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[3] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[4] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[5] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[6] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[7] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[8] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[9] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[10] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[11] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[12] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[13] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[14] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en[15] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[0] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[1] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[2] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[3] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[4] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[5] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[6] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[7] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[8] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[9] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[10] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[11] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[12] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[13] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[14] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en[15] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[0] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[1] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[2] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[3] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[4] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[5] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[6] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[7] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[8] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[9] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[10] = 0U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[11] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[12] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[13] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[14] = 1U;
    __Vtable7_adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_stb_int[15] = 1U;
    __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir = VL_RAND_RESET_I(4);
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready = VL_RAND_RESET_I(1);
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = VL_RAND_RESET_I(4);
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = VL_RAND_RESET_I(1);
}
