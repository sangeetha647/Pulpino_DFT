// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_node_intf_wrap.h for the primary calling header

#ifndef _VAXI_NODE_INTF_WRAP_AXI_RESPONSE_BLOCK__PI2_H_
#define _VAXI_NODE_INTF_WRAP_AXI_RESPONSE_BLOCK__PI2_H_  // guard

#include "verilated.h"

//==========

class Vaxi_node_intf_wrap__Syms;

//----------

VL_MODULE(Vaxi_node_intf_wrap_axi_response_block__pi2) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(test_en_i,0,0);
    VL_IN8(rresp_i,7,0);
    VL_IN8(rlast_i,3,0);
    VL_IN8(ruser_i,3,0);
    VL_IN8(rvalid_i,3,0);
    VL_OUT8(rready_o,3,0);
    VL_IN8(bresp_i,7,0);
    VL_IN8(buser_i,3,0);
    VL_IN8(bvalid_i,3,0);
    VL_OUT8(bready_o,3,0);
    VL_OUT8(rresp_o,1,0);
    VL_OUT8(rlast_o,0,0);
    VL_OUT8(ruser_o,0,0);
    VL_OUT8(rvalid_o,0,0);
    VL_IN8(rready_i,0,0);
    VL_OUT8(bresp_o,1,0);
    VL_OUT8(buser_o,0,0);
    VL_OUT8(bvalid_o,0,0);
    VL_IN8(bready_i,0,0);
    VL_IN8(arvalid_i,0,0);
    VL_OUT8(arready_o,0,0);
    VL_IN8(arlen_i,7,0);
    VL_IN8(aruser_i,0,0);
    VL_OUT8(arvalid_o,3,0);
    VL_IN8(arready_i,3,0);
    VL_IN8(awvalid_i,0,0);
    VL_OUT8(awready_o,0,0);
    VL_IN8(awuser_i,0,0);
    VL_OUT8(awvalid_o,3,0);
    VL_IN8(awready_i,3,0);
    VL_IN8(wvalid_i,0,0);
    VL_IN8(wlast_i,0,0);
    VL_OUT8(wready_o,0,0);
    VL_OUT8(wvalid_o,3,0);
    VL_IN8(wready_i,3,0);
    VL_IN8(enable_region_i,3,0);
    VL_IN8(connectivity_map_i,3,0);
    VL_IN64(rid_i,47,0);
    VL_IN64(bid_i,47,0);
    VL_OUT16(rid_o,9,0);
    VL_OUT16(bid_o,9,0);
    VL_IN16(arid_i,9,0);
    VL_IN16(awid_i,9,0);
    VL_INW(rdata_i,127,0,4);
    VL_OUT(rdata_o,31,0);
    VL_IN(araddr_i,31,0);
    VL_IN(awaddr_i,31,0);
    VL_INW(START_ADDR_i,127,0,4);
    VL_INW(END_ADDR_i,127,0,4);
    
    // INTERNAL VARIABLES
  private:
    Vaxi_node_intf_wrap__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaxi_node_intf_wrap_axi_response_block__pi2);  ///< Copying not allowed
  public:
    Vaxi_node_intf_wrap_axi_response_block__pi2(const char* name = "TOP");
    ~Vaxi_node_intf_wrap_axi_response_block__pi2();
    
    // INTERNAL METHODS
    void __Vconfigure(Vaxi_node_intf_wrap__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
