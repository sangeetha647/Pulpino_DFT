// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_node_intf_wrap.h for the primary calling header

#include "Vaxi_node_intf_wrap_axi_response_block__pi2.h"
#include "Vaxi_node_intf_wrap__Syms.h"

//==========

VL_CTOR_IMP(Vaxi_node_intf_wrap_axi_response_block__pi2) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vaxi_node_intf_wrap_axi_response_block__pi2::__Vconfigure(Vaxi_node_intf_wrap__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vaxi_node_intf_wrap_axi_response_block__pi2::~Vaxi_node_intf_wrap_axi_response_block__pi2() {
}

void Vaxi_node_intf_wrap_axi_response_block__pi2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaxi_node_intf_wrap_axi_response_block__pi2::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    test_en_i = VL_RAND_RESET_I(1);
    rid_i = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(128, rdata_i);
    rresp_i = VL_RAND_RESET_I(8);
    rlast_i = VL_RAND_RESET_I(4);
    ruser_i = VL_RAND_RESET_I(4);
    rvalid_i = VL_RAND_RESET_I(4);
    rready_o = VL_RAND_RESET_I(4);
    bid_i = VL_RAND_RESET_Q(48);
    bresp_i = VL_RAND_RESET_I(8);
    buser_i = VL_RAND_RESET_I(4);
    bvalid_i = VL_RAND_RESET_I(4);
    bready_o = VL_RAND_RESET_I(4);
    rid_o = VL_RAND_RESET_I(10);
    rdata_o = VL_RAND_RESET_I(32);
    rresp_o = VL_RAND_RESET_I(2);
    rlast_o = VL_RAND_RESET_I(1);
    ruser_o = VL_RAND_RESET_I(1);
    rvalid_o = VL_RAND_RESET_I(1);
    rready_i = VL_RAND_RESET_I(1);
    bid_o = VL_RAND_RESET_I(10);
    bresp_o = VL_RAND_RESET_I(2);
    buser_o = VL_RAND_RESET_I(1);
    bvalid_o = VL_RAND_RESET_I(1);
    bready_i = VL_RAND_RESET_I(1);
    arvalid_i = VL_RAND_RESET_I(1);
    araddr_i = VL_RAND_RESET_I(32);
    arready_o = VL_RAND_RESET_I(1);
    arid_i = VL_RAND_RESET_I(10);
    arlen_i = VL_RAND_RESET_I(8);
    aruser_i = VL_RAND_RESET_I(1);
    arvalid_o = VL_RAND_RESET_I(4);
    arready_i = VL_RAND_RESET_I(4);
    awvalid_i = VL_RAND_RESET_I(1);
    awaddr_i = VL_RAND_RESET_I(32);
    awready_o = VL_RAND_RESET_I(1);
    awid_i = VL_RAND_RESET_I(10);
    awuser_i = VL_RAND_RESET_I(1);
    awvalid_o = VL_RAND_RESET_I(4);
    awready_i = VL_RAND_RESET_I(4);
    wvalid_i = VL_RAND_RESET_I(1);
    wlast_i = VL_RAND_RESET_I(1);
    wready_o = VL_RAND_RESET_I(1);
    wvalid_o = VL_RAND_RESET_I(4);
    wready_i = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, START_ADDR_i);
    VL_RAND_RESET_W(128, END_ADDR_i);
    enable_region_i = VL_RAND_RESET_I(4);
    connectivity_map_i = VL_RAND_RESET_I(4);
}
