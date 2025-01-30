// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_pulpino.h for the primary calling header

#include "Vapb_pulpino.h"
#include "Vapb_pulpino__Syms.h"

//==========

void Vapb_pulpino::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_pulpino::eval\n"); );
    Vapb_pulpino__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_pulpino.sv", 37, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_pulpino::_eval_initial_loop(Vapb_pulpino__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_pulpino.sv", 37, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_pulpino::_combo__TOP__2(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_combo__TOP__2\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_pulpino__DOT__register_adr = ((0xff0U 
                                               & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)) 
                                              | (0xfU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)));
}

VL_INLINE_OPT void Vapb_pulpino::_sequent__TOP__4(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_sequent__TOP__4\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_pulpino__DOT__status_q = vlTOPp->apb_pulpino__DOT__status_n;
        vlTOPp->apb_pulpino__DOT__boot_adr_q = vlTOPp->apb_pulpino__DOT__boot_adr_n;
    } else {
        vlTOPp->apb_pulpino__DOT__status_q = 3U;
        vlTOPp->apb_pulpino__DOT__boot_adr_q = 0x8000U;
    }
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U];
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U];
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U];
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U];
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U];
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] = vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U];
    } else {
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] = 0U;
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0xffffffc0U 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0xfffff03fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0xfffc0fffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0xff03ffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0xc0ffffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] = (0x3fffffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xfffffff0U 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xfffffc0fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xffff03ffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xffc0ffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xf03fffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] = (0xfffffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0xfffffffcU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0xffffff03U 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0xffffc0ffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0xfff03fffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0xfc0fffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] = (0x3ffffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = (0xffffffc0U 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = (0xfffff03fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = (0xfffc0fffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = (0xff03ffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]);
        vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] = (0xc0ffffffU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]);
    }
    if (vlTOPp->HRESETn) {
        vlTOPp->apb_pulpino__DOT__clk_gate_q = vlTOPp->apb_pulpino__DOT__clk_gate_n;
        vlTOPp->apb_pulpino__DOT__pad_mux_q = vlTOPp->apb_pulpino__DOT__pad_mux_n;
    } else {
        vlTOPp->apb_pulpino__DOT__clk_gate_q = 0xffffffffU;
        vlTOPp->apb_pulpino__DOT__pad_mux_q = 0U;
    }
    vlTOPp->boot_addr_o = vlTOPp->apb_pulpino__DOT__boot_adr_q;
    vlTOPp->pad_cfg_o[0U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U];
    vlTOPp->pad_cfg_o[1U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U];
    vlTOPp->pad_cfg_o[2U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U];
    vlTOPp->pad_cfg_o[3U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U];
    vlTOPp->pad_cfg_o[4U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U];
    vlTOPp->pad_cfg_o[5U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U];
    vlTOPp->clk_gate_o = vlTOPp->apb_pulpino__DOT__clk_gate_q;
    vlTOPp->pad_mux_o = vlTOPp->apb_pulpino__DOT__pad_mux_q;
}

VL_INLINE_OPT void Vapb_pulpino::_combo__TOP__5(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_combo__TOP__5\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_pulpino__DOT__status_n = vlTOPp->apb_pulpino__DOT__status_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                            | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                           | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                          | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                         | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                        | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                       | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                      | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))))) {
            if ((0xdU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((0xeU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((0xfU != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        if ((5U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                            vlTOPp->apb_pulpino__DOT__status_n 
                                = (3U & vlTOPp->PWDATA);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__boot_adr_n = vlTOPp->apb_pulpino__DOT__boot_adr_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        vlTOPp->apb_pulpino__DOT__boot_adr_n 
                            = vlTOPp->PWDATA;
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U];
    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] = vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U];
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    if ((2U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        if ((8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xffffffc0U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0x3fU & vlTOPp->PWDATA));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xfffff03fU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0xfc0U & (vlTOPp->PWDATA 
                                                >> 2U)));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xfffc0fffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0x3f000U & (vlTOPp->PWDATA 
                                                  >> 4U)));
                            vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                = ((0xff03ffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                   | (0xfc0000U & (vlTOPp->PWDATA 
                                                   >> 6U)));
                        } else {
                            if ((9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                    = ((0xc0ffffffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                       | (0x3f000000U 
                                          & (vlTOPp->PWDATA 
                                             << 0x18U)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U] 
                                    = ((0x3fffffffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[0U]) 
                                       | (0xc0000000U 
                                          & (vlTOPp->PWDATA 
                                             << 0x16U)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xfffffff0U 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0xfU & (vlTOPp->PWDATA 
                                                  >> 0xaU)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xfffffc0fU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0x3f0U & 
                                          (vlTOPp->PWDATA 
                                           >> 0xcU)));
                                vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                    = ((0xffff03ffU 
                                        & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                       | (0xfc00U & 
                                          (vlTOPp->PWDATA 
                                           >> 0xeU)));
                            } else {
                                if ((0xaU == (0xfU 
                                              & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xffc0ffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0x3f0000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0x10U)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xf03fffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0xfc00000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0xeU)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U] 
                                        = ((0xfffffffU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[1U]) 
                                           | (0xf0000000U 
                                              & (vlTOPp->PWDATA 
                                                 << 0xcU)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                        = ((0xfffffffcU 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                           | (3U & 
                                              (vlTOPp->PWDATA 
                                               >> 0x14U)));
                                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                        = ((0xffffff03U 
                                            & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                           | (0xfcU 
                                              & (vlTOPp->PWDATA 
                                                 >> 0x16U)));
                                } else {
                                    if ((0xbU == (0xfU 
                                                  & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xffffc0ffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0x3f00U 
                                                  & (vlTOPp->PWDATA 
                                                     << 8U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xfff03fffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0xfc000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 6U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0xfc0fffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0x3f00000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 4U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U] 
                                            = ((0x3ffffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[2U]) 
                                               | (0xfc000000U 
                                                  & (vlTOPp->PWDATA 
                                                     << 2U)));
                                    } else {
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xffffffc0U 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0x3fU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xfffff03fU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0xfc0U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 2U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xfffc0fffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0x3f000U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 4U)));
                                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                                            = ((0xff03ffffU 
                                                & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                                               | (0xfc0000U 
                                                  & (vlTOPp->PWDATA 
                                                     >> 6U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0xdU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                    = ((0xc0ffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                       | (0x3f000000U & (vlTOPp->PWDATA 
                                         << 0x18U)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U] 
                    = ((0x3fffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[3U]) 
                       | (0xc0000000U & (vlTOPp->PWDATA 
                                         << 0x16U)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xfffffff0U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0xfU & (vlTOPp->PWDATA >> 0xaU)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xfffffc0fU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0x3f0U & (vlTOPp->PWDATA 
                                    >> 0xcU)));
                vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                    = ((0xffff03ffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                       | (0xfc00U & (vlTOPp->PWDATA 
                                     >> 0xeU)));
            } else {
                if ((0xeU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xffc0ffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0x3f0000U & (vlTOPp->PWDATA 
                                           << 0x10U)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xf03fffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0xfc00000U & (vlTOPp->PWDATA 
                                            << 0xeU)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U] 
                        = ((0xfffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[4U]) 
                           | (0xf0000000U & (vlTOPp->PWDATA 
                                             << 0xcU)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                        = ((0xfffffffcU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                           | (3U & (vlTOPp->PWDATA 
                                    >> 0x14U)));
                    vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                        = ((0xffffff03U & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                           | (0xfcU & (vlTOPp->PWDATA 
                                       >> 0x16U)));
                } else {
                    if ((0xfU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xffffc0ffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0x3f00U & (vlTOPp->PWDATA 
                                             << 8U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xfff03fffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0xfc000U & (vlTOPp->PWDATA 
                                              << 6U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0xfc0fffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0x3f00000U & (vlTOPp->PWDATA 
                                                << 4U)));
                        vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U] 
                            = ((0x3ffffffU & vlTOPp->apb_pulpino__DOT__pad_cfg_n[5U]) 
                               | (0xfc000000U & (vlTOPp->PWDATA 
                                                 << 2U)));
                    }
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__clk_gate_n = vlTOPp->apb_pulpino__DOT__clk_gate_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U != (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                if ((1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                    vlTOPp->apb_pulpino__DOT__clk_gate_n 
                        = vlTOPp->PWDATA;
                }
            }
        }
    }
    vlTOPp->apb_pulpino__DOT__pad_mux_n = vlTOPp->apb_pulpino__DOT__pad_mux_q;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                 | (8U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
                | (9U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
               | (0xaU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
              | (0xbU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) 
             | (0xcU == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))))) {
            if ((0U == (0xfU & (IData)(vlTOPp->apb_pulpino__DOT__register_adr)))) {
                vlTOPp->apb_pulpino__DOT__pad_mux_n 
                    = vlTOPp->PWDATA;
            }
        }
    }
    vlTOPp->PRDATA = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        vlTOPp->PRDATA = ((8U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                           ? ((4U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                               ? ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                              >> 2U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                 >> 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                    >> 6U)) 
                                                | (0x3fU 
                                                   & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                      >> 8U)))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                              << 0x16U)) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                  << 0x14U) 
                                                 | (0xf0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                       >> 0xcU)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                     << 0x12U) 
                                                    | (0x3ff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                          >> 0xeU)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[5U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                         >> 0x10U)))))))
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                              << 0xeU)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                 << 0xcU)) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                     << 0xaU) 
                                                    | (0x300U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                          >> 0x16U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[4U] 
                                                       << 8U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                         >> 0x18U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                              << 6U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                 << 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U]))))))
                               : ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                               << 0x1eU) 
                                              | (0x3f000000U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                    >> 2U)))) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                  << 0x1cU) 
                                                 | (0xfff0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                       >> 4U)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                     << 0x1aU) 
                                                    | (0x3ffff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                          >> 6U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                         >> 8U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                              << 0x16U)) 
                                          | ((0x3f0000U 
                                              & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                  << 0x14U) 
                                                 | (0xf0000U 
                                                    & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                       >> 0xcU)))) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                     << 0x12U) 
                                                    | (0x3ff00U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                          >> 0xeU)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                         >> 0x10U)))))))
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                              << 0xeU)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                 << 0xcU)) 
                                             | ((0x3f00U 
                                                 & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                     << 0xaU) 
                                                    | (0x300U 
                                                       & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                          >> 0x16U)))) 
                                                | (0x3fU 
                                                   & ((vlTOPp->apb_pulpino__DOT__pad_cfg_q[1U] 
                                                       << 8U) 
                                                      | (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                         >> 0x18U))))))
                                       : ((0x3f000000U 
                                           & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                              << 6U)) 
                                          | ((0x3f0000U 
                                              & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                 << 4U)) 
                                             | ((0x3f00U 
                                                 & (vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U] 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & vlTOPp->apb_pulpino__DOT__pad_cfg_q[0U])))))))
                           : ((4U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                               ? ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? 0U : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                            ? (IData)(vlTOPp->apb_pulpino__DOT__status_q)
                                            : 0x8082U))
                               : ((2U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                   ? ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? 0U : vlTOPp->apb_pulpino__DOT__boot_adr_q)
                                   : ((1U & (IData)(vlTOPp->apb_pulpino__DOT__register_adr))
                                       ? vlTOPp->apb_pulpino__DOT__clk_gate_q
                                       : vlTOPp->apb_pulpino__DOT__pad_mux_q))));
    }
}

void Vapb_pulpino::_eval(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_eval\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->HCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__HCLK))) 
         | ((~ (IData)(vlTOPp->HRESETn)) & (IData)(vlTOPp->__Vclklast__TOP__HRESETn)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__HCLK = vlTOPp->HCLK;
    vlTOPp->__Vclklast__TOP__HRESETn = vlTOPp->HRESETn;
}

VL_INLINE_OPT QData Vapb_pulpino::_change_request(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_change_request\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_pulpino::_change_request_1(Vapb_pulpino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_change_request_1\n"); );
    Vapb_pulpino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_pulpino::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_pulpino::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((HCLK & 0xfeU))) {
        Verilated::overWidthError("HCLK");}
    if (VL_UNLIKELY((HRESETn & 0xfeU))) {
        Verilated::overWidthError("HRESETn");}
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
