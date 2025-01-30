// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_node_intf_wrap.h for the primary calling header

#ifndef _VAXI_NODE_INTF_WRAP_AXI_REQUEST_BLOCK__PI1_H_
#define _VAXI_NODE_INTF_WRAP_AXI_REQUEST_BLOCK__PI1_H_  // guard

#include "verilated.h"

//==========

class Vaxi_node_intf_wrap__Syms;

//----------

VL_MODULE(Vaxi_node_intf_wrap_axi_request_block__pi1) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(test_en_i,0,0);
    VL_IN(awlen_i,31,0);
    VL_IN16(awsize_i,11,0);
    VL_IN8(awburst_i,7,0);
    VL_IN8(awlock_i,3,0);
    VL_IN16(awcache_i,15,0);
    VL_IN16(awprot_i,11,0);
    VL_IN16(awregion_i,15,0);
    VL_IN8(awuser_i,3,0);
    VL_IN16(awqos_i,15,0);
    VL_IN8(awvalid_i,3,0);
    VL_OUT8(awready_o,3,0);
    VL_IN16(wstrb_i,15,0);
    VL_IN8(wlast_i,3,0);
    VL_IN8(wuser_i,3,0);
    VL_IN8(wvalid_i,3,0);
    VL_OUT8(wready_o,3,0);
    VL_IN(arlen_i,31,0);
    VL_IN16(arsize_i,11,0);
    VL_IN8(arburst_i,7,0);
    VL_IN8(arlock_i,3,0);
    VL_IN16(arcache_i,15,0);
    VL_IN16(arprot_i,11,0);
    VL_IN16(arregion_i,15,0);
    VL_IN8(aruser_i,3,0);
    VL_IN16(arqos_i,15,0);
    VL_IN8(arvalid_i,3,0);
    VL_OUT8(arready_o,3,0);
    VL_IN8(bvalid_i,0,0);
    VL_OUT8(bready_o,0,0);
    VL_OUT8(bvalid_o,3,0);
    VL_IN8(bready_i,3,0);
    VL_IN8(rvalid_i,0,0);
    VL_OUT8(rready_o,0,0);
    VL_OUT8(rvalid_o,3,0);
    VL_IN8(rready_i,3,0);
    VL_OUT8(awlen_o,7,0);
    VL_OUT8(awsize_o,2,0);
    VL_OUT8(awburst_o,1,0);
    VL_OUT8(awlock_o,0,0);
    VL_OUT8(awcache_o,3,0);
    VL_OUT8(awprot_o,2,0);
    VL_OUT8(awregion_o,3,0);
    VL_OUT8(awuser_o,0,0);
    VL_OUT8(awqos_o,3,0);
    VL_OUT8(awvalid_o,0,0);
    VL_IN8(awready_i,0,0);
    VL_OUT8(wstrb_o,3,0);
    VL_OUT8(wlast_o,0,0);
    VL_OUT8(wuser_o,0,0);
    VL_OUT8(wvalid_o,0,0);
    VL_IN8(wready_i,0,0);
    VL_OUT8(arlen_o,7,0);
    VL_OUT8(arsize_o,2,0);
    VL_OUT8(arburst_o,1,0);
    VL_OUT8(arlock_o,0,0);
    VL_OUT8(arcache_o,3,0);
    VL_OUT8(arprot_o,2,0);
    VL_OUT8(arregion_o,3,0);
    VL_OUT8(aruser_o,0,0);
    VL_OUT8(arqos_o,3,0);
    VL_OUT8(arvalid_o,0,0);
    VL_IN8(arready_i,0,0);
    VL_IN64(awid_i,39,0);
    VL_IN64(arid_i,39,0);
    VL_IN16(bid_i,11,0);
    VL_IN16(rid_i,11,0);
    VL_OUT16(awid_o,11,0);
    VL_OUT16(arid_o,11,0);
    VL_INW(awaddr_i,127,0,4);
    VL_INW(wdata_i,127,0,4);
    VL_INW(araddr_i,127,0,4);
    VL_OUT(awaddr_o,31,0);
    VL_OUT(wdata_o,31,0);
    VL_OUT(araddr_o,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vaxi_node_intf_wrap__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaxi_node_intf_wrap_axi_request_block__pi1);  ///< Copying not allowed
  public:
    Vaxi_node_intf_wrap_axi_request_block__pi1(const char* name = "TOP");
    ~Vaxi_node_intf_wrap_axi_request_block__pi1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vaxi_node_intf_wrap__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
