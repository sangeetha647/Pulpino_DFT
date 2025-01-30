// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadv_dbg_if.h for the primary calling header

#include "Vadv_dbg_if.h"
#include "Vadv_dbg_if__Syms.h"

//==========

void Vadv_dbg_if::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadv_dbg_if::eval\n"); );
    Vadv_dbg_if__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("adv_dbg_if.sv", 11, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadv_dbg_if::_eval_initial_loop(Vadv_dbg_if__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("adv_dbg_if.sv", 11, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vadv_dbg_if::_sequent__TOP__2(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_sequent__TOP__2\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
    vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_en) {
            vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync)));
        }
    } else {
        vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en) {
            vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync)));
        }
    } else {
        vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = 0U;
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state 
        = ((IData)(vlTOPp->axi_aresetn) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2q 
        = ((IData)(vlTOPp->axi_aresetn) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2));
    if (vlTOPp->axi_aresetn) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state 
            = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__next_fsm_state;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
               & 1U);
        vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
            = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1) 
               & 1U);
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1) 
               & 1U);
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync) 
               & 1U);
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 
            = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync) 
               & 1U);
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__axi_fsm_state = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q = 0U;
        vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff2 = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync_wbff1 = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 = 0U;
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
}

VL_INLINE_OPT void Vadv_dbg_if::_sequent__TOP__3(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_sequent__TOP__3\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count;
    CData/*5:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    CData/*0:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    IData/*31:0*/ __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg;
    WData/*64:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[3];
    IData/*31:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    IData/*31:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    IData/*31:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp3[3];
    QData/*63:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg;
    QData/*32:0*/ __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error;
    // Body
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U];
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U];
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U];
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count;
    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
        = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg;
    vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir 
        = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir;
    __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg 
        = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg;
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__internal_register_select 
                = (7U & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                 >> 0x38U)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__internal_register_select = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpusel_ld_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select 
                = (0xfU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x37U)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__cpu_select = 0U;
    }
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__TAP_state 
        = ((IData)(vlTOPp->trstn_pad_i) ? (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state)
            : 0xfU);
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_ld_en) {
            VL_EXTEND_WQ(65,64, __Vtemp1, vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg);
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_data_sel) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[2U];
            } else {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = __Vtemp1[0U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = __Vtemp1[1U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = __Vtemp1[2U];
            }
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__out_reg_shift_en) {
                VL_EXTEND_WQ(65,64, __Vtemp3, (((QData)((IData)(
                                                                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U])) 
                                                     >> 1U))));
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
                    = __Vtemp3[0U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
                    = __Vtemp3[1U];
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
                    = __Vtemp3[2U];
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] = 0U;
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] = 0U;
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__str_sync = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__be_dec;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__address_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_clr) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_en) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc;
            } else {
                if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en) {
                    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_clr) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_en) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__new_crc;
            } else {
                if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_shift_en) {
                    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc = 0xffffffffU;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_ct_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__word_count = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_ct_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_word_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__word_count = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q))) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
            }
        }
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q 
            = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2;
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count)));
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q))) {
                vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready = 1U;
            }
        }
    } else {
        vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready = 1U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel)
                    ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)
                    : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg);
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                    = (0x7fffffffU & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                                      >> 1U));
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg 
                = (1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__operation) 
                            >> 2U)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            if ((1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op)))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg 
                    = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_i;
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg = 0ULL;
    }
    if (vlTOPp->trstn_pad_i) {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state 
            = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_next_state;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state 
            = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_next_state;
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__module_state = 0U;
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__module_state = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            if ((1U & (~ ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__operation) 
                          >> 2U)))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg 
                    = (((IData)(vlTOPp->tdi_pad_i) 
                        << 0x1fU) | (0x7fffffffU & (IData)(
                                                           (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                            >> 0x21U))));
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__intreg_ld_en) 
             & (~ (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                           >> 0x39U))))) {
            if ((1U & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                               >> 0x2eU)))) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                    = (0x1fffffffeULL & __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error);
            }
        } else {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__error_reg_en) 
                 & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error)))) {
                if ((1U & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg) 
                           | (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))))) {
                    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                        = (1ULL | __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error);
                } else {
                    if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) {
                        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                            = ((1ULL & __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error) 
                               | ((QData)((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter)) 
                                  << 1U));
                    }
                }
            } else {
                if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
                     & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error)))) {
                    __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                        = ((1ULL & __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error) 
                           | ((QData)((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter)) 
                              << 1U));
                }
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error = 0ULL;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_rst) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count = 0U;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_ct_en) {
                __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count)));
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__op_reg_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__operation 
                = (0xfU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x3bU)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__operation = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select) 
               & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                          >> 0x3fU))) & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_dr)) 
             & (~ (IData)((0U != (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit)))))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg 
                = (0x1fU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                    >> 0x3aU)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_id_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__debug_select) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr))) {
            __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                = (((QData)((IData)(vlTOPp->tdi_pad_i)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                    >> 1U)));
        }
    } else {
        __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg = 0ULL;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset) {
            vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg = 0U;
        } else {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select) 
                 & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg = 0U;
            } else {
                if (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_select) 
                     & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr))) {
                    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg 
                        = vlTOPp->tdi_pad_i;
                }
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__bypass_reg = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset) {
            vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir = 0U;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_ir) {
                vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir = 5U;
            } else {
                if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir) {
                    vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir 
                        = (((IData)(vlTOPp->tdi_pad_i) 
                            << 3U) | (7U & ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir) 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir = 0U;
    }
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset) {
            __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg = 0x249511c3U;
        } else {
            if (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select) 
                 & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__capture_dr))) {
                __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg = 0x249511c3U;
            } else {
                if (((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_select) 
                     & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr))) {
                    __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg 
                        = (((IData)(vlTOPp->tdi_pad_i) 
                            << 0x1fU) | (0x7fffffffU 
                                         & (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg = 0x249511c3U;
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U] 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U] 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[1U];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U] 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[2U];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_crc_i__DOT__crc;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__bit_count;
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg 
        = __Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__idcode_reg;
    vlTOPp->axi_master_w_strb = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__sel_reg;
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
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__address_counter 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__address_counter = 0U;
    }
    vlTOPp->axi_master_ar_addr = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
    vlTOPp->axi_master_aw_addr = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__addr_reg;
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
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2 
        = ((IData)(vlTOPp->trstn_pad_i) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2q 
        = ((IData)(vlTOPp->trstn_pad_i) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2));
    if (vlTOPp->trstn_pad_i) {
        if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (1U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xeU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (1U & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                        >> 0x28U))));
            }
        }
        if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (2U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xdU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (2U & ((IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                         >> 0x29U)) 
                                << 1U)));
            }
        }
        if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (4U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((0xbU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (4U & ((IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                         >> 0x2aU)) 
                                << 2U)));
            }
        }
        if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                = (8U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        } else {
            if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = ((7U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg)) 
                       | (8U & ((IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                         >> 0x2bU)) 
                                << 3U)));
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = 0U;
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
    vlTOPp->axi_master_w_data = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_in_reg;
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
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__op_reg_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__operation 
                = (0xfU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x3bU)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__operation = 0U;
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[0U] 
        = (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U] 
        = ((0xfffffffeU & vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_from_internal_reg[1U]) 
           | (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__internal_reg_error 
                      >> 0x20U)));
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__addr_ct_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_addr_counter;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__address_counter = 0U;
    }
    vlTOPp->cpu_addr_o = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_addr_o;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit 
        = ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit)) 
           | ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_cpu_or1k__top_inhibit_o) 
              << 1U));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit 
        = ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__module_inhibit)) 
           | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT____Vcellout__i_dbg_axi__top_inhibit_o));
    vlTOPp->cpu_data_o[0U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[0U];
    vlTOPp->cpu_data_o[1U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[1U];
    vlTOPp->cpu_data_o[2U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[2U];
    vlTOPp->cpu_data_o[3U] = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT____Vcellout__or1k_biu_i__cpu_data_o[3U];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
        = __Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1 
        = ((IData)(vlTOPp->trstn_pad_i) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff2 
        = ((IData)(vlTOPp->trstn_pad_i) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck 
        = ((IData)(vlTOPp->trstn_pad_i) ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff)
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__burst_instruction 
        = ((3U == (0xfU & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x3bU)))) | (7U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                                               >> 0x3bU)))));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync_tff1 
        = ((IData)(vlTOPp->trstn_pad_i) & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync));
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff 
        = ((IData)(vlTOPp->trstn_pad_i) ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)
            : 0U);
}

VL_INLINE_OPT void Vadv_dbg_if::_combo__TOP__4(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_combo__TOP__4\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg 
        = (1U & ((IData)(vlTOPp->test_mode_i) ? (IData)(vlTOPp->tck_pad_i)
                  : (~ (IData)(vlTOPp->tck_pad_i))));
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
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->tms_pad_i) 
                             << 4U) | (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__TAP_state));
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state 
        = vlTOPp->__Vtable1_adv_dbg_if__DOT__cluster_tap_i__DOT__next_TAP_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_to_biu 
        = (((QData)((IData)(vlTOPp->tdi_pad_i)) << 0x3fU) 
           | (0x7fffffffffffffffULL & (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                       >> 1U)));
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
}

VL_INLINE_OPT void Vadv_dbg_if::_sequent__TOP__6(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_sequent__TOP__6\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync 
        = vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__rdy_sync;
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_o_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__swapped_data_out;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__data_out_reg = 0ULL;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg 
                = vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_data_int;
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if (vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_en) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg 
                = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg)
                    ? (0U != (IData)(vlTOPp->axi_master_b_resp))
                    : (0U != (IData)(vlTOPp->axi_master_r_resp)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__err_reg = 0U;
    }
    if (vlTOPp->axi_aresetn) {
        if ((1U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (1U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((1U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xeU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((2U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (2U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((2U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xdU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((4U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (4U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((4U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (0xbU & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
        if ((8U & (IData)(vlTOPp->cpu_bp_i))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                = (8U | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        } else {
            if ((8U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu))) {
                vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp 
                    = (7U & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = 0U;
    }
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu 
        = ((IData)(vlTOPp->axi_aresetn) ? (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff)
            : 0U);
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
        = vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff;
}

VL_INLINE_OPT void Vadv_dbg_if::_sequent__TOP__7(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_sequent__TOP__7\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tdo_pad_o = ((IData)(vlTOPp->trstn_pad_i) 
                         & (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__tdo_mux_out));
    vlTOPp->tdo_padoe_o = ((IData)(vlTOPp->trstn_pad_i) 
                           & ((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_ir) 
                              | (IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__shift_dr)));
    if (vlTOPp->trstn_pad_i) {
        if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__test_logic_reset) {
            vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir = 2U;
        } else {
            if (vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__update_ir) {
                vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir 
                    = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir;
            }
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__latched_jtag_ir = 2U;
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
}

VL_INLINE_OPT void Vadv_dbg_if::_combo__TOP__8(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_combo__TOP__8\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->cpu_stall_o = (((IData)(vlTOPp->cpu_bp_i) 
                            | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)) 
                           | (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
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
}

VL_INLINE_OPT void Vadv_dbg_if::_sequent__TOP__9(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_sequent__TOP__9\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir 
        = vlTOPp->__Vdly__adv_dbg_if__DOT__cluster_tap_i__DOT__jtag_ir;
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
    if (vlTOPp->trstn_pad_i) {
        if (((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_strobe) 
             & (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready))) {
            vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg 
                = (1U & (~ (IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__rd_op)));
        }
    } else {
        vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__axi_biu_i__DOT__wr_reg = 0U;
    }
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
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready 
        = vlTOPp->__Vdly__adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__biu_ready;
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
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr 
        = ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en) 
           & (0U == (7U & (IData)((vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__input_shift_reg 
                                   >> 0x38U)))));
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
}

VL_INLINE_OPT void Vadv_dbg_if::_multiclk__TOP__10(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_multiclk__TOP__10\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vadv_dbg_if::_combo__TOP__11(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_combo__TOP__11\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg));
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
    vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_data_in 
        = (1U & ((IData)(vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : vlTOPp->adv_dbg_if__DOT__dbg_module_i__DOT__i_dbg_axi__DOT__data_out_shift_reg[0U]));
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

VL_INLINE_OPT void Vadv_dbg_if::_multiclk__TOP__12(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_multiclk__TOP__12\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vadv_dbg_if::_eval(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_eval\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
         | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
         | ((~ (IData)(vlTOPp->trstn_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_pad_i)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    if ((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
         | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg))) 
         | ((~ (IData)(vlTOPp->trstn_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_pad_i)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    if ((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
         | ((~ (IData)(vlTOPp->trstn_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_pad_i)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((((IData)(vlTOPp->axi_aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axi_aclk))) 
           | ((~ (IData)(vlTOPp->axi_aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__axi_aresetn))) 
          | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
         | ((~ (IData)(vlTOPp->trstn_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_pad_i)))) {
        vlTOPp->_multiclk__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    if (((((IData)(vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg))) 
          | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
         | ((~ (IData)(vlTOPp->trstn_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__trstn_pad_i)))) {
        vlTOPp->_multiclk__TOP__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__axi_aclk = vlTOPp->axi_aclk;
    vlTOPp->__Vclklast__TOP__axi_aresetn = vlTOPp->axi_aresetn;
    vlTOPp->__Vclklast__TOP__tck_pad_i = vlTOPp->tck_pad_i;
    vlTOPp->__Vclklast__TOP__trstn_pad_i = vlTOPp->trstn_pad_i;
    vlTOPp->__Vclklast__TOP__adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg 
        = vlTOPp->adv_dbg_if__DOT__cluster_tap_i__DOT__s_clk_neg;
}

VL_INLINE_OPT QData Vadv_dbg_if::_change_request(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_change_request\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vadv_dbg_if::_change_request_1(Vadv_dbg_if__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_change_request_1\n"); );
    Vadv_dbg_if* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadv_dbg_if::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadv_dbg_if::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((tms_pad_i & 0xfeU))) {
        Verilated::overWidthError("tms_pad_i");}
    if (VL_UNLIKELY((tck_pad_i & 0xfeU))) {
        Verilated::overWidthError("tck_pad_i");}
    if (VL_UNLIKELY((trstn_pad_i & 0xfeU))) {
        Verilated::overWidthError("trstn_pad_i");}
    if (VL_UNLIKELY((tdi_pad_i & 0xfeU))) {
        Verilated::overWidthError("tdi_pad_i");}
    if (VL_UNLIKELY((test_mode_i & 0xfeU))) {
        Verilated::overWidthError("test_mode_i");}
    if (VL_UNLIKELY((cpu_clk_i & 0xf0U))) {
        Verilated::overWidthError("cpu_clk_i");}
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
