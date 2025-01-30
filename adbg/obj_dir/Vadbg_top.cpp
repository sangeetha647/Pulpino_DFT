// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadbg_top.h for the primary calling header

#include "Vadbg_top.h"
#include "Vadbg_top__Syms.h"

//==========

void Vadbg_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadbg_top::eval\n"); );
    Vadbg_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("adbg_top.sv", 44, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadbg_top::_eval_initial_loop(Vadbg_top__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("adbg_top.sv", 44, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vadbg_top::_sequent__TOP__2(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_sequent__TOP__2\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
    vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en) {
            vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync)));
        }
    } else {
        vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en) {
            vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync)));
        }
    } else {
        vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state 
        = ((IData)(vlTOPp->axi_aresetn) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q 
        = ((IData)(vlTOPp->axi_aresetn) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2));
    if (vlTOPp->axi_aresetn) {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state 
            = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state;
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
               & 1U);
        vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
            = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg;
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1) 
               & 1U);
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1) 
               & 1U);
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync) 
               & 1U);
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 
            = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync) 
               & 1U);
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q = 0U;
        vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
}

VL_INLINE_OPT void Vadbg_top::_sequent__TOP__3(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_sequent__TOP__3\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count;
    CData/*5:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    CData/*0:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    WData/*64:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[3];
    IData/*31:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    IData/*31:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    IData/*31:0*/ __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp3[3];
    QData/*63:0*/ __Vdly__adbg_top__DOT__input_shift_reg;
    QData/*32:0*/ __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error;
    // Body
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U];
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U];
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U];
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready;
    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error;
    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count 
        = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count;
    __Vdly__adbg_top__DOT__input_shift_reg = vlTOPp->adbg_top__DOT__input_shift_reg;
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__internal_register_select 
                = (7U & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                 >> 0x38U)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__internal_register_select = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select 
                = (0xfU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x37U)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__cpu_select = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_ld_en) {
            VL_EXTEND_WQ(65,64, __Vtemp1, vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg);
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_data_sel) {
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[2U];
            } else {
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = __Vtemp1[0U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = __Vtemp1[1U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = __Vtemp1[2U];
            }
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__out_reg_shift_en) {
                VL_EXTEND_WQ(65,64, __Vtemp3, (((QData)((IData)(
                                                                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U])) 
                                                     >> 1U))));
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = __Vtemp3[0U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = __Vtemp3[1U];
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = __Vtemp3[2U];
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] = 0U;
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] = 0U;
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg 
                = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg 
                = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg 
                = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_clr) {
            __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_en) {
                __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc;
            } else {
                if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en) {
                    __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_clr) {
            __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_en) {
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc;
            } else {
                if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__crc_shift_en) {
                    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = 0xffffffffU;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_ct_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count 
                = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__word_count = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_ct_en) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count 
                = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_word_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__word_count = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q))) {
                __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
            }
        }
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q 
            = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2;
    } else {
        __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst) {
            __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en) {
                __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count)));
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q))) {
                vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready = 1U;
            }
        }
    } else {
        vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready = 1U;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en) {
            __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel)
                    ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)
                    : vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg);
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en) {
                __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                    = (0x7fffffffU & (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                                      >> 1U));
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg 
                = (1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation) 
                            >> 2U)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            if ((1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__rd_op)))) {
                vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg 
                    = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i;
            }
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg = 0ULL;
    }
    if (vlTOPp->trstn_i) {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state 
            = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_next_state;
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state 
            = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_next_state;
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__module_state = 0U;
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__module_state = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            if ((1U & (~ ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation) 
                          >> 2U)))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg 
                    = (((IData)(vlTOPp->tdi_i) << 0x1fU) 
                       | (0x7fffffffU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                                 >> 0x21U))));
            }
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((((IData)(vlTOPp->debug_select_i) & (IData)(
                                                         (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                          >> 0x3fU))) 
              & (IData)(vlTOPp->update_dr_i)) & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->adbg_top__DOT__module_inhibit)))))) {
            vlTOPp->adbg_top__DOT__module_id_reg = 
                (0x1fU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                  >> 0x3aU)));
        }
    } else {
        vlTOPp->adbg_top__DOT__module_id_reg = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__intreg_ld_en) 
             & (~ (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                           >> 0x39U))))) {
            if ((1U & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                               >> 0x2eU)))) {
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                    = (0x1fffffffeULL & __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error);
            }
        } else {
            if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__error_reg_en) 
                 & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error)))) {
                if ((1U & ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg) 
                           | (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))))) {
                    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                        = (1ULL | __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error);
                } else {
                    if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) {
                        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                            = ((1ULL & __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error) 
                               | ((QData)((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter)) 
                                  << 1U));
                    }
                }
            } else {
                if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
                     & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error)))) {
                    __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                        = ((1ULL & __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error) 
                           | ((QData)((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter)) 
                              << 1U));
                }
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error = 0ULL;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_rst) {
            __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count = 0U;
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_ct_en) {
                __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count)));
            }
        }
    } else {
        __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count = 0U;
    }
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->debug_select_i) & (IData)(vlTOPp->shift_dr_i))) {
            __Vdly__adbg_top__DOT__input_shift_reg 
                = (((QData)((IData)(vlTOPp->tdi_i)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (vlTOPp->adbg_top__DOT__input_shift_reg 
                                    >> 1U)));
        }
    } else {
        __Vdly__adbg_top__DOT__input_shift_reg = 0ULL;
    }
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__op_reg_en) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__operation 
                = (0xfU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x3bU)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__operation = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U];
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U];
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U];
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = __Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error;
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__bit_count 
        = __Vdly__adbg_top__DOT__i_dbg_axi__DOT__bit_count;
    vlTOPp->axi_master_w_strb = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg;
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
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter 
                = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__address_counter = 0U;
    }
    vlTOPp->axi_master_ar_addr = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_aw_addr = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
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
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2 
        = ((IData)(vlTOPp->trstn_i) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q 
        = ((IData)(vlTOPp->trstn_i) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2));
    if (vlTOPp->trstn_i) {
        if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (1U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xeU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (1U & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                        >> 0x28U))));
            }
        }
        if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (2U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xdU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (2U & ((IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                         >> 0x29U)) 
                                << 1U)));
            }
        }
        if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (4U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xbU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (4U & ((IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                         >> 0x2aU)) 
                                << 2U)));
            }
        }
        if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (8U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((7U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (8U & ((IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                         >> 0x2bU)) 
                                << 3U)));
            }
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = 0U;
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
    vlTOPp->axi_master_w_data = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg;
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
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__op_reg_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation 
                = (0xfU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x3bU)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__operation = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U] 
        = (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error);
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U] 
        = ((0xfffffffeU & vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U]) 
           | (IData)((vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__internal_reg_error 
                      >> 0x20U)));
    if (vlTOPp->trstn_i) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__addr_ct_en) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter 
                = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__data_to_addr_counter;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__address_counter = 0U;
    }
    vlTOPp->cpu_addr_o = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o;
    vlTOPp->adbg_top__DOT__module_inhibit = ((1U & (IData)(vlTOPp->adbg_top__DOT__module_inhibit)) 
                                             | ((IData)(vlTOPp->adbg_top__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o) 
                                                << 1U));
    vlTOPp->adbg_top__DOT__module_inhibit = ((2U & (IData)(vlTOPp->adbg_top__DOT__module_inhibit)) 
                                             | (IData)(vlTOPp->adbg_top__DOT____Vcellout__i_dbg_axi__top_inhibit_o));
    vlTOPp->cpu_data_o[0U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U];
    vlTOPp->cpu_data_o[1U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U];
    vlTOPp->cpu_data_o[2U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U];
    vlTOPp->cpu_data_o[3U] = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U];
    vlTOPp->adbg_top__DOT__input_shift_reg = __Vdly__adbg_top__DOT__input_shift_reg;
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1 
        = ((IData)(vlTOPp->trstn_i) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2 
        = ((IData)(vlTOPp->trstn_i) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck 
        = ((IData)(vlTOPp->trstn_i) ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff)
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__burst_instruction 
        = ((3U == (0xfU & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x3bU)))) | (7U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlTOPp->adbg_top__DOT__input_shift_reg 
                                                               >> 0x3bU)))));
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1 
        = ((IData)(vlTOPp->trstn_i) & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync));
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff 
        = ((IData)(vlTOPp->trstn_i) ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)
            : 0U);
}

VL_INLINE_OPT void Vadbg_top::_combo__TOP__5(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_combo__TOP__5\n"); );
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
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr 
        = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en) 
           & (0U == (7U & (IData)((vlTOPp->adbg_top__DOT__input_shift_reg 
                                   >> 0x38U)))));
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
}

VL_INLINE_OPT void Vadbg_top::_sequent__TOP__6(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_sequent__TOP__6\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
        = vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg 
                = vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg = 0ULL;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg 
                = vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int;
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg 
                = ((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)
                    ? (0U != (IData)(vlTOPp->axi_master_b_resp))
                    : (0U != (IData)(vlTOPp->axi_master_r_resp)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if ((1U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (1U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((1U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xeU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((2U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (2U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((2U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xdU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((4U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (4U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((4U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xbU & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((8U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (8U | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((8U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (7U & (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu 
        = ((IData)(vlTOPp->axi_aresetn) ? (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff)
            : 0U);
    vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
        = vlTOPp->__Vdly__adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
}

VL_INLINE_OPT void Vadbg_top::_combo__TOP__7(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_combo__TOP__7\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->cpu_stall_o = (((IData)(vlTOPp->cpu_bp_i) 
                            | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)) 
                           | (IData)(vlTOPp->adbg_top__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
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
}

VL_INLINE_OPT void Vadbg_top::_sequent__TOP__8(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_sequent__TOP__8\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->trstn_i) {
        if (((IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg 
                = (1U & (~ (IData)(vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__rd_op)));
        }
    } else {
        vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg = 0U;
    }
    vlTOPp->adbg_top__DOT__i_dbg_axi__DOT__biu_ready 
        = vlTOPp->__Vdly__adbg_top__DOT__i_dbg_axi__DOT__biu_ready;
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
}

VL_INLINE_OPT void Vadbg_top::_multiclk__TOP__9(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_multiclk__TOP__9\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vadbg_top::_combo__TOP__10(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_combo__TOP__10\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vadbg_top::_eval(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_eval\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
         | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->tck_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_i))) 
         | ((~ (IData)(vlTOPp->trstn_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_i)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if ((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
         | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if ((((IData)(vlTOPp->tck_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_i))) 
         | ((~ (IData)(vlTOPp->trstn_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_i)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
           | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn))) 
          | ((IData)(vlTOPp->tck_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_i)))) 
         | ((~ (IData)(vlTOPp->trstn_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_i)))) {
        vlTOPp->_multiclk__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__axi_aclk = vlTOPp->axi_aclk;
    vlTOPp->__Vclklast__TOP__axi_aresetn = vlTOPp->axi_aresetn;
    vlTOPp->__Vclklast__TOP__tck_i = vlTOPp->tck_i;
    vlTOPp->__Vclklast__TOP__trstn_i = vlTOPp->trstn_i;
}

VL_INLINE_OPT QData Vadbg_top::_change_request(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_change_request\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vadbg_top::_change_request_1(Vadbg_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_change_request_1\n"); );
    Vadbg_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadbg_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadbg_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((tck_i & 0xfeU))) {
        Verilated::overWidthError("tck_i");}
    if (VL_UNLIKELY((tdi_i & 0xfeU))) {
        Verilated::overWidthError("tdi_i");}
    if (VL_UNLIKELY((trstn_i & 0xfeU))) {
        Verilated::overWidthError("trstn_i");}
    if (VL_UNLIKELY((shift_dr_i & 0xfeU))) {
        Verilated::overWidthError("shift_dr_i");}
    if (VL_UNLIKELY((pause_dr_i & 0xfeU))) {
        Verilated::overWidthError("pause_dr_i");}
    if (VL_UNLIKELY((update_dr_i & 0xfeU))) {
        Verilated::overWidthError("update_dr_i");}
    if (VL_UNLIKELY((capture_dr_i & 0xfeU))) {
        Verilated::overWidthError("capture_dr_i");}
    if (VL_UNLIKELY((debug_select_i & 0xfeU))) {
        Verilated::overWidthError("debug_select_i");}
    if (VL_UNLIKELY((cpu_bp_i & 0xf0U))) {
        Verilated::overWidthError("cpu_bp_i");}
    if (VL_UNLIKELY((cpu_ack_i & 0xf0U))) {
        Verilated::overWidthError("cpu_ack_i");}
    if (VL_UNLIKELY((axi_aclk & 0xfeU))) {
        Verilated::overWidthError("axi_aclk");}
    if (VL_UNLIKELY((axi_aresetn & 0xfeU))) {
        Verilated::overWidthError("axi_aresetn");}
    if (VL_UNLIKELY((axi_master_aw_ready & 0xfeU))) {
        Verilated::overWidthError("axi_master_aw_ready");}
    if (VL_UNLIKELY((axi_master_ar_ready & 0xfeU))) {
        Verilated::overWidthError("axi_master_ar_ready");}
    if (VL_UNLIKELY((axi_master_w_ready & 0xfeU))) {
        Verilated::overWidthError("axi_master_w_ready");}
    if (VL_UNLIKELY((axi_master_r_valid & 0xfeU))) {
        Verilated::overWidthError("axi_master_r_valid");}
    if (VL_UNLIKELY((axi_master_r_resp & 0xfcU))) {
        Verilated::overWidthError("axi_master_r_resp");}
    if (VL_UNLIKELY((axi_master_r_last & 0xfeU))) {
        Verilated::overWidthError("axi_master_r_last");}
    if (VL_UNLIKELY((axi_master_r_id & 0xf8U))) {
        Verilated::overWidthError("axi_master_r_id");}
    if (VL_UNLIKELY((axi_master_r_user & 0xc0U))) {
        Verilated::overWidthError("axi_master_r_user");}
    if (VL_UNLIKELY((axi_master_b_valid & 0xfeU))) {
        Verilated::overWidthError("axi_master_b_valid");}
    if (VL_UNLIKELY((axi_master_b_resp & 0xfcU))) {
        Verilated::overWidthError("axi_master_b_resp");}
    if (VL_UNLIKELY((axi_master_b_id & 0xf8U))) {
        Verilated::overWidthError("axi_master_b_id");}
    if (VL_UNLIKELY((axi_master_b_user & 0xc0U))) {
        Verilated::overWidthError("axi_master_b_user");}
}
#endif  // VL_DEBUG
