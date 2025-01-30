// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_node_intf_wrap.h for the primary calling header

#include "Vaxi_node_intf_wrap.h"
#include "Vaxi_node_intf_wrap__Syms.h"

//==========

VL_CTOR_IMP(Vaxi_node_intf_wrap) {
    Vaxi_node_intf_wrap__Syms* __restrict vlSymsp = __VlSymsp = new Vaxi_node_intf_wrap__Syms(this, name());
    Vaxi_node_intf_wrap* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK, Vaxi_node_intf_wrap_axi_request_block__pi1);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK, Vaxi_node_intf_wrap_axi_request_block__pi1);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK, Vaxi_node_intf_wrap_axi_request_block__pi1);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK, Vaxi_node_intf_wrap_axi_request_block__pi1);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK, Vaxi_node_intf_wrap_axi_response_block__pi2);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK, Vaxi_node_intf_wrap_axi_response_block__pi2);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK, Vaxi_node_intf_wrap_axi_response_block__pi2);
    VL_CELL(__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK, Vaxi_node_intf_wrap_axi_response_block__pi2);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaxi_node_intf_wrap::__Vconfigure(Vaxi_node_intf_wrap__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vaxi_node_intf_wrap::~Vaxi_node_intf_wrap() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vaxi_node_intf_wrap::_eval_initial(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_node_intf_wrap::_eval_initial\n"); );
    Vaxi_node_intf_wrap* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

void Vaxi_node_intf_wrap::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_node_intf_wrap::final\n"); );
    // Variables
    Vaxi_node_intf_wrap__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaxi_node_intf_wrap* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaxi_node_intf_wrap::_eval_settle(Vaxi_node_intf_wrap__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_node_intf_wrap::_eval_settle\n"); );
    Vaxi_node_intf_wrap* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaxi_node_intf_wrap::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_node_intf_wrap::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    test_en_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, start_addr_i);
    VL_RAND_RESET_W(128, end_addr_i);
}
