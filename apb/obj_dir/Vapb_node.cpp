// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_node.h for the primary calling header

#include "Vapb_node.h"
#include "Vapb_node__Syms.h"

//==========

void Vapb_node::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_node::eval\n"); );
    Vapb_node__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_node.sv", 20, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_node::_eval_initial_loop(Vapb_node__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_node.sv", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_node::_combo__TOP__1(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_combo__TOP__1\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->psel_o = 0U;
    vlTOPp->psel_o = ((0xfeU & (IData)(vlTOPp->psel_o)) 
                      | (((IData)(vlTOPp->psel_i) & 
                          (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[0U])) 
                         & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[0U])));
    vlTOPp->psel_o = ((0xfdU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[1U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[1U])) 
                         << 1U));
    vlTOPp->psel_o = ((0xfbU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[2U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[2U])) 
                         << 2U));
    vlTOPp->psel_o = ((0xf7U & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[3U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[3U])) 
                         << 3U));
    vlTOPp->psel_o = ((0xefU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[4U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[4U])) 
                         << 4U));
    vlTOPp->psel_o = ((0xdfU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[5U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[5U])) 
                         << 5U));
    vlTOPp->psel_o = ((0xbfU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[6U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[6U])) 
                         << 6U));
    vlTOPp->psel_o = ((0x7fU & (IData)(vlTOPp->psel_o)) 
                      | ((((IData)(vlTOPp->psel_i) 
                           & (vlTOPp->paddr_i >= vlTOPp->START_ADDR_i[7U])) 
                          & (vlTOPp->paddr_i <= vlTOPp->END_ADDR_i[7U])) 
                         << 7U));
    vlTOPp->pslverr_o = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & (IData)(vlTOPp->pslverr_i));
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 1U));
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 2U));
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 4U));
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 5U));
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 6U));
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pslverr_o = (1U & ((IData)(vlTOPp->pslverr_i) 
                                   >> 7U));
    }
    vlTOPp->paddr_o[0U] = 0U;
    vlTOPp->paddr_o[1U] = 0U;
    vlTOPp->paddr_o[2U] = 0U;
    vlTOPp->paddr_o[3U] = 0U;
    vlTOPp->paddr_o[4U] = 0U;
    vlTOPp->paddr_o[5U] = 0U;
    vlTOPp->paddr_o[6U] = 0U;
    vlTOPp->paddr_o[7U] = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[0U] = vlTOPp->paddr_i;
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[1U] = vlTOPp->paddr_i;
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[2U] = vlTOPp->paddr_i;
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[3U] = vlTOPp->paddr_i;
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[4U] = vlTOPp->paddr_i;
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[5U] = vlTOPp->paddr_i;
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[6U] = vlTOPp->paddr_i;
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->paddr_o[7U] = vlTOPp->paddr_i;
    }
    vlTOPp->pready_o = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & (IData)(vlTOPp->pready_i));
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 1U));
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 2U));
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 4U));
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 5U));
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 6U));
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pready_o = (1U & ((IData)(vlTOPp->pready_i) 
                                  >> 7U));
    }
    vlTOPp->prdata_o = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[0U];
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[1U];
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[2U];
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[3U];
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[4U];
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[5U];
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[6U];
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->prdata_o = vlTOPp->prdata_i[7U];
    }
    vlTOPp->pwdata_o[0U] = 0U;
    vlTOPp->pwdata_o[1U] = 0U;
    vlTOPp->pwdata_o[2U] = 0U;
    vlTOPp->pwdata_o[3U] = 0U;
    vlTOPp->pwdata_o[4U] = 0U;
    vlTOPp->pwdata_o[5U] = 0U;
    vlTOPp->pwdata_o[6U] = 0U;
    vlTOPp->pwdata_o[7U] = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[0U] = vlTOPp->pwdata_i;
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[1U] = vlTOPp->pwdata_i;
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[2U] = vlTOPp->pwdata_i;
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[3U] = vlTOPp->pwdata_i;
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[4U] = vlTOPp->pwdata_i;
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[5U] = vlTOPp->pwdata_i;
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[6U] = vlTOPp->pwdata_i;
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwdata_o[7U] = vlTOPp->pwdata_i;
    }
    vlTOPp->pwrite_o = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xfeU & (IData)(vlTOPp->pwrite_o)) 
                            | (IData)(vlTOPp->pwrite_i));
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xfdU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 1U));
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xfbU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 2U));
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xf7U & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xefU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xdfU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0xbfU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->pwrite_o = ((0x7fU & (IData)(vlTOPp->pwrite_o)) 
                            | ((IData)(vlTOPp->pwrite_i) 
                               << 7U));
    }
    vlTOPp->penable_o = 0U;
    if ((1U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xfeU & (IData)(vlTOPp->penable_o)) 
                             | (IData)(vlTOPp->penable_i));
    }
    if ((2U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xfdU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 1U));
    }
    if ((4U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xfbU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 2U));
    }
    if ((8U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xf7U & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xefU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xdfU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0xbfU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->psel_o))) {
        vlTOPp->penable_o = ((0x7fU & (IData)(vlTOPp->penable_o)) 
                             | ((IData)(vlTOPp->penable_i) 
                                << 7U));
    }
}

void Vapb_node::_eval(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_eval\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vapb_node::_change_request(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_change_request\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vapb_node::_change_request_1(Vapb_node__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_change_request_1\n"); );
    Vapb_node* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vapb_node::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_node::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((penable_i & 0xfeU))) {
        Verilated::overWidthError("penable_i");}
    if (VL_UNLIKELY((pwrite_i & 0xfeU))) {
        Verilated::overWidthError("pwrite_i");}
    if (VL_UNLIKELY((psel_i & 0xfeU))) {
        Verilated::overWidthError("psel_i");}
}
#endif  // VL_DEBUG
