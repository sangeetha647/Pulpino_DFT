// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_node_intf_wrap.h for the primary calling header

#include "Vaxi_node_intf_wrap_axi_request_block__pi1.h"
#include "Vaxi_node_intf_wrap__Syms.h"

//==========

VL_CTOR_IMP(Vaxi_node_intf_wrap_axi_request_block__pi1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vaxi_node_intf_wrap_axi_request_block__pi1::__Vconfigure(Vaxi_node_intf_wrap__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vaxi_node_intf_wrap_axi_request_block__pi1::~Vaxi_node_intf_wrap_axi_request_block__pi1() {
}

void Vaxi_node_intf_wrap_axi_request_block__pi1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaxi_node_intf_wrap_axi_request_block__pi1::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    test_en_i = VL_RAND_RESET_I(1);
    awid_i = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(128, awaddr_i);
    awlen_i = VL_RAND_RESET_I(32);
    awsize_i = VL_RAND_RESET_I(12);
    awburst_i = VL_RAND_RESET_I(8);
    awlock_i = VL_RAND_RESET_I(4);
    awcache_i = VL_RAND_RESET_I(16);
    awprot_i = VL_RAND_RESET_I(12);
    awregion_i = VL_RAND_RESET_I(16);
    awuser_i = VL_RAND_RESET_I(4);
    awqos_i = VL_RAND_RESET_I(16);
    awvalid_i = VL_RAND_RESET_I(4);
    awready_o = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, wdata_i);
    wstrb_i = VL_RAND_RESET_I(16);
    wlast_i = VL_RAND_RESET_I(4);
    wuser_i = VL_RAND_RESET_I(4);
    wvalid_i = VL_RAND_RESET_I(4);
    wready_o = VL_RAND_RESET_I(4);
    arid_i = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(128, araddr_i);
    arlen_i = VL_RAND_RESET_I(32);
    arsize_i = VL_RAND_RESET_I(12);
    arburst_i = VL_RAND_RESET_I(8);
    arlock_i = VL_RAND_RESET_I(4);
    arcache_i = VL_RAND_RESET_I(16);
    arprot_i = VL_RAND_RESET_I(12);
    arregion_i = VL_RAND_RESET_I(16);
    aruser_i = VL_RAND_RESET_I(4);
    arqos_i = VL_RAND_RESET_I(16);
    arvalid_i = VL_RAND_RESET_I(4);
    arready_o = VL_RAND_RESET_I(4);
    bid_i = VL_RAND_RESET_I(12);
    bvalid_i = VL_RAND_RESET_I(1);
    bready_o = VL_RAND_RESET_I(1);
    bvalid_o = VL_RAND_RESET_I(4);
    bready_i = VL_RAND_RESET_I(4);
    rid_i = VL_RAND_RESET_I(12);
    rvalid_i = VL_RAND_RESET_I(1);
    rready_o = VL_RAND_RESET_I(1);
    rvalid_o = VL_RAND_RESET_I(4);
    rready_i = VL_RAND_RESET_I(4);
    awid_o = VL_RAND_RESET_I(12);
    awaddr_o = VL_RAND_RESET_I(32);
    awlen_o = VL_RAND_RESET_I(8);
    awsize_o = VL_RAND_RESET_I(3);
    awburst_o = VL_RAND_RESET_I(2);
    awlock_o = VL_RAND_RESET_I(1);
    awcache_o = VL_RAND_RESET_I(4);
    awprot_o = VL_RAND_RESET_I(3);
    awregion_o = VL_RAND_RESET_I(4);
    awuser_o = VL_RAND_RESET_I(1);
    awqos_o = VL_RAND_RESET_I(4);
    awvalid_o = VL_RAND_RESET_I(1);
    awready_i = VL_RAND_RESET_I(1);
    wdata_o = VL_RAND_RESET_I(32);
    wstrb_o = VL_RAND_RESET_I(4);
    wlast_o = VL_RAND_RESET_I(1);
    wuser_o = VL_RAND_RESET_I(1);
    wvalid_o = VL_RAND_RESET_I(1);
    wready_i = VL_RAND_RESET_I(1);
    arid_o = VL_RAND_RESET_I(12);
    araddr_o = VL_RAND_RESET_I(32);
    arlen_o = VL_RAND_RESET_I(8);
    arsize_o = VL_RAND_RESET_I(3);
    arburst_o = VL_RAND_RESET_I(2);
    arlock_o = VL_RAND_RESET_I(1);
    arcache_o = VL_RAND_RESET_I(4);
    arprot_o = VL_RAND_RESET_I(3);
    arregion_o = VL_RAND_RESET_I(4);
    aruser_o = VL_RAND_RESET_I(1);
    arqos_o = VL_RAND_RESET_I(4);
    arvalid_o = VL_RAND_RESET_I(1);
    arready_i = VL_RAND_RESET_I(1);
}
