// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_node.h for the primary calling header

#include "Vapb_node.h"
#include "Vapb_node__Syms.h"

//==========

VL_CTOR_IMP(Vapb_node) {
    Vapb_node__Syms* __restrict vlSymsp = __VlSymsp = new Vapb_node__Syms(this, name());
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb_node::__Vconfigure(Vapb_node__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb_node::~Vapb_node() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb_node::_eval_initial(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_eval_initial\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_node::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::final\n"); );
    // Variables
    Vapb_node__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb_node::_eval_settle(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_eval_settle\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vapb_node::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_ctor_var_reset\n"); );
    // Body
    penable_i = VL_RAND_RESET_I(1);
    pwrite_i = VL_RAND_RESET_I(1);
    paddr_i = VL_RAND_RESET_I(32);
    psel_i = VL_RAND_RESET_I(1);
    pwdata_i = VL_RAND_RESET_I(32);
    prdata_o = VL_RAND_RESET_I(32);
    pready_o = VL_RAND_RESET_I(1);
    pslverr_o = VL_RAND_RESET_I(1);
    penable_o = VL_RAND_RESET_I(8);
    pwrite_o = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, paddr_o);
    psel_o = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, pwdata_o);
    VL_RAND_RESET_W(256, prdata_i);
    pready_i = VL_RAND_RESET_I(8);
    pslverr_i = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, START_ADDR_i);
    VL_RAND_RESET_W(256, END_ADDR_i);
}
