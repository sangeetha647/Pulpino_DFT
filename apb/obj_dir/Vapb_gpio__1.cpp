// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_gpio.h for the primary calling header

#include "Vapb_gpio.h"
#include "Vapb_gpio__Syms.h"

void Vapb_gpio::_eval(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_eval\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_gpio::_change_request(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_change_request\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_gpio::_change_request_1(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_change_request_1\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_gpio::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((HCLK & 0xfeU))) {
        Verilated::overWidthError("HCLK");}
    if (VL_UNLIKELY((HRESETn & 0xfeU))) {
        Verilated::overWidthError("HRESETn");}
    if (VL_UNLIKELY((dft_cg_enable_i & 0xfeU))) {
        Verilated::overWidthError("dft_cg_enable_i");}
    if (VL_UNLIKELY((PADDR & 0xf000U))) {
        Verilated::overWidthError("PADDR");}
    if (VL_UNLIKELY((PWRITE & 0xfeU))) {
        Verilated::overWidthError("PWRITE");}
    if (VL_UNLIKELY((PSEL & 0xfeU))) {
        Verilated::overWidthError("PSEL");}
    if (VL_UNLIKELY((PENABLE & 0xfeU))) {
        Verilated::overWidthError("PENABLE");}
}
#endif  // VL_DEBUG
