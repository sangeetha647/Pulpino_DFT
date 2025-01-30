// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAXI_NODE_INTF_WRAP__SYMS_H_
#define _VAXI_NODE_INTF_WRAP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vaxi_node_intf_wrap.h"
#include "Vaxi_node_intf_wrap_axi_request_block__pi1.h"
#include "Vaxi_node_intf_wrap_axi_response_block__pi2.h"

// SYMS CLASS
class Vaxi_node_intf_wrap__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vaxi_node_intf_wrap*           TOPp;
    Vaxi_node_intf_wrap_axi_request_block__pi1 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_request_block__pi1 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK;
    Vaxi_node_intf_wrap_axi_response_block__pi2 TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK;
    
    // CREATORS
    Vaxi_node_intf_wrap__Syms(Vaxi_node_intf_wrap* topp, const char* namep);
    ~Vaxi_node_intf_wrap__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
