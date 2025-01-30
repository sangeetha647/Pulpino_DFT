// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb2per.h for the primary calling header

#include "Vapb2per.h"
#include "Vapb2per__Syms.h"

//==========

void Vapb2per::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb2per::eval\n"); );
    Vapb2per__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb2per.sv", 28, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb2per::_eval_initial_loop(Vapb2per__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("apb2per.sv", 28, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb2per::_combo__TOP__2(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_combo__TOP__2\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PRDATA = vlTOPp->per_master_r_rdata_i;
    vlTOPp->per_master_add_o = vlTOPp->PADDR;
    vlTOPp->per_master_wdata_o = vlTOPp->PWDATA;
}

VL_INLINE_OPT void Vapb2per::_sequent__TOP__4(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_sequent__TOP__4\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb2per__DOT__CS = ((IData)(vlTOPp->rst_ni) 
                                & (IData)(vlTOPp->apb2per__DOT__NS));
}

VL_INLINE_OPT void Vapb2per::_combo__TOP__5(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_combo__TOP__5\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->per_master_gnt_i) 
                             << 5U) | (((IData)(vlTOPp->PWRITE) 
                                        << 4U) | (((IData)(vlTOPp->PENABLE) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->PSEL) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->per_master_r_valid_i) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->apb2per__DOT__CS))))));
    vlTOPp->per_master_we_o = vlTOPp->__Vtable1_per_master_we_o
        [vlTOPp->__Vtableidx1];
    vlTOPp->per_master_req_o = vlTOPp->__Vtable1_per_master_req_o
        [vlTOPp->__Vtableidx1];
    vlTOPp->PREADY = vlTOPp->__Vtable1_PREADY[vlTOPp->__Vtableidx1];
    vlTOPp->apb2per__DOT__NS = vlTOPp->__Vtable1_apb2per__DOT__NS
        [vlTOPp->__Vtableidx1];
}

void Vapb2per::_eval(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_eval\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

VL_INLINE_OPT QData Vapb2per::_change_request(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_change_request\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb2per::_change_request_1(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_change_request_1\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb2per::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((PWRITE & 0xfeU))) {
        Verilated::overWidthError("PWRITE");}
    if (VL_UNLIKELY((PSEL & 0xfeU))) {
        Verilated::overWidthError("PSEL");}
    if (VL_UNLIKELY((PENABLE & 0xfeU))) {
        Verilated::overWidthError("PENABLE");}
    if (VL_UNLIKELY((per_master_gnt_i & 0xfeU))) {
        Verilated::overWidthError("per_master_gnt_i");}
    if (VL_UNLIKELY((per_master_r_valid_i & 0xfeU))) {
        Verilated::overWidthError("per_master_r_valid_i");}
    if (VL_UNLIKELY((per_master_r_opc_i & 0xfeU))) {
        Verilated::overWidthError("per_master_r_opc_i");}
}
#endif  // VL_DEBUG
