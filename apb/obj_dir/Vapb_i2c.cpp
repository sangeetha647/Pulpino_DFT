// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_i2c.h for the primary calling header

#include "Vapb_i2c.h"
#include "Vapb_i2c__Syms.h"

//==========

void Vapb_i2c::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_i2c::eval\n"); );
    Vapb_i2c__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_i2c.sv", 10, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_i2c::_eval_initial_loop(Vapb_i2c__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_i2c.sv", 10, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_i2c::_sequent__TOP__3(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_sequent__TOP__3\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__apb_i2c__DOT__r_cmd;
    CData/*7:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__sr;
    CData/*2:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt;
    CData/*3:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd;
    CData/*0:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd;
    CData/*4:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state;
    CData/*0:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    CData/*1:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    CData/*1:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    CData/*0:0*/ __Vdly__sda_padoen_o;
    CData/*0:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    SData/*15:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    IData/*17:0*/ __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    // Body
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    __Vdly__sda_padoen_o = vlTOPp->sda_padoen_o;
    vlTOPp->__Vdly__scl_padoen_o = vlTOPp->scl_padoen_o;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd;
    __Vdly__apb_i2c__DOT__r_cmd = vlTOPp->apb_i2c__DOT__r_cmd;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__dcnt;
    __Vdly__apb_i2c__DOT__byte_controller__DOT__sr 
        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__sr;
    if (vlTOPp->HRESETn) {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
            = ((2U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA) 
                      << 1U)) | (IData)(vlTOPp->sda_pad_i));
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
            = ((2U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL) 
                      << 1U)) | (IData)(vlTOPp->scl_pad_i));
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA = 0U;
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt)))))) {
            vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
                = ((6U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                          << 1U)) | (1U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = 7U;
    }
    if (vlTOPp->HRESETn) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt)))))) {
            vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
                = ((6U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                          << 1U)) | (1U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = 7U;
    }
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = ((IData)(vlTOPp->HRESETn) & ((((IData)(vlTOPp->scl_padoen_o) 
                                         & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen))) 
                                        & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))) 
                                       | ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) 
                                          & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)))));
    vlTOPp->apb_i2c__DOT__tip = ((IData)(vlTOPp->HRESETn) 
                                 & (((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                     >> 5U) | ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                               >> 4U)));
    vlTOPp->interrupt_o = ((IData)(vlTOPp->HRESETn) 
                           & ((IData)(vlTOPp->apb_i2c__DOT__irq_flag) 
                              & ((IData)(vlTOPp->apb_i2c__DOT__r_ctrl) 
                                 >> 6U)));
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt 
            = ((0x80U & (IData)(vlTOPp->apb_i2c__DOT__r_ctrl))
                ? (0x3fffU & ((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt))
                               ? ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt) 
                                  - (IData)(1U)) : 
                              (0xfffU & ((IData)(vlTOPp->apb_i2c__DOT__r_pre) 
                                         >> 2U)))) : 0U);
        vlTOPp->apb_i2c__DOT__i2c_busy = ((((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition) 
                                            | (IData)(vlTOPp->apb_i2c__DOT__i2c_busy)) 
                                           & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition))) 
                                          & 1U);
        vlTOPp->apb_i2c__DOT__al = (((IData)(vlTOPp->apb_i2c__DOT__i2c_al) 
                                     | ((IData)(vlTOPp->apb_i2c__DOT__al) 
                                        & (~ ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                              >> 7U)))) 
                                    & 1U);
        vlTOPp->apb_i2c__DOT__rxack = ((IData)(vlTOPp->apb_i2c__DOT__s_irxack) 
                                       & 1U);
        vlTOPp->apb_i2c__DOT__irq_flag = (((((IData)(vlTOPp->apb_i2c__DOT__s_done) 
                                             | (IData)(vlTOPp->apb_i2c__DOT__i2c_al)) 
                                            | (IData)(vlTOPp->apb_i2c__DOT__irq_flag)) 
                                           & (~ (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) 
                                          & 1U);
    } else {
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt = 0U;
        vlTOPp->apb_i2c__DOT__i2c_busy = 0U;
        vlTOPp->apb_i2c__DOT__al = 0U;
        vlTOPp->apb_i2c__DOT__rxack = 0U;
        vlTOPp->apb_i2c__DOT__irq_flag = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if (((IData)(vlTOPp->apb_i2c__DOT__s_done) 
                 | (IData)(vlTOPp->apb_i2c__DOT__i2c_al))) {
                __Vdly__apb_i2c__DOT__r_cmd = (0xfU 
                                               & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
            }
            __Vdly__apb_i2c__DOT__r_cmd = (0xf9U & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
            __Vdly__apb_i2c__DOT__r_cmd = (0xfeU & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((4U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        if ((5U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                            if ((0x80U & (IData)(vlTOPp->apb_i2c__DOT__r_ctrl))) {
                                __Vdly__apb_i2c__DOT__r_cmd 
                                    = (0xffU & vlTOPp->PWDATA);
                            }
                        }
                    }
                }
            }
        } else {
            if (((IData)(vlTOPp->apb_i2c__DOT__s_done) 
                 | (IData)(vlTOPp->apb_i2c__DOT__i2c_al))) {
                __Vdly__apb_i2c__DOT__r_cmd = (0xfU 
                                               & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
            }
            __Vdly__apb_i2c__DOT__r_cmd = (0xf9U & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
            __Vdly__apb_i2c__DOT__r_cmd = (0xfeU & (IData)(__Vdly__apb_i2c__DOT__r_cmd));
        }
    } else {
        __Vdly__apb_i2c__DOT__r_cmd = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld) {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt = 7U;
        } else {
            if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift) {
                __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt 
                    = (7U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__dcnt) 
                             - (IData)(1U)));
            }
        }
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld) {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__sr 
                = vlTOPp->apb_i2c__DOT__r_tx;
        } else {
            if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift) {
                __Vdly__apb_i2c__DOT__byte_controller__DOT__sr 
                    = ((0xfeU & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__sr) 
                                 << 1U)) | (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_rxd));
            }
        }
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__sr = 0U;
    }
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition 
        = ((IData)(vlTOPp->HRESETn) & (((~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA)) 
                                        & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSDA)) 
                                       & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
    vlTOPp->apb_i2c__DOT__s_status = (((IData)(vlTOPp->apb_i2c__DOT__rxack) 
                                       << 7U) | (((IData)(vlTOPp->apb_i2c__DOT__i2c_busy) 
                                                  << 6U) 
                                                 | (((IData)(vlTOPp->apb_i2c__DOT__al) 
                                                     << 5U) 
                                                    | (((IData)(vlTOPp->apb_i2c__DOT__tip) 
                                                        << 1U) 
                                                       | (IData)(vlTOPp->apb_i2c__DOT__irq_flag)))));
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    if ((4U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) {
                        vlTOPp->apb_i2c__DOT__r_tx 
                            = (0xffU & vlTOPp->PWDATA);
                    }
                }
            }
        }
    } else {
        vlTOPp->apb_i2c__DOT__r_tx = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_i2c__DOT__i2c_al) {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 0U;
            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd = 0U;
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift = 0U;
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld = 0U;
            vlTOPp->apb_i2c__DOT__s_done = 0U;
            __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0U;
            vlTOPp->apb_i2c__DOT__s_irxack = 0U;
        } else {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd 
                = (1U & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__sr) 
                         >> 7U));
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift = 0U;
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld = 0U;
            vlTOPp->apb_i2c__DOT__s_done = 0U;
            if ((0U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__go) {
                    if ((0x80U & (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) {
                        __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 1U;
                        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 1U;
                    } else {
                        if ((0x20U & (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) {
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 2U;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 8U;
                        } else {
                            if ((0x10U & (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 4U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 4U;
                            } else {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0x10U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 2U;
                            }
                        }
                    }
                    vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld = 1U;
                }
            } else {
                if ((1U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                    if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack) {
                        if ((0x20U & (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) {
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 2U;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 8U;
                        } else {
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 4U;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 4U;
                        }
                        vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld = 1U;
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                        if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack) {
                            if ((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__dcnt))) {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 4U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 4U;
                                vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift = 1U;
                            } else {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 8U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 8U;
                            }
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                            if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack) {
                                if ((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__dcnt))) {
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 2U;
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 8U;
                                } else {
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 8U;
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 4U;
                                }
                                vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift = 1U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd 
                                    = (1U & ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                             >> 3U));
                            }
                        } else {
                            if ((8U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                                if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack) {
                                    if ((0x40U & (IData)(vlTOPp->apb_i2c__DOT__r_cmd))) {
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0x10U;
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 2U;
                                    } else {
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0U;
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 0U;
                                        vlTOPp->apb_i2c__DOT__s_done = 1U;
                                    }
                                    vlTOPp->apb_i2c__DOT__s_irxack 
                                        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_rxd;
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd = 1U;
                                } else {
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd 
                                        = (1U & ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                                 >> 3U));
                                }
                            } else {
                                if ((0x10U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state))) {
                                    if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack) {
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0U;
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 0U;
                                        vlTOPp->apb_i2c__DOT__s_done = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd = 0U;
        __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd = 0U;
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__shift = 0U;
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__ld = 0U;
        vlTOPp->apb_i2c__DOT__s_done = 0U;
        __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state = 0U;
        vlTOPp->apb_i2c__DOT__s_irxack = 0U;
    }
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__c_state 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__c_state;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__dcnt 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__dcnt;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__sr 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__sr;
    vlTOPp->apb_i2c__DOT__r_cmd = __Vdly__apb_i2c__DOT__r_cmd;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__go 
        = (1U & (((((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                    >> 5U) | ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                              >> 4U)) | ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                         >> 6U)) & 
                 (~ (IData)(vlTOPp->apb_i2c__DOT__s_done))));
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_i2c__DOT__i2c_al) {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 0U;
            vlTOPp->__Vdly__scl_padoen_o = 1U;
            __Vdly__sda_padoen_o = 1U;
            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
        } else {
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 0U;
            if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                if (((((((((0U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        vlTOPp->__Vdly__scl_padoen_o 
                            = vlTOPp->scl_padoen_o;
                        __Vdly__sda_padoen_o = vlTOPp->sda_padoen_o;
                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                            = ((8U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                ? ((4U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                    ? 0U : ((2U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                             ? 0U : 
                                            ((1U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                              ? 0U : 0x200U)))
                                : ((4U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                    ? ((2U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                        ? 0U : ((1U 
                                                 & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                                 ? 0U
                                                 : 0x2000U))
                                    : ((2U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                        ? ((1U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                            ? 0U : 0x20U)
                                        : ((1U & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd))
                                            ? 1U : 0U))));
                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else {
                        if ((1U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            vlTOPp->__Vdly__scl_padoen_o 
                                = vlTOPp->scl_padoen_o;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 2U;
                            __Vdly__sda_padoen_o = 1U;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                        } else {
                            if ((2U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 4U;
                                vlTOPp->__Vdly__scl_padoen_o = 1U;
                                __Vdly__sda_padoen_o = 1U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                            } else {
                                if ((4U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 8U;
                                    vlTOPp->__Vdly__scl_padoen_o = 1U;
                                    __Vdly__sda_padoen_o = 0U;
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                } else {
                                    if ((8U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10U;
                                        vlTOPp->__Vdly__scl_padoen_o = 1U;
                                        __Vdly__sda_padoen_o = 0U;
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                    } else {
                                        if ((0x10U 
                                             == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                                            vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 1U;
                                            vlTOPp->__Vdly__scl_padoen_o = 0U;
                                            __Vdly__sda_padoen_o = 0U;
                                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                        } else {
                                            if ((0x20U 
                                                 == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x40U;
                                                vlTOPp->__Vdly__scl_padoen_o = 0U;
                                                __Vdly__sda_padoen_o = 0U;
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                            } else {
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x80U;
                                                vlTOPp->__Vdly__scl_padoen_o = 1U;
                                                __Vdly__sda_padoen_o = 0U;
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x80U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                               | (0x100U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x200U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                             | (0x400U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                            | (0x800U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                           | (0x1000U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (0x2000U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (0x4000U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                        if ((0x80U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x100U;
                            vlTOPp->__Vdly__scl_padoen_o = 1U;
                            __Vdly__sda_padoen_o = 0U;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                        } else {
                            if ((0x100U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                                vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 1U;
                                vlTOPp->__Vdly__scl_padoen_o = 1U;
                                __Vdly__sda_padoen_o = 1U;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                            } else {
                                if ((0x200U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x400U;
                                    vlTOPp->__Vdly__scl_padoen_o = 0U;
                                    __Vdly__sda_padoen_o = 1U;
                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                } else {
                                    if ((0x400U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x800U;
                                        vlTOPp->__Vdly__scl_padoen_o = 1U;
                                        __Vdly__sda_padoen_o = 1U;
                                        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                    } else {
                                        if ((0x800U 
                                             == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x1000U;
                                            vlTOPp->__Vdly__scl_padoen_o = 1U;
                                            __Vdly__sda_padoen_o = 1U;
                                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                        } else {
                                            if ((0x1000U 
                                                 == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                                                vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 1U;
                                                vlTOPp->__Vdly__scl_padoen_o = 0U;
                                                __Vdly__sda_padoen_o = 1U;
                                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                            } else {
                                                if (
                                                    (0x2000U 
                                                     == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x4000U;
                                                    vlTOPp->__Vdly__scl_padoen_o = 0U;
                                                    __Vdly__sda_padoen_o 
                                                        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd;
                                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                                } else {
                                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x8000U;
                                                    vlTOPp->__Vdly__scl_padoen_o = 1U;
                                                    __Vdly__sda_padoen_o 
                                                        = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd;
                                                    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x8000U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10000U;
                            vlTOPp->__Vdly__scl_padoen_o = 1U;
                            __Vdly__sda_padoen_o = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd;
                            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 1U;
                        } else {
                            if ((0x10000U == vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                                vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 1U;
                                vlTOPp->__Vdly__scl_padoen_o = 0U;
                                __Vdly__sda_padoen_o 
                                    = vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd;
                                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_ack = 0U;
        vlTOPp->__Vdly__scl_padoen_o = 1U;
        __Vdly__sda_padoen_o = 1U;
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
    }
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_txd 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__core_txd;
    vlTOPp->apb_i2c__DOT__i2c_al = ((IData)(vlTOPp->HRESETn) 
                                    & ((((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk) 
                                         & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA))) 
                                        & (IData)(vlTOPp->sda_padoen_o)) 
                                       | (((0U != vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                           & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition)) 
                                          & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop)))));
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    vlTOPp->sda_padoen_o = __Vdly__sda_padoen_o;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition 
        = ((IData)(vlTOPp->HRESETn) & (((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA) 
                                        & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSDA))) 
                                       & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop 
                = (2U == (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd));
        }
    } else {
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = 0U;
    }
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_cmd 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__core_cmd;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSDA 
        = (1U & ((~ (IData)(vlTOPp->HRESETn)) | (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA)));
    if (vlTOPp->HRESETn) {
        if ((1U & (((~ (IData)((0U != (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt)))) 
                    | (~ ((IData)(vlTOPp->apb_i2c__DOT__r_ctrl) 
                          >> 7U))) | (((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSCL) 
                                       & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))) 
                                      & (IData)(vlTOPp->scl_padoen_o))))) {
            __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                = vlTOPp->apb_i2c__DOT__r_pre;
            vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
        } else {
            if (vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) {
                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                    = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
                vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
            } else {
                __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                    = (0xffffU & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                                  - (IData)(1U)));
                vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
            }
        }
    } else {
        __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt = 0U;
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
    }
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                vlTOPp->apb_i2c__DOT__r_pre = (0xffffU 
                                               & vlTOPp->PWDATA);
            }
        }
    } else {
        vlTOPp->apb_i2c__DOT__r_pre = 0U;
    }
    if (vlTOPp->HRESETn) {
        if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
             & (IData)(vlTOPp->PWRITE))) {
            if ((0U != (0xfU & ((IData)(vlTOPp->PADDR) 
                                >> 2U)))) {
                if ((1U == (0xfU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U)))) {
                    vlTOPp->apb_i2c__DOT__r_ctrl = 
                        (0xffU & vlTOPp->PWDATA);
                }
            }
        }
    } else {
        vlTOPp->apb_i2c__DOT__r_ctrl = 0U;
    }
}

VL_INLINE_OPT void Vapb_i2c::_sequent__TOP__5(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_sequent__TOP__5\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen 
        = vlTOPp->scl_padoen_o;
    if (((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         & (~ (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSCL)))) {
        vlTOPp->apb_i2c__DOT__byte_controller__DOT__core_rxd 
            = vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    }
}

VL_INLINE_OPT void Vapb_i2c::_combo__TOP__6(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_combo__TOP__6\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PRDATA = ((0x20U & (IData)(vlTOPp->PADDR))
                       ? 0U : ((0x10U & (IData)(vlTOPp->PADDR))
                                ? ((8U & (IData)(vlTOPp->PADDR))
                                    ? 0U : ((4U & (IData)(vlTOPp->PADDR))
                                             ? (IData)(vlTOPp->apb_i2c__DOT__r_cmd)
                                             : (IData)(vlTOPp->apb_i2c__DOT__r_tx)))
                                : ((8U & (IData)(vlTOPp->PADDR))
                                    ? ((4U & (IData)(vlTOPp->PADDR))
                                        ? (IData)(vlTOPp->apb_i2c__DOT__s_status)
                                        : (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__sr))
                                    : ((4U & (IData)(vlTOPp->PADDR))
                                        ? (IData)(vlTOPp->apb_i2c__DOT__r_ctrl)
                                        : (IData)(vlTOPp->apb_i2c__DOT__r_pre)))));
}

VL_INLINE_OPT void Vapb_i2c::_sequent__TOP__7(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_sequent__TOP__7\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->scl_padoen_o = vlTOPp->__Vdly__scl_padoen_o;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA 
        = (1U & ((~ (IData)(vlTOPp->HRESETn)) | (((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                                                       >> 1U))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA)))) 
                                                 | (((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA) 
                                                     >> 2U) 
                                                    & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA)))));
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSCL 
        = (1U & ((~ (IData)(vlTOPp->HRESETn)) | (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA 
        = vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA;
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL 
        = (1U & ((~ (IData)(vlTOPp->HRESETn)) | (((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                                                       >> 1U))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL)))) 
                                                 | (((IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL) 
                                                     >> 2U) 
                                                    & (IData)(vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL)))));
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL 
        = vlTOPp->__Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL;
}

void Vapb_i2c::_eval(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_eval\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_i2c::_change_request(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_change_request\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_i2c::_change_request_1(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_change_request_1\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_i2c::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((scl_pad_i & 0xfeU))) {
        Verilated::overWidthError("scl_pad_i");}
    if (VL_UNLIKELY((sda_pad_i & 0xfeU))) {
        Verilated::overWidthError("sda_pad_i");}
}
#endif  // VL_DEBUG
