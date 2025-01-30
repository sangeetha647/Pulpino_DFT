// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_i2c.h for the primary calling header

#include "Vapb_i2c.h"
#include "Vapb_i2c__Syms.h"

//==========

VL_CTOR_IMP(Vapb_i2c) {
    Vapb_i2c__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_i2c__Syms(this, name());
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_i2c::__Vconfigure(Vapb_i2c__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_i2c::~Vapb_i2c() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_i2c::_initial__TOP__1(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_initial__TOP__1\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PREADY = 1U;
    vlTOPp->PSLVERR = 0U;
    vlTOPp->scl_pad_o = 0U;
    vlTOPp->sda_pad_o = 0U;
}

void Vapb_i2c::_settle__TOP__4(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_settle__TOP__4\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_i2c__DOT__s_status = (((IData)(vlTOPp->apb_i2c__DOT__rxack) 
                                       << 7U) | (((IData)(vlTOPp->apb_i2c__DOT__i2c_busy) 
                                                  << 6U) 
                                                 | (((IData)(vlTOPp->apb_i2c__DOT__al) 
                                                     << 5U) 
                                                    | (((IData)(vlTOPp->apb_i2c__DOT__tip) 
                                                        << 1U) 
                                                       | (IData)(vlTOPp->apb_i2c__DOT__irq_flag)))));
    vlTOPp->apb_i2c__DOT__byte_controller__DOT__go 
        = (1U & (((((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                    >> 5U) | ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                              >> 4U)) | ((IData)(vlTOPp->apb_i2c__DOT__r_cmd) 
                                         >> 6U)) & 
                 (~ (IData)(vlTOPp->apb_i2c__DOT__s_done))));
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

void Vapb_i2c::_eval_initial(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_eval_initial\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

void Vapb_i2c::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::final\n"); );
    // Variables
    Vapb_i2c__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_i2c::_eval_settle(Vapb_i2c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_eval_settle\n"); );
    Vapb_i2c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vapb_i2c::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_i2c::_ctor_var_reset\n"); );
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
    interrupt_o = VL_RAND_RESET_I(1);
    scl_pad_i = VL_RAND_RESET_I(1);
    scl_pad_o = VL_RAND_RESET_I(1);
    scl_padoen_o = VL_RAND_RESET_I(1);
    sda_pad_i = VL_RAND_RESET_I(1);
    sda_pad_o = VL_RAND_RESET_I(1);
    sda_padoen_o = VL_RAND_RESET_I(1);
    apb_i2c__DOT__r_pre = VL_RAND_RESET_I(16);
    apb_i2c__DOT__r_ctrl = VL_RAND_RESET_I(8);
    apb_i2c__DOT__r_tx = VL_RAND_RESET_I(8);
    apb_i2c__DOT__r_cmd = VL_RAND_RESET_I(8);
    apb_i2c__DOT__s_status = VL_RAND_RESET_I(8);
    apb_i2c__DOT__s_done = VL_RAND_RESET_I(1);
    apb_i2c__DOT__s_irxack = VL_RAND_RESET_I(1);
    apb_i2c__DOT__rxack = VL_RAND_RESET_I(1);
    apb_i2c__DOT__tip = VL_RAND_RESET_I(1);
    apb_i2c__DOT__irq_flag = VL_RAND_RESET_I(1);
    apb_i2c__DOT__i2c_busy = VL_RAND_RESET_I(1);
    apb_i2c__DOT__i2c_al = VL_RAND_RESET_I(1);
    apb_i2c__DOT__al = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__core_cmd = VL_RAND_RESET_I(4);
    apb_i2c__DOT__byte_controller__DOT__core_txd = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__core_ack = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__core_rxd = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__sr = VL_RAND_RESET_I(8);
    apb_i2c__DOT__byte_controller__DOT__shift = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__ld = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__go = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__dcnt = VL_RAND_RESET_I(3);
    apb_i2c__DOT__byte_controller__DOT__c_state = VL_RAND_RESET_I(5);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSCL = VL_RAND_RESET_I(2);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cSDA = VL_RAND_RESET_I(2);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = VL_RAND_RESET_I(3);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = VL_RAND_RESET_I(3);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSCL = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sSDA = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSCL = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dSDA = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cnt = VL_RAND_RESET_I(16);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__filter_cnt = VL_RAND_RESET_I(14);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__c_state = VL_RAND_RESET_I(18);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition = VL_RAND_RESET_I(1);
    apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = VL_RAND_RESET_I(1);
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSCL = VL_RAND_RESET_I(3);
    __Vdly__apb_i2c__DOT__byte_controller__DOT__bit_controller__DOT__fSDA = VL_RAND_RESET_I(3);
    __Vdly__scl_padoen_o = VL_RAND_RESET_I(1);
}
