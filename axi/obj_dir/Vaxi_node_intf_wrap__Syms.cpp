// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaxi_node_intf_wrap__Syms.h"
#include "Vaxi_node_intf_wrap.h"
#include "Vaxi_node_intf_wrap_axi_request_block__pi1.h"
#include "Vaxi_node_intf_wrap_axi_response_block__pi2.h"



// FUNCTIONS
Vaxi_node_intf_wrap__Syms::Vaxi_node_intf_wrap__Syms(Vaxi_node_intf_wrap* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._REQ_BLOCK_GEN[0].REQ_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._REQ_BLOCK_GEN[1].REQ_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._REQ_BLOCK_GEN[2].REQ_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._REQ_BLOCK_GEN[3].REQ_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._RESP_BLOCK_GEN[0].RESP_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._RESP_BLOCK_GEN[1].RESP_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._RESP_BLOCK_GEN[2].RESP_BLOCK"))
    , TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK(Verilated::catName(topp->name(), "axi_node_intf_wrap.axi_node_i._RESP_BLOCK_GEN[3].RESP_BLOCK"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK;
    TOPp->__PVT__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK = &TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__0__KET____DOT__REQ_BLOCK.__Vconfigure(this, true);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__1__KET____DOT__REQ_BLOCK.__Vconfigure(this, false);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__2__KET____DOT__REQ_BLOCK.__Vconfigure(this, false);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___REQ_BLOCK_GEN__BRA__3__KET____DOT__REQ_BLOCK.__Vconfigure(this, false);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__0__KET____DOT__RESP_BLOCK.__Vconfigure(this, true);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__1__KET____DOT__RESP_BLOCK.__Vconfigure(this, false);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__2__KET____DOT__RESP_BLOCK.__Vconfigure(this, false);
    TOP__axi_node_intf_wrap__DOT__axi_node_i__DOT___RESP_BLOCK_GEN__BRA__3__KET____DOT__RESP_BLOCK.__Vconfigure(this, false);
}
