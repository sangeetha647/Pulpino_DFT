// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_gpio.h for the primary calling header

#include "Vapb_gpio.h"
#include "Vapb_gpio__Syms.h"

//==========

void Vapb_gpio::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_gpio::eval\n"); );
    Vapb_gpio__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("apb_gpio.sv", 41, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vapb_gpio::_eval_initial_loop(Vapb_gpio__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("apb_gpio.sv", 41, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vapb_gpio::_sequent__TOP__2(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_sequent__TOP__2\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->HRESETn) {
        if ((0U != vlTOPp->apb_gpio__DOT__s_is_int_all)) {
            vlTOPp->apb_gpio__DOT__r_status = (vlTOPp->apb_gpio__DOT__r_status 
                                               | vlTOPp->apb_gpio__DOT__s_is_int_all);
        } else {
            if (((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
                  & (~ (IData)(vlTOPp->PWRITE))) & 
                 (9U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                  >> 2U))))) {
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffffeU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffffdU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffffbU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffff7U 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffffefU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffffdfU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffffbfU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffff7fU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffeffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffdffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffffbffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffff7ffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffefffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffdfffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffffbfffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffff7fffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffeffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffdffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfffbffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfff7ffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffefffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffdfffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xffbfffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xff7fffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfeffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfdffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xfbffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xf7ffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xefffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xdfffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0xbfffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
                vlTOPp->apb_gpio__DOT__r_status = (0x7fffffffU 
                                                   & vlTOPp->apb_gpio__DOT__r_status);
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_status = 0U;
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_out))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffffeU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (1U & (IData)(vlTOPp->apb_gpio__DOT__s_gpio_out)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffffdU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (2U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                       >> 1U)) << 1U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffffbU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (4U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                       >> 2U)) << 2U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffff7U & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (8U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                       >> 3U)) << 3U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffffefU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x10U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                          >> 4U)) << 4U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffffdfU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x20U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                          >> 5U)) << 5U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffffbfU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x40U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                          >> 6U)) << 6U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffff7fU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x80U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                          >> 7U)) << 7U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffeffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x100U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                           >> 8U)) 
                                  << 8U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffdffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x200U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                           >> 9U)) 
                                  << 9U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffffbffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x400U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                           >> 0xaU)) 
                                  << 0xaU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffff7ffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x800U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                           >> 0xbU)) 
                                  << 0xbU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffefffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x1000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            >> 0xcU)) 
                                   << 0xcU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffdfffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x2000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            >> 0xdU)) 
                                   << 0xdU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffffbfffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x4000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            >> 0xeU)) 
                                   << 0xeU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffff7fffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x8000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            >> 0xfU)) 
                                   << 0xfU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffeffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x10000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                             >> 0x10U)) 
                                    << 0x10U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffdffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x20000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                             >> 0x11U)) 
                                    << 0x11U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfffbffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x40000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                             >> 0x12U)) 
                                    << 0x12U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfff7ffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x80000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                             >> 0x13U)) 
                                    << 0x13U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffefffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x100000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                              >> 0x14U)) 
                                     << 0x14U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffdfffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x200000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                              >> 0x15U)) 
                                     << 0x15U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xffbfffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x400000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                              >> 0x16U)) 
                                     << 0x16U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xff7fffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x800000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                              >> 0x17U)) 
                                     << 0x17U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfeffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x1000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                               >> 0x18U)) 
                                      << 0x18U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfdffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x2000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                               >> 0x19U)) 
                                      << 0x19U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xfbffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x4000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                               >> 0x1aU)) 
                                      << 0x1aU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xf7ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x8000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                               >> 0x1bU)) 
                                      << 0x1bU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xefffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x10000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                                >> 0x1cU)) 
                                       << 0x1cU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xdfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x20000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                                >> 0x1dU)) 
                                       << 0x1dU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0xbfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x40000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                                >> 0x1eU)) 
                                       << 0x1eU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_out 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_out = 
                    ((0x7fffffffU & vlTOPp->apb_gpio__DOT__r_gpio_out) 
                     | (0x80000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_out 
                                                >> 0x1fU)) 
                                       << 0x1fU)));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
        vlTOPp->apb_gpio__DOT__r_gpio_out = (0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_out);
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_dir))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffffeU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (1U & (IData)(vlTOPp->apb_gpio__DOT__s_gpio_dir)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffffdU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (2U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                       >> 1U)) << 1U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffffbU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (4U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                       >> 2U)) << 2U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffff7U & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (8U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                       >> 3U)) << 3U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffffefU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x10U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                          >> 4U)) << 4U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffffdfU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x20U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                          >> 5U)) << 5U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffffbfU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x40U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                          >> 6U)) << 6U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffff7fU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x80U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                          >> 7U)) << 7U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffeffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x100U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                           >> 8U)) 
                                  << 8U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffdffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x200U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                           >> 9U)) 
                                  << 9U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffffbffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x400U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                           >> 0xaU)) 
                                  << 0xaU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffff7ffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x800U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                           >> 0xbU)) 
                                  << 0xbU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffefffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x1000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                            >> 0xcU)) 
                                   << 0xcU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffdfffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x2000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                            >> 0xdU)) 
                                   << 0xdU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffffbfffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x4000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                            >> 0xeU)) 
                                   << 0xeU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffff7fffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x8000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                            >> 0xfU)) 
                                   << 0xfU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffeffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x10000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                             >> 0x10U)) 
                                    << 0x10U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffdffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x20000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                             >> 0x11U)) 
                                    << 0x11U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfffbffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x40000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                             >> 0x12U)) 
                                    << 0x12U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfff7ffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x80000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                             >> 0x13U)) 
                                    << 0x13U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffefffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x100000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                              >> 0x14U)) 
                                     << 0x14U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffdfffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x200000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                              >> 0x15U)) 
                                     << 0x15U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xffbfffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x400000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                              >> 0x16U)) 
                                     << 0x16U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xff7fffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x800000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                              >> 0x17U)) 
                                     << 0x17U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfeffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x1000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                               >> 0x18U)) 
                                      << 0x18U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfdffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x2000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                               >> 0x19U)) 
                                      << 0x19U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xfbffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x4000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                               >> 0x1aU)) 
                                      << 0x1aU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xf7ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x8000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                               >> 0x1bU)) 
                                      << 0x1bU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xefffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x10000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                                >> 0x1cU)) 
                                       << 0x1cU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xdfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x20000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                                >> 0x1dU)) 
                                       << 0x1dU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0xbfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x40000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                                >> 0x1eU)) 
                                       << 0x1eU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_dir 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_dir = 
                    ((0x7fffffffU & vlTOPp->apb_gpio__DOT__r_gpio_dir) 
                     | (0x80000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_dir 
                                                >> 0x1fU)) 
                                       << 0x1fU)));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
        vlTOPp->apb_gpio__DOT__r_gpio_dir = (0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__r_gpio_dir);
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_inten))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffffeU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (1U & (IData)(vlTOPp->apb_gpio__DOT__s_gpio_inten)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffffdU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (2U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                         >> 1U)) << 1U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffffbU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (4U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                         >> 2U)) << 2U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffff7U & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (8U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                         >> 3U)) << 3U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffffefU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x10U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                            >> 4U)) 
                                   << 4U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffffdfU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x20U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                            >> 5U)) 
                                   << 5U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffffbfU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x40U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                            >> 6U)) 
                                   << 6U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffff7fU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x80U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                            >> 7U)) 
                                   << 7U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffeffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x100U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                             >> 8U)) 
                                    << 8U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffdffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x200U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                             >> 9U)) 
                                    << 9U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffffbffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x400U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                             >> 0xaU)) 
                                    << 0xaU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffff7ffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x800U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                             >> 0xbU)) 
                                    << 0xbU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffefffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x1000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                              >> 0xcU)) 
                                     << 0xcU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffdfffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x2000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                              >> 0xdU)) 
                                     << 0xdU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffffbfffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x4000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                              >> 0xeU)) 
                                     << 0xeU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffff7fffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x8000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                              >> 0xfU)) 
                                     << 0xfU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffeffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x10000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                               >> 0x10U)) 
                                      << 0x10U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffdffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x20000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                               >> 0x11U)) 
                                      << 0x11U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfffbffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x40000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                               >> 0x12U)) 
                                      << 0x12U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfff7ffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x80000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                               >> 0x13U)) 
                                      << 0x13U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffefffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x100000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                >> 0x14U)) 
                                       << 0x14U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffdfffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x200000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                >> 0x15U)) 
                                       << 0x15U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xffbfffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x400000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                >> 0x16U)) 
                                       << 0x16U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xff7fffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x800000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                >> 0x17U)) 
                                       << 0x17U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfeffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x1000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                 >> 0x18U)) 
                                        << 0x18U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfdffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x2000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                 >> 0x19U)) 
                                        << 0x19U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xfbffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x4000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                 >> 0x1aU)) 
                                        << 0x1aU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xf7ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x8000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                 >> 0x1bU)) 
                                        << 0x1bU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xefffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x10000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                  >> 0x1cU)) 
                                         << 0x1cU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xdfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x20000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                  >> 0x1dU)) 
                                         << 0x1dU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0xbfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x40000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                  >> 0x1eU)) 
                                         << 0x1eU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inten 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inten 
                    = ((0x7fffffffU & vlTOPp->apb_gpio__DOT__r_gpio_inten) 
                       | (0x80000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_inten 
                                                  >> 0x1fU)) 
                                         << 0x1fU)));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffffeU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffffdU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffffbU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffff7U 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffffefU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffffdfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffffbfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffff7fU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffeffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffdffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffffbffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffff7ffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffefffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffdfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffffbfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffff7fffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffeffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffdffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfffbffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfff7ffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffefffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffdfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xffbfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xff7fffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfeffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfdffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xfbffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xf7ffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xefffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xdfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0xbfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
        vlTOPp->apb_gpio__DOT__r_gpio_inten = (0x7fffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_inten);
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_gpen))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffffeU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (1U & (IData)(vlTOPp->apb_gpio__DOT__s_gpio_en)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffffdU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (2U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                       >> 1U)) << 1U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffffbU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (4U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                       >> 2U)) << 2U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffff7U & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (8U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                       >> 3U)) << 3U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffffefU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x10U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                          >> 4U)) << 4U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffffdfU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x20U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                          >> 5U)) << 5U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffffbfU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x40U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                          >> 6U)) << 6U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffff7fU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x80U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                          >> 7U)) << 7U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffeffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x100U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                           >> 8U)) 
                                  << 8U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffdffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x200U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                           >> 9U)) 
                                  << 9U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffffbffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x400U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                           >> 0xaU)) 
                                  << 0xaU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffff7ffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x800U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                           >> 0xbU)) 
                                  << 0xbU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffefffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x1000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            >> 0xcU)) 
                                   << 0xcU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffdfffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x2000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            >> 0xdU)) 
                                   << 0xdU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffffbfffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x4000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            >> 0xeU)) 
                                   << 0xeU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffff7fffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x8000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            >> 0xfU)) 
                                   << 0xfU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffeffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x10000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                             >> 0x10U)) 
                                    << 0x10U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffdffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x20000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                             >> 0x11U)) 
                                    << 0x11U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfffbffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x40000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                             >> 0x12U)) 
                                    << 0x12U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfff7ffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x80000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                             >> 0x13U)) 
                                    << 0x13U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffefffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x100000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                              >> 0x14U)) 
                                     << 0x14U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffdfffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x200000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                              >> 0x15U)) 
                                     << 0x15U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xffbfffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x400000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                              >> 0x16U)) 
                                     << 0x16U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xff7fffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x800000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                              >> 0x17U)) 
                                     << 0x17U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfeffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x1000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                               >> 0x18U)) 
                                      << 0x18U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfdffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x2000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                               >> 0x19U)) 
                                      << 0x19U)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xfbffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x4000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                               >> 0x1aU)) 
                                      << 0x1aU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xf7ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x8000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                               >> 0x1bU)) 
                                      << 0x1bU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xefffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x10000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                                >> 0x1cU)) 
                                       << 0x1cU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xdfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x20000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                                >> 0x1dU)) 
                                       << 0x1dU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0xbfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x40000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                                >> 0x1eU)) 
                                       << 0x1eU)));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_gpen 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_en = 
                    ((0x7fffffffU & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                     | (0x80000000U & ((IData)((vlTOPp->apb_gpio__DOT__s_gpio_en 
                                                >> 0x1fU)) 
                                       << 0x1fU)));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffffeU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffffdU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffffbU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffff7U 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffffefU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffffdfU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffffbfU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffff7fU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffeffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffdffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffffbffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffff7ffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffefffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffdfffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffffbfffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffff7fffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffeffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffdffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfffbffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfff7ffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffefffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffdfffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xffbfffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xff7fffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfeffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfdffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xfbffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xf7ffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xefffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xdfffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0xbfffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
        vlTOPp->apb_gpio__DOT__r_gpio_en = (0x7fffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en);
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_inttype))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffffffffcULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | (IData)((IData)((3U & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]))));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffffffff3ULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 2U))))) 
                          << 2U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffffffffcfULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 4U))))) 
                          << 4U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffffffff3fULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 6U))))) 
                          << 6U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffffffcffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 8U))))) 
                          << 8U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffffff3ffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0xaU))))) 
                          << 0xaU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffffffcfffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0xcU))))) 
                          << 0xcU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffffff3fffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0xeU))))) 
                          << 0xeU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffffcffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x10U))))) 
                          << 0x10U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffff3ffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x12U))))) 
                          << 0x12U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffffcfffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x14U))))) 
                          << 0x14U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffff3fffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x16U))))) 
                          << 0x16U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffffcffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x18U))))) 
                          << 0x18U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffff3ffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 6U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x1aU))))) 
                          << 0x1aU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffffcfffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x1cU))))) 
                          << 0x1cU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffff3fffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                  << 2U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                                    >> 0x1eU))))) 
                          << 0x1eU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffffcffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]))) 
                          << 0x20U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffff3ffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 2U))))) 
                          << 0x22U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffffcfffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 4U))))) 
                          << 0x24U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffff3fffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 6U))))) 
                          << 0x26U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffffcffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 8U))))) 
                          << 0x28U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffff3ffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0xaU))))) 
                          << 0x2aU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffffcfffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0xcU))))) 
                          << 0x2cU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffff3fffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0xeU))))) 
                          << 0x2eU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfffcffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x10U))))) 
                          << 0x30U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfff3ffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x12U))))) 
                          << 0x32U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xffcfffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x14U))))) 
                          << 0x34U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xff3fffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x16U))))) 
                          << 0x36U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xfcffffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x18U))))) 
                          << 0x38U));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xf3ffffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x1aU))))) 
                          << 0x3aU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0xcfffffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 4U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x1cU))))) 
                          << 0x3cU));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_inttype 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                    = ((0x3fffffffffffffffULL & vlTOPp->apb_gpio__DOT__r_gpio_inttype) 
                       | ((QData)((IData)((3U & ((vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                                  << 2U) 
                                                 | (vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                                    >> 0x1eU))))) 
                          << 0x3eU));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffffffffcULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffffffff3ULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffffffffcfULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffffffff3fULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffffffcffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffffff3ffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffffffcfffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffffff3fffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffffcffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffff3ffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffffcfffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffff3fffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffffcffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffff3ffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffffcfffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffff3fffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffffcffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffff3ffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffffcfffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffff3fffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffffcffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffff3ffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffffcfffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffff3fffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfffcffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfff3ffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xffcfffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xff3fffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xfcffffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xf3ffffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0xcfffffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
        vlTOPp->apb_gpio__DOT__r_gpio_inttype = (0x3fffffffffffffffULL 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inttype);
    }
    if (vlTOPp->HRESETn) {
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffffeU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (1U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffffdU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (2U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffffbU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (4U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffff7U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (8U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffffefU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x10U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffffdfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x20U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffffbfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x40U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffff7fU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x80U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffeffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x100U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffdffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x200U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffffbffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x400U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffff7ffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x800U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffefffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x1000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffdfffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x2000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffffbfffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x4000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffff7fffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x8000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffeffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x10000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffdffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x20000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfffbffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x40000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfff7ffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x80000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffefffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x100000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffdfffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x200000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xffbfffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x400000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xff7fffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x800000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfeffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x1000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfdffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x2000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xfbffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x4000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xf7ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x8000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xefffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x10000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xdfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x20000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0xbfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x40000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_in = ((0x7fffffffU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in) 
                                                | (0x80000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_sync1));
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffffeU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffffdU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffffbU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffff7U 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffffefU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffffdfU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffffbfU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffff7fU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffeffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffdffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffffbffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffff7ffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffefffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffdfffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffffbfffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffff7fffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffeffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffdffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfffbffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfff7ffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffefffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffdfffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xffbfffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xff7fffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfeffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfdffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xfbffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xf7ffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xefffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xdfffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0xbfffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
        vlTOPp->apb_gpio__DOT__r_gpio_in = (0x7fffffffU 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_in);
    }
    if (vlTOPp->HRESETn) {
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_write_cfg))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xfU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 1U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 2U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf00U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 3U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 4U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf0000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 5U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf00000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 6U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 7U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] 
                    = ((0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]) 
                       | (0xf0000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 8U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xfU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 9U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xaU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf00U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xbU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xcU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf0000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xdU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf00000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xeU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0xfU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] 
                    = ((0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]) 
                       | (0xf0000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x10U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xfU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x11U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x12U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf00U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x13U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x14U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf0000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x15U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf00000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x16U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x17U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] 
                    = ((0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]) 
                       | (0xf0000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x18U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xfU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x19U)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1aU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf00U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1bU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1cU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf0000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1dU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf00000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1eU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
        if (vlTOPp->apb_gpio__DOT__s_write) {
            if ((1U & (IData)((vlTOPp->apb_gpio__DOT__s_write_cfg 
                               >> 0x1fU)))) {
                vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] 
                    = ((0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]) 
                       | (0xf0000000U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]));
            }
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U] = 
            (0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U] = 
            (0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U] = 
            (0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xfffffff0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xffffff0fU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xfffff0ffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xffff0fffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xfff0ffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xff0fffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xf0ffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
        vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U] = 
            (0xfffffffU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]);
    }
    vlTOPp->gpio_out = vlTOPp->apb_gpio__DOT__r_gpio_out;
    vlTOPp->gpio_dir = vlTOPp->apb_gpio__DOT__r_gpio_dir;
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffeULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | (IData)((IData)(
                                                        (1U 
                                                         & vlTOPp->apb_gpio__DOT__r_gpio_en))));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffdULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 1U)))) 
                                         << 1U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffffbULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 2U)))) 
                                         << 2U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffff7ULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 3U)))) 
                                         << 3U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffefULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 4U)))) 
                                         << 4U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffdfULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 5U)))) 
                                         << 5U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffffbfULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 6U)))) 
                                         << 6U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffff7fULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 7U)))) 
                                         << 7U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffeffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 8U)))) 
                                         << 8U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffdffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 9U)))) 
                                         << 9U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffffbffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xaU)))) 
                                         << 0xaU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffff7ffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xbU)))) 
                                         << 0xbU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffefffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xcU)))) 
                                         << 0xcU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffdfffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xdU)))) 
                                         << 0xdU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffffbfffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xeU)))) 
                                         << 0xeU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffff7fffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0xfU)))) 
                                         << 0xfU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffeffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x10U)))) 
                                         << 0x10U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffdffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x11U)))) 
                                         << 0x11U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffffbffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x12U)))) 
                                         << 0x12U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffff7ffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x13U)))) 
                                         << 0x13U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffefffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x14U)))) 
                                         << 0x14U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffdfffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x15U)))) 
                                         << 0x15U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffffbfffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x16U)))) 
                                         << 0x16U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffff7fffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x17U)))) 
                                         << 0x17U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffeffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x18U)))) 
                                         << 0x18U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffdffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x19U)))) 
                                         << 0x19U));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffffbffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1aU)))) 
                                         << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xfffffffff7ffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1bU)))) 
                                         << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffefffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1cU)))) 
                                         << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffdfffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1dU)))) 
                                         << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffffbfffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1eU)))) 
                                         << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_cg_en = ((0xffffffff7fffffffULL 
                                       & vlTOPp->apb_gpio__DOT__s_cg_en) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                             >> 0x1fU)))) 
                                         << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffeffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffdffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffffbffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffff7ffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffefffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffdfffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffffbfffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffff7fffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffeffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffdffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffffbffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffff7ffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffefffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffdfffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffffbfffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffff7fffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffeffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffdffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfffbffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfff7ffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffefffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffdfffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xffbfffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xff7fffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfeffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfdffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xfbffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xf7ffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xefffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xdfffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0xbfffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    vlTOPp->apb_gpio__DOT__s_cg_en = (0x7fffffffffffffffULL 
                                      & vlTOPp->apb_gpio__DOT__s_cg_en);
    if (vlTOPp->HRESETn) {
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (1U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffffdU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (2U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffffbU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (4U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffff7U 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (8U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffffefU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x10U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffffdfU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x20U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffffbfU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x40U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffff7fU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x80U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffeffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x100U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffdffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x200U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffffbffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x400U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffff7ffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x800U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffefffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x1000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffdfffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x2000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffffbfffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x4000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffff7fffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x8000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffeffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x10000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffdffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x20000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfffbffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x40000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfff7ffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x80000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffefffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x100000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffdfffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x200000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xffbfffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x400000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xff7fffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x800000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfeffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x1000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfdffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x2000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xfbffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x4000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xf7ffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x8000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xefffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x10000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xdfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x20000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0xbfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x40000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (
                                                   (0x7fffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                                   | (0x80000000U 
                                                      & vlTOPp->apb_gpio__DOT__r_gpio_sync0));
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffffeU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffffdU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffffbU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffff7U 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffffefU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffffdfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffffbfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffff7fU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffeffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffdffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffffbffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffff7ffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffefffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffdfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffffbfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffff7fffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffeffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffdffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfffbffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfff7ffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffefffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffdfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xffbfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xff7fffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfeffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfdffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xfbffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xf7ffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xefffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xdfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0xbfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
        vlTOPp->apb_gpio__DOT__r_gpio_sync1 = (0x7fffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync1);
    }
    vlTOPp->gpio_padcfg[0U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[0U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[0U] = ((0xfffffffU & vlTOPp->gpio_padcfg[0U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[1U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[1U] = ((0xfffffffU & vlTOPp->gpio_padcfg[1U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[2U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[2U] = ((0xfffffffU & vlTOPp->gpio_padcfg[2U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffffff0U & vlTOPp->gpio_padcfg[3U]) 
                               | (0xfU & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xffffff0fU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffff0ffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf00U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xffff0fffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfff0ffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xff0fffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf00000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xf0ffffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->gpio_padcfg[3U] = ((0xfffffffU & vlTOPp->gpio_padcfg[3U]) 
                               | (0xf0000000U & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    if (vlTOPp->HRESETn) {
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffffeU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (1U 
                                                      & vlTOPp->gpio_in));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffffdU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (2U 
                                                      & vlTOPp->gpio_in));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffffbU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (4U 
                                                      & vlTOPp->gpio_in));
        }
        if ((1U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffff7U 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (8U 
                                                      & vlTOPp->gpio_in));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffffefU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x10U 
                                                      & vlTOPp->gpio_in));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffffdfU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x20U 
                                                      & vlTOPp->gpio_in));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffffbfU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x40U 
                                                      & vlTOPp->gpio_in));
        }
        if ((2U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffff7fU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x80U 
                                                      & vlTOPp->gpio_in));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffeffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x100U 
                                                      & vlTOPp->gpio_in));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffdffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x200U 
                                                      & vlTOPp->gpio_in));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffffbffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x400U 
                                                      & vlTOPp->gpio_in));
        }
        if ((4U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffff7ffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x800U 
                                                      & vlTOPp->gpio_in));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffefffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x1000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffdfffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x2000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffffbfffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x4000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((8U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffff7fffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x8000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffeffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x10000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffdffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x20000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfffbffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x40000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x10U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfff7ffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x80000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffefffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x100000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffdfffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x200000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xffbfffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x400000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x20U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xff7fffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x800000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfeffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x1000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfdffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x2000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xfbffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x4000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x40U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xf7ffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x8000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xefffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x10000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xdfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x20000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0xbfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x40000000U 
                                                      & vlTOPp->gpio_in));
        }
        if ((0x80U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en))) {
            vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (
                                                   (0x7fffffffU 
                                                    & vlTOPp->apb_gpio__DOT__r_gpio_sync0) 
                                                   | (0x80000000U 
                                                      & vlTOPp->gpio_in));
        }
    } else {
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffffeU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffffdU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffffbU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffff7U 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffffefU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffffdfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffffbfU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffff7fU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffeffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffdffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffffbffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffff7ffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffefffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffdfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffffbfffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffff7fffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffeffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffdffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfffbffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfff7ffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffefffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffdfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xffbfffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xff7fffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfeffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfdffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xfbffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xf7ffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xefffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xdfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0xbfffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
        vlTOPp->apb_gpio__DOT__r_gpio_sync0 = (0x7fffffffU 
                                               & vlTOPp->apb_gpio__DOT__r_gpio_sync0);
    }
    vlTOPp->gpio_in_sync = vlTOPp->apb_gpio__DOT__r_gpio_sync1;
    vlTOPp->apb_gpio__DOT__s_gpio_rise = (vlTOPp->apb_gpio__DOT__r_gpio_sync1 
                                          & (~ vlTOPp->apb_gpio__DOT__r_gpio_in));
    vlTOPp->apb_gpio__DOT__s_gpio_fall = ((~ vlTOPp->apb_gpio__DOT__r_gpio_sync1) 
                                          & vlTOPp->apb_gpio__DOT__r_gpio_in);
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffeU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (1U & ((((IData)(vlTOPp->apb_gpio__DOT__s_cg_en) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 1U))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 2U))) 
                                                | (IData)(
                                                          (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                           >> 3U)))));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffdU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (2U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 4U)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 5U))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 6U))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 7U))) 
                                                << 1U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfffbU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (4U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 8U)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 9U))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 0xaU))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xbU))) 
                                                << 2U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfff7U & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (8U & (((((IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xcU)) 
                                                   | (IData)(
                                                             (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                              >> 0xdU))) 
                                                  | (IData)(
                                                            (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                             >> 0xeU))) 
                                                 | (IData)(
                                                           (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                            >> 0xfU))) 
                                                << 3U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffefU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x10U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x10U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x11U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x12U))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x13U))) 
                                                   << 4U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffdfU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x20U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x14U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x15U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x16U))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x17U))) 
                                                   << 5U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xffbfU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x40U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x18U)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x19U))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x1aU))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1bU))) 
                                                   << 6U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xff7fU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x80U & (
                                                   ((((IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1cU)) 
                                                      | (IData)(
                                                                (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                 >> 0x1dU))) 
                                                     | (IData)(
                                                               (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                                >> 0x1eU))) 
                                                    | (IData)(
                                                              (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                               >> 0x1fU))) 
                                                   << 7U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfeffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x100U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x20U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x21U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x22U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x23U))) 
                                           << 8U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfdffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x200U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x24U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x25U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x26U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x27U))) 
                                           << 9U)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xfbffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x400U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x28U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x29U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x2aU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2bU))) 
                                           << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xf7ffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x800U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2cU)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x2dU))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x2eU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x2fU))) 
                                           << 0xbU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xefffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x1000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x30U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x31U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x32U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x33U))) 
                                           << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xdfffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x2000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x34U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x35U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x36U))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x37U))) 
                                           << 0xdU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0xbfffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x4000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x38U)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x39U))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x3aU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3bU))) 
                                           << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_clk_en = ((0x7fffU & (IData)(vlTOPp->apb_gpio__DOT__s_clk_en)) 
                                       | (0x8000U & 
                                          (((((IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3cU)) 
                                              | (IData)(
                                                        (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                         >> 0x3dU))) 
                                             | (IData)(
                                                       (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                        >> 0x3eU))) 
                                            | (IData)(
                                                      (vlTOPp->apb_gpio__DOT__s_cg_en 
                                                       >> 0x3fU))) 
                                           << 0xfU)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (1U & 
                                               (((~ (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 1U))) 
                                                 & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (2U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 3U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 2U))) 
                                                 << 1U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (4U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 5U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 4U))) 
                                                 << 2U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (8U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 7U))) 
                                                  & (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 6U))) 
                                                 << 3U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 9U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 8U))) 
                                                   << 4U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xbU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xaU))) 
                                                   << 5U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xdU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xcU))) 
                                                   << 6U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xfU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0xeU))) 
                                                   << 7U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x100U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x11U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x10U))) 
                                                   << 8U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x200U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x13U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x12U))) 
                                                   << 9U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x400U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x15U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x14U))) 
                                                   << 0xaU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x800U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x17U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x16U))) 
                                                   << 0xbU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x1000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x19U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x18U))) 
                                                   << 0xcU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x2000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1aU))) 
                                                   << 0xdU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x4000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1cU))) 
                                                   << 0xeU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x8000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x1eU))) 
                                                   << 0xfU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x21U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x20U))) 
                                                   << 0x10U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x23U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x22U))) 
                                                   << 0x11U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x25U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x24U))) 
                                                   << 0x12U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x27U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x26U))) 
                                                   << 0x13U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x100000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x29U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x28U))) 
                                                   << 0x14U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x200000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2aU))) 
                                                   << 0x15U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x400000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2cU))) 
                                                   << 0x16U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x800000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x2eU))) 
                                                   << 0x17U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x1000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x31U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x30U))) 
                                                   << 0x18U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x2000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x33U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x32U))) 
                                                   << 0x19U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x4000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x35U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x34U))) 
                                                   << 0x1aU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x8000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x37U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x36U))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x10000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x39U))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x38U))) 
                                                   << 0x1cU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x20000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3bU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3aU))) 
                                                   << 0x1dU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x40000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3dU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3cU))) 
                                                   << 0x1eU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_rise = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rise) 
                                            | (0x80000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3fU))) 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x3eU))) 
                                                   << 0x1fU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_rise)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (1U & 
                                               (((~ (IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 1U))) 
                                                 & (~ (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype))) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (2U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 3U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)))) 
                                                 << 1U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (4U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 5U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)))) 
                                                 << 2U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (8U & 
                                               ((((~ (IData)(
                                                             (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                              >> 7U))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)))) 
                                                 << 3U) 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 9U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 8U)))) 
                                                   << 4U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xbU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xaU)))) 
                                                   << 5U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xdU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xcU)))) 
                                                   << 6U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xfU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xeU)))) 
                                                   << 7U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x100U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x11U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x10U)))) 
                                                   << 8U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x200U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x13U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x12U)))) 
                                                   << 9U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x400U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x15U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x14U)))) 
                                                   << 0xaU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x800U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x17U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x16U)))) 
                                                   << 0xbU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x1000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x19U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x18U)))) 
                                                   << 0xcU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x2000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1aU)))) 
                                                   << 0xdU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x4000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1cU)))) 
                                                   << 0xeU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x8000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1eU)))) 
                                                   << 0xfU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x21U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x20U)))) 
                                                   << 0x10U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x23U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x22U)))) 
                                                   << 0x11U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x25U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x24U)))) 
                                                   << 0x12U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x27U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x26U)))) 
                                                   << 0x13U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x100000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x29U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x28U)))) 
                                                   << 0x14U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x200000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2aU)))) 
                                                   << 0x15U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x400000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2cU)))) 
                                                   << 0x16U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x800000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2eU)))) 
                                                   << 0x17U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x1000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x31U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x30U)))) 
                                                   << 0x18U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x2000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x33U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x32U)))) 
                                                   << 0x19U) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x4000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x35U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x34U)))) 
                                                   << 0x1aU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x8000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x37U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x36U)))) 
                                                   << 0x1bU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x10000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x39U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x38U)))) 
                                                   << 0x1cU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x20000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3bU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3aU)))) 
                                                   << 0x1dU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x40000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3dU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3cU)))) 
                                                   << 0x1eU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_fall = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                            | (0x80000000U 
                                               & ((((~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3eU)))) 
                                                   << 0x1fU) 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_fall)));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffeU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (1U & 
                                               (((IData)(
                                                         (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                          >> 1U)) 
                                                 & (~ (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype))) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffdU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (2U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 3U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)))) 
                                                 << 1U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffffbU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (4U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 5U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)))) 
                                                 << 2U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffff7U 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (8U & 
                                               ((((IData)(
                                                          (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                           >> 7U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)))) 
                                                 << 3U) 
                                                & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                   | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffefU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 9U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 8U)))) 
                                                   << 4U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffdfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xbU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xaU)))) 
                                                   << 5U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffffbfU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xdU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xcU)))) 
                                                   << 6U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffff7fU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xfU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0xeU)))) 
                                                   << 7U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffeffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x100U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x11U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x10U)))) 
                                                   << 8U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffdffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x200U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x13U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x12U)))) 
                                                   << 9U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffffbffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x400U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x15U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x14U)))) 
                                                   << 0xaU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffff7ffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x800U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x17U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x16U)))) 
                                                   << 0xbU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffefffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x1000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x19U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x18U)))) 
                                                   << 0xcU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffdfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x2000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1aU)))) 
                                                   << 0xdU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffffbfffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x4000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1cU)))) 
                                                   << 0xeU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffff7fffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x8000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x1eU)))) 
                                                   << 0xfU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffeffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x21U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x20U)))) 
                                                   << 0x10U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffdffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x23U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x22U)))) 
                                                   << 0x11U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfffbffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x25U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x24U)))) 
                                                   << 0x12U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfff7ffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x27U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x26U)))) 
                                                   << 0x13U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffefffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x100000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x29U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x28U)))) 
                                                   << 0x14U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffdfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x200000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2aU)))) 
                                                   << 0x15U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xffbfffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x400000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2cU)))) 
                                                   << 0x16U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xff7fffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x800000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x2eU)))) 
                                                   << 0x17U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfeffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x1000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x31U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x30U)))) 
                                                   << 0x18U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfdffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x2000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x33U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x32U)))) 
                                                   << 0x19U) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xfbffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x4000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x35U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x34U)))) 
                                                   << 0x1aU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xf7ffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x8000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x37U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x36U)))) 
                                                   << 0x1bU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xefffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x10000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x39U)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x38U)))) 
                                                   << 0x1cU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xdfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x20000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3bU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3aU)))) 
                                                   << 0x1dU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0xbfffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x40000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3dU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3cU)))) 
                                                   << 0x1eU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_rifa = ((0x7fffffffU 
                                             & vlTOPp->apb_gpio__DOT__s_is_int_rifa) 
                                            | (0x80000000U 
                                               & ((((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3fU)) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                  >> 0x3eU)))) 
                                                   << 0x1fU) 
                                                  & (vlTOPp->apb_gpio__DOT__s_gpio_rise 
                                                     | vlTOPp->apb_gpio__DOT__s_gpio_fall))));
    vlTOPp->apb_gpio__DOT__s_is_int_all = ((vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                            & vlTOPp->apb_gpio__DOT__r_gpio_en) 
                                           & ((vlTOPp->apb_gpio__DOT__s_is_int_rise 
                                               | vlTOPp->apb_gpio__DOT__s_is_int_fall) 
                                              | vlTOPp->apb_gpio__DOT__s_is_int_rifa));
    vlTOPp->__SYM__interrupt = (0U != vlTOPp->apb_gpio__DOT__s_is_int_all);
}

VL_INLINE_OPT void Vapb_gpio::_combo__TOP__4(Vapb_gpio__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_gpio::_combo__TOP__4\n"); );
    Vapb_gpio* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_gpio__DOT__s_write_out = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                if ((0xeU != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_out 
                        = ((3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))
                            ? (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_out)
                            : ((0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))
                                ? (0xffffffff00000000ULL 
                                   | vlTOPp->apb_gpio__DOT__s_write_out)
                                : ((4U == (0x1fU & 
                                           ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))
                                    ? (0xffffffffULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_out)
                                    : ((0x12U == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U)))
                                        ? (0xffffffff00000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_out)
                                        : ((5U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))
                                            ? (0xffffffffULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_out)
                                            : (0xffffffff00000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_out))))));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_dir = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                vlTOPp->apb_gpio__DOT__s_write_dir 
                    = (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_dir);
            } else {
                if ((0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_dir 
                        = (0xffffffff00000000ULL | vlTOPp->apb_gpio__DOT__s_write_dir);
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_inten = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_write_inten 
                        = (0xffffffffULL | vlTOPp->apb_gpio__DOT__s_write_inten);
                } else {
                    if ((0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_write_inten 
                            = (0xffffffff00000000ULL 
                               | vlTOPp->apb_gpio__DOT__s_write_inten);
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_gpen = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            if ((8U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                if ((0x15U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((0x16U != (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_write_gpen 
                                            = ((1U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (0xffffffffULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_gpen)
                                                : (0xffffffff00000000ULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_gpen));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_inttype = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_write_inttype 
                                = (0xffffULL | vlTOPp->apb_gpio__DOT__s_write_inttype);
                        } else {
                            if ((8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_write_inttype 
                                    = (0xffff0000ULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_inttype);
                            } else {
                                if ((0x15U == (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_write_inttype 
                                        = (0xffff00000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_inttype);
                                } else {
                                    if ((0x16U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_write_inttype 
                                            = (0xffff000000000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_inttype);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write_cfg = 0ULL;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if ((1U & (~ ((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U))) 
                                | (0x14U == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                               | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                              | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                             | (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) 
                            | (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                           | (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0xfU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U))))))) {
                if (((((((((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U))) 
                           | (0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                          | (0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) 
                         | (0xdU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                        | (0x18U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (0x19U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) 
                      | (0x1aU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                     | (0x1bU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U))))) {
                    vlTOPp->apb_gpio__DOT__s_write_cfg 
                        = ((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))
                            ? (0xffULL | vlTOPp->apb_gpio__DOT__s_write_cfg)
                            : ((0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))
                                ? (0xff00ULL | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                : ((0xcU == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))
                                    ? (0xff0000ULL 
                                       | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                    : ((0xdU == (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                        ? (0xff000000ULL 
                                           | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                        : ((0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))
                                            ? (0xff00000000ULL 
                                               | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                            : ((0x19U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (0xff0000000000ULL 
                                                   | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->PADDR) 
                                                        >> 2U)))
                                                    ? 
                                                   (0xff000000000000ULL 
                                                    | vlTOPp->apb_gpio__DOT__s_write_cfg)
                                                    : 
                                                   (0xff00000000000000ULL 
                                                    | vlTOPp->apb_gpio__DOT__s_write_cfg))))))));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_write = 0U;
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        vlTOPp->apb_gpio__DOT__s_write = 1U;
    }
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffeULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | (IData)((IData)(
                                                           (1U 
                                                            & vlTOPp->apb_gpio__DOT__r_gpio_out))));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffdULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 1U)))) 
                                            << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffffbULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 2U)))) 
                                            << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffff7ULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 3U)))) 
                                            << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffefULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 4U)))) 
                                            << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffdfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 5U)))) 
                                            << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffffbfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 6U)))) 
                                            << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffff7fULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 7U)))) 
                                            << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffeffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 8U)))) 
                                            << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffdffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 9U)))) 
                                            << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffffbffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xaU)))) 
                                            << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffff7ffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xbU)))) 
                                            << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffefffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xcU)))) 
                                            << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffdfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xdU)))) 
                                            << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffffbfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xeU)))) 
                                            << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffff7fffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0xfU)))) 
                                            << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffeffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x10U)))) 
                                            << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffdffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x11U)))) 
                                            << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffffbffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x12U)))) 
                                            << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffff7ffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x13U)))) 
                                            << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffefffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x14U)))) 
                                            << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffdfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x15U)))) 
                                            << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffffbfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x16U)))) 
                                            << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffff7fffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x17U)))) 
                                            << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffeffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x18U)))) 
                                            << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffdffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x19U)))) 
                                            << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffffbffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1aU)))) 
                                            << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xfffffffff7ffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1bU)))) 
                                            << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffefffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1cU)))) 
                                            << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffdfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1dU)))) 
                                            << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffffbfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1eU)))) 
                                            << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = ((0xffffffff7fffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                >> 0x1fU)))) 
                                            << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffeffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffdffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffffbffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffff7ffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffefffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffdfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffffbfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffff7fffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffeffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffdffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffffbffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffff7ffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffefffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffdfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffffbfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffff7fffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffeffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffdffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfffbffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfff7ffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffefffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffdfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xffbfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xff7fffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfeffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfdffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xfbffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xf7ffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xefffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xdfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0xbfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    vlTOPp->apb_gpio__DOT__s_gpio_out = (0x7fffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_out);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                if ((0xeU != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    if ((3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                               | (IData)((IData)(vlTOPp->PWDATA)));
                    } else {
                        if ((0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_out 
                                = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                   | ((QData)((IData)(vlTOPp->PWDATA)) 
                                      << 0x20U));
                        } else {
                            if ((4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffeULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                             | vlTOPp->PWDATA)))));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffdULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 1U)))) 
                                          << 1U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffffbULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 2U)))) 
                                          << 2U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffff7ULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 3U)))) 
                                          << 3U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffefULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 4U)))) 
                                          << 4U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffdfULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 5U)))) 
                                          << 5U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffffbfULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 6U)))) 
                                          << 6U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffff7fULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 7U)))) 
                                          << 7U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffeffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 8U)))) 
                                          << 8U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffdffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 9U)))) 
                                          << 9U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffffbffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xaU)))) 
                                          << 0xaU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffff7ffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xbU)))) 
                                          << 0xbU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffefffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xcU)))) 
                                          << 0xcU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffdfffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xdU)))) 
                                          << 0xdU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffffbfffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xeU)))) 
                                          << 0xeU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffff7fffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0xfU)))) 
                                          << 0xfU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffeffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x10U)))) 
                                          << 0x10U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffdffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x11U)))) 
                                          << 0x11U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffffbffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x12U)))) 
                                          << 0x12U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffff7ffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x13U)))) 
                                          << 0x13U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffefffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x14U)))) 
                                          << 0x14U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffdfffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x15U)))) 
                                          << 0x15U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffffbfffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x16U)))) 
                                          << 0x16U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffff7fffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x17U)))) 
                                          << 0x17U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffeffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x18U)))) 
                                          << 0x18U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffdffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x19U)))) 
                                          << 0x19U));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffffbffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1aU)))) 
                                          << 0x1aU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xfffffffff7ffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1bU)))) 
                                          << 0x1bU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffefffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1cU)))) 
                                          << 0x1cU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffdfffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1dU)))) 
                                          << 0x1dU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffffbfffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1eU)))) 
                                          << 0x1eU));
                                vlTOPp->apb_gpio__DOT__s_gpio_out 
                                    = ((0xffffffff7fffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                               | vlTOPp->PWDATA) 
                                                              >> 0x1fU)))) 
                                          << 0x1fU));
                            } else {
                                if ((0x12U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((5U == (0x1fU 
                                                & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffeULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                     & (~ vlTOPp->PWDATA))))));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffdULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 1U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 1U)))))) 
                                                  << 1U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffffbULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 2U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 2U)))))) 
                                                  << 2U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffff7ULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 3U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 3U)))))) 
                                                  << 3U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffefULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 4U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 4U)))))) 
                                                  << 4U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffdfULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 5U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 5U)))))) 
                                                  << 5U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffffbfULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 6U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 6U)))))) 
                                                  << 6U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffff7fULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 7U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 7U)))))) 
                                                  << 7U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffeffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 8U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 8U)))))) 
                                                  << 8U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffdffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 9U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 9U)))))) 
                                                  << 9U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffffbffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xaU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xaU)))))) 
                                                  << 0xaU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffff7ffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xbU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xbU)))))) 
                                                  << 0xbU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffefffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xcU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xcU)))))) 
                                                  << 0xcU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffdfffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xdU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xdU)))))) 
                                                  << 0xdU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffffbfffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xeU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xeU)))))) 
                                                  << 0xeU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffff7fffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0xfU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0xfU)))))) 
                                                  << 0xfU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffeffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x10U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x10U)))))) 
                                                  << 0x10U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffdffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x11U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x11U)))))) 
                                                  << 0x11U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffffbffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x12U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x12U)))))) 
                                                  << 0x12U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffff7ffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x13U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x13U)))))) 
                                                  << 0x13U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffefffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x14U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x14U)))))) 
                                                  << 0x14U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffdfffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x15U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x15U)))))) 
                                                  << 0x15U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffffbfffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x16U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x16U)))))) 
                                                  << 0x16U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffff7fffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x17U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x17U)))))) 
                                                  << 0x17U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffeffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x18U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x18U)))))) 
                                                  << 0x18U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffdffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x19U) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x19U)))))) 
                                                  << 0x19U));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffffbffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1aU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1aU)))))) 
                                                  << 0x1aU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xfffffffff7ffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1bU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1bU)))))) 
                                                  << 0x1bU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffefffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1cU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1cU)))))) 
                                                  << 0x1cU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffdfffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1dU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1dU)))))) 
                                                  << 0x1dU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffffbfffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1eU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1eU)))))) 
                                                  << 0x1eU));
                                        vlTOPp->apb_gpio__DOT__s_gpio_out 
                                            = ((0xffffffff7fffffffULL 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_out) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->apb_gpio__DOT__r_gpio_out 
                                                                       >> 0x1fU) 
                                                                      & (~ 
                                                                         (vlTOPp->PWDATA 
                                                                          >> 0x1fU)))))) 
                                                  << 0x1fU));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffeULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | (IData)((IData)(
                                                           (1U 
                                                            & vlTOPp->apb_gpio__DOT__r_gpio_dir))));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffdULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 1U)))) 
                                            << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffffbULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 2U)))) 
                                            << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffff7ULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 3U)))) 
                                            << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffefULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 4U)))) 
                                            << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffdfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 5U)))) 
                                            << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffffbfULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 6U)))) 
                                            << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffff7fULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 7U)))) 
                                            << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffeffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 8U)))) 
                                            << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffdffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 9U)))) 
                                            << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffffbffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xaU)))) 
                                            << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffff7ffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xbU)))) 
                                            << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffefffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xcU)))) 
                                            << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffdfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xdU)))) 
                                            << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffffbfffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xeU)))) 
                                            << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffff7fffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0xfU)))) 
                                            << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffeffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x10U)))) 
                                            << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffdffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x11U)))) 
                                            << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffffbffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x12U)))) 
                                            << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffff7ffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x13U)))) 
                                            << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffefffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x14U)))) 
                                            << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffdfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x15U)))) 
                                            << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffffbfffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x16U)))) 
                                            << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffff7fffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x17U)))) 
                                            << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffeffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x18U)))) 
                                            << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffdffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x19U)))) 
                                            << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffffbffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1aU)))) 
                                            << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xfffffffff7ffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1bU)))) 
                                            << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffefffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1cU)))) 
                                            << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffdfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1dU)))) 
                                            << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffffbfffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1eU)))) 
                                            << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = ((0xffffffff7fffffffULL 
                                          & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->apb_gpio__DOT__r_gpio_dir 
                                                                >> 0x1fU)))) 
                                            << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffeffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffdffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffffbffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffff7ffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffefffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffdfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffffbfffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffff7fffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffeffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffdffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffffbffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffff7ffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffefffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffdfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffffbfffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffff7fffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffeffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffdffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfffbffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfff7ffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffefffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffdfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xffbfffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xff7fffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfeffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfdffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xfbffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xf7ffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xefffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xdfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0xbfffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    vlTOPp->apb_gpio__DOT__s_gpio_dir = (0x7fffffffffffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_dir);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if (((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                    >> 2U))) | (0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
                  | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) | (0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) 
                | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) 
              | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) | (0x13U 
                                              == (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U))))) {
            if ((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                 >> 2U)))) {
                vlTOPp->apb_gpio__DOT__s_gpio_dir = 
                    ((0xffffffff00000000ULL & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                     | (IData)((IData)(vlTOPp->PWDATA)));
            } else {
                if ((0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_gpio_dir 
                        = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_dir) 
                           | ((QData)((IData)(vlTOPp->PWDATA)) 
                              << 0x20U));
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffeULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & vlTOPp->apb_gpio__DOT__r_gpio_inten))));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffdULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 1U)))) 
                                              << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffffbULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 2U)))) 
                                              << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffff7ULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 3U)))) 
                                              << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffefULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 4U)))) 
                                              << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffdfULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 5U)))) 
                                              << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffffbfULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 6U)))) 
                                              << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffff7fULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 7U)))) 
                                              << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffeffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 8U)))) 
                                              << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffdffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 9U)))) 
                                              << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffffbffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xaU)))) 
                                              << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffff7ffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xbU)))) 
                                              << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffefffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xcU)))) 
                                              << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffdfffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xdU)))) 
                                              << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffffbfffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xeU)))) 
                                              << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffff7fffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0xfU)))) 
                                              << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffeffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x10U)))) 
                                              << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffdffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x11U)))) 
                                              << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffffbffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x12U)))) 
                                              << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffff7ffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x13U)))) 
                                              << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffefffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x14U)))) 
                                              << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffdfffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x15U)))) 
                                              << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffffbfffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x16U)))) 
                                              << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffff7fffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x17U)))) 
                                              << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffeffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x18U)))) 
                                              << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffdffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x19U)))) 
                                              << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffffbffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1aU)))) 
                                              << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xfffffffff7ffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1bU)))) 
                                              << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffefffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1cU)))) 
                                              << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffdfffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1dU)))) 
                                              << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffffbfffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1eU)))) 
                                              << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = ((0xffffffff7fffffffULL 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->apb_gpio__DOT__r_gpio_inten 
                                                                  >> 0x1fU)))) 
                                              << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffeffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffdffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffffbffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffff7ffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffefffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffdfffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffffbfffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffff7fffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffeffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffdffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffffbffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffff7ffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffefffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffdfffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffffbfffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffff7fffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffeffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffdffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfffbffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfff7ffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffefffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffdfffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xffbfffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xff7fffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfeffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfdffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xfbffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xf7ffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xefffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xdfffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0xbfffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    vlTOPp->apb_gpio__DOT__s_gpio_inten = (0x7fffffffffffffffULL 
                                           & vlTOPp->apb_gpio__DOT__s_gpio_inten);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    vlTOPp->apb_gpio__DOT__s_gpio_inten 
                        = ((0xffffffff00000000ULL & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                           | (IData)((IData)(vlTOPp->PWDATA)));
                } else {
                    if ((0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_inten 
                            = ((0xffffffffULL & vlTOPp->apb_gpio__DOT__s_gpio_inten) 
                               | ((QData)((IData)(vlTOPp->PWDATA)) 
                                  << 0x20U));
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffeULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & vlTOPp->apb_gpio__DOT__r_gpio_en))));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffdULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 1U)))) 
                                           << 1U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffffbULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 2U)))) 
                                           << 2U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffff7ULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 3U)))) 
                                           << 3U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffefULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 4U)))) 
                                           << 4U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffdfULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 5U)))) 
                                           << 5U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffffbfULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 6U)))) 
                                           << 6U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffff7fULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 7U)))) 
                                           << 7U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffeffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 8U)))) 
                                           << 8U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffdffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 9U)))) 
                                           << 9U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffffbffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xaU)))) 
                                           << 0xaU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffff7ffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xbU)))) 
                                           << 0xbU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffefffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xcU)))) 
                                           << 0xcU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffdfffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xdU)))) 
                                           << 0xdU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffffbfffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xeU)))) 
                                           << 0xeU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffff7fffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0xfU)))) 
                                           << 0xfU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffeffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x10U)))) 
                                           << 0x10U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffdffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x11U)))) 
                                           << 0x11U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffffbffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x12U)))) 
                                           << 0x12U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffff7ffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x13U)))) 
                                           << 0x13U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffefffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x14U)))) 
                                           << 0x14U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffdfffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x15U)))) 
                                           << 0x15U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffffbfffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x16U)))) 
                                           << 0x16U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffff7fffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x17U)))) 
                                           << 0x17U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffeffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x18U)))) 
                                           << 0x18U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffdffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x19U)))) 
                                           << 0x19U));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffffbffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1aU)))) 
                                           << 0x1aU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xfffffffff7ffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1bU)))) 
                                           << 0x1bU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffefffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1cU)))) 
                                           << 0x1cU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffdfffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1dU)))) 
                                           << 0x1dU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffffbfffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1eU)))) 
                                           << 0x1eU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = ((0xffffffff7fffffffULL 
                                         & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->apb_gpio__DOT__r_gpio_en 
                                                               >> 0x1fU)))) 
                                           << 0x1fU));
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffeffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffdffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffffbffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffff7ffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffefffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffdfffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffffbfffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffff7fffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffeffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffdffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffffbffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffff7ffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffefffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffdfffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffffbfffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffff7fffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffeffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffdffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfffbffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfff7ffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffefffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffdfffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xffbfffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xff7fffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfeffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfdffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xfbffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xf7ffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xefffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xdfffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0xbfffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    vlTOPp->apb_gpio__DOT__s_gpio_en = (0x7fffffffffffffffULL 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_en);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            if ((8U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                if ((0x15U != (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    if ((0x16U != (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_en 
                                            = ((1U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))
                                                ? (
                                                   (0xffffffff00000000ULL 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                                   | (IData)((IData)(vlTOPp->PWDATA)))
                                                : (
                                                   (0xffffffffULL 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_en) 
                                                   | ((QData)((IData)(vlTOPp->PWDATA)) 
                                                      << 0x20U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffffcU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (3U 
                                                    & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffff3U 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xcU 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 2U)) 
                                                       << 2U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffffcfU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 4U)) 
                                                       << 4U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffff3fU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 6U)) 
                                                       << 6U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffffcffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x300U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 8U)) 
                                                       << 8U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffff3ffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc00U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xaU)) 
                                                       << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffffcfffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x3000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xcU)) 
                                                       << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffff3fffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0xeU)) 
                                                       << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfffcffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x10U)) 
                                                       << 0x10U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfff3ffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x12U)) 
                                                       << 0x12U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xffcfffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x300000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x14U)) 
                                                       << 0x14U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xff3fffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc00000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x16U)) 
                                                       << 0x16U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xfcffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x3000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x18U)) 
                                                       << 0x18U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xf3ffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1aU)) 
                                                       << 0x1aU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0xcfffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0x30000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1cU)) 
                                                       << 0x1cU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] = ((0x3fffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                                 | (0xc0000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x1eU)) 
                                                       << 0x1eU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffffcU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                               >> 0x20U))));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffff3U 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xcU 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x22U)) 
                                                       << 2U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffffcfU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x24U)) 
                                                       << 4U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffff3fU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x26U)) 
                                                       << 6U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffffcffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x300U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x28U)) 
                                                       << 8U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffff3ffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc00U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2aU)) 
                                                       << 0xaU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffffcfffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x3000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2cU)) 
                                                       << 0xcU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffff3fffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x2eU)) 
                                                       << 0xeU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfffcffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x30U)) 
                                                       << 0x10U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfff3ffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x32U)) 
                                                       << 0x12U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xffcfffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x300000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x34U)) 
                                                       << 0x14U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xff3fffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc00000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x36U)) 
                                                       << 0x16U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xfcffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x3000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x38U)) 
                                                       << 0x18U)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xf3ffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3aU)) 
                                                       << 0x1aU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0xcfffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0x30000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3cU)) 
                                                       << 0x1cU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] = ((0x3fffffffU 
                                                  & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                                 | (0xc0000000U 
                                                    & ((IData)(
                                                               (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                                >> 0x3eU)) 
                                                       << 0x1eU)));
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffffcU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffff3U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffffcfU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffff3fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffffcffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffff3ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffffcfffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffff3fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfffcffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfff3ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xffcfffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xff3fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xfcffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xf3ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0xcfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] = (0x3fffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffffcU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffff3U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffffcfU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffff3fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffffcffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffff3ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffffcfffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffff3fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfffcffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfff3ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xffcfffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xff3fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xfcffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xf3ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0xcfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] = (0x3fffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if (((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U))) | 
                       (0x14U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) 
                      | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                         >> 2U)))) 
                     | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                    (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                        >> 2U)))) | 
                   (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                       >> 2U)))) | 
                  (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                   >> 2U)))) | (0xfU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U))))) {
                if ((6U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                     >> 2U)))) {
                    if ((0x14U != (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) {
                        if ((7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffffcU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (3U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffff3U & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xcU & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffffcfU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffff3fU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffffcffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x300U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffff3ffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc00U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffffcfffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x3000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffff3fffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfffcffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfff3ffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xffcfffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x300000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xff3fffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc00000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xfcffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x3000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xf3ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0xcfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0x30000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U] 
                                = ((0x3fffffffU & vlTOPp->apb_gpio__DOT__s_gpio_inttype[0U]) 
                                   | (0xc0000000U & vlTOPp->PWDATA));
                        } else {
                            if ((8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffffcU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (3U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffff3U 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xcU & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffffcfU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffff3fU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffffcffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x300U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffff3ffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc00U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffffcfffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x3000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffff3fffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfffcffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfff3ffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xffcfffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x300000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xff3fffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc00000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xfcffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x3000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xf3ffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0xcfffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0x30000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U] 
                                    = ((0x3fffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_inttype[1U]) 
                                       | (0xc0000000U 
                                          & vlTOPp->PWDATA));
                            } else {
                                if ((0x15U == (0x1fU 
                                               & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffffcU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (3U & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffff3U 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xcU 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffffcfU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffff3fU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffffcffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x300U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffff3ffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc00U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffffcfffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x3000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffff3fffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfffcffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfff3ffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xffcfffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x300000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xff3fffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc00000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xfcffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x3000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xf3ffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0xcfffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0x30000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U] 
                                        = ((0x3fffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_inttype[2U]) 
                                           | (0xc0000000U 
                                              & vlTOPp->PWDATA));
                                } else {
                                    if ((0x16U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffffcU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (3U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffff3U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xcU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffffcfU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffff3fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffffcffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x300U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffff3ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc00U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffffcfffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x3000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffff3fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfffcffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfff3ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xffcfffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x300000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xff3fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc00000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xfcffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x3000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xf3ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0xcfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0x30000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U] 
                                            = ((0x3fffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_inttype[3U]) 
                                               | (0xc0000000U 
                                                  & vlTOPp->PWDATA));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffffff0U 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xfU 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xffffff0fU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffff0ffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf00U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xffff0fffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfff0ffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xff0fffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf00000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xf0ffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] = ((0xfffffffU 
                                                 & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                                | (0xf0000000U 
                                                   & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] = (0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]);
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (IData)(vlTOPp->PWRITE))) {
        if ((1U & (~ ((((((((0U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U))) 
                            | (0xeU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                           | (3U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0x11U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                         | (4U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                        | (0x12U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (5U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                          >> 2U)))) 
                      | (0x13U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U))))))) {
            if ((1U & (~ ((((((((6U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U))) 
                                | (0x14U == (0x1fU 
                                             & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                               | (7U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                              | (8U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) 
                             | (0x15U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) 
                            | (0x16U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                  >> 2U)))) 
                           | (1U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                          | (0xfU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U))))))) {
                if (((((((((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U))) 
                           | (0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                >> 2U)))) 
                          | (0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) 
                         | (0xdU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                        | (0x18U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                              >> 2U)))) 
                       | (0x19U == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                             >> 2U)))) 
                      | (0x1aU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                            >> 2U)))) 
                     | (0x1bU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U))))) {
                    if ((0xaU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                           >> 2U)))) {
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xfU & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf00U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf00000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf000000U & vlTOPp->PWDATA));
                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U] 
                            = ((0xfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[0U]) 
                               | (0xf0000000U & vlTOPp->PWDATA));
                    } else {
                        if ((0xbU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                               >> 2U)))) {
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffffff0U & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xfU & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xffffff0fU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffff0ffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf00U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xffff0fffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfff0ffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xff0fffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf00000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xf0ffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf000000U & vlTOPp->PWDATA));
                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U] 
                                = ((0xfffffffU & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[1U]) 
                                   | (0xf0000000U & vlTOPp->PWDATA));
                        } else {
                            if ((0xcU == (0x1fU & ((IData)(vlTOPp->PADDR) 
                                                   >> 2U)))) {
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffffff0U 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xfU & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xffffff0fU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffff0ffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf00U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xffff0fffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf000U & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfff0ffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xff0fffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf00000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xf0ffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf000000U 
                                          & vlTOPp->PWDATA));
                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U] 
                                    = ((0xfffffffU 
                                        & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[2U]) 
                                       | (0xf0000000U 
                                          & vlTOPp->PWDATA));
                            } else {
                                if ((0xdU == (0x1fU 
                                              & ((IData)(vlTOPp->PADDR) 
                                                 >> 2U)))) {
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffffff0U 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xfU 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xffffff0fU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffff0ffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf00U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xffff0fffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfff0ffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xff0fffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf00000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xf0ffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf000000U 
                                              & vlTOPp->PWDATA));
                                    vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U] 
                                        = ((0xfffffffU 
                                            & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[3U]) 
                                           | (0xf0000000U 
                                              & vlTOPp->PWDATA));
                                } else {
                                    if ((0x18U == (0x1fU 
                                                   & ((IData)(vlTOPp->PADDR) 
                                                      >> 2U)))) {
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffffff0U 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xfU 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xffffff0fU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffff0ffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf00U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xffff0fffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfff0ffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xff0fffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf00000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xf0ffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf000000U 
                                                  & vlTOPp->PWDATA));
                                        vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U] 
                                            = ((0xfffffffU 
                                                & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[4U]) 
                                               | (0xf0000000U 
                                                  & vlTOPp->PWDATA));
                                    } else {
                                        if ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlTOPp->PADDR) 
                                                    >> 2U)))) {
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffffff0U 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xfU 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xffffff0fU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffff0ffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf00U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xffff0fffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfff0ffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xff0fffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf00000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xf0ffffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf000000U 
                                                      & vlTOPp->PWDATA));
                                            vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U] 
                                                = (
                                                   (0xfffffffU 
                                                    & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[5U]) 
                                                   | (0xf0000000U 
                                                      & vlTOPp->PWDATA));
                                        } else {
                                            if ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->PADDR) 
                                                     >> 2U)))) {
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffffff0U 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xfU 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xffffff0fU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffff0ffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf00U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xffff0fffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfff0ffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xff0fffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf00000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xf0ffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf000000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U] 
                                                    = 
                                                    ((0xfffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[6U]) 
                                                     | (0xf0000000U 
                                                        & vlTOPp->PWDATA));
                                            } else {
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffffff0U 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xfU 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xffffff0fU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffff0ffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf00U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xffff0fffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfff0ffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xff0fffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf00000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xf0ffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf000000U 
                                                        & vlTOPp->PWDATA));
                                                vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U] 
                                                    = 
                                                    ((0xfffffffU 
                                                      & vlTOPp->apb_gpio__DOT__s_gpio_padcfg[7U]) 
                                                     | (0xf0000000U 
                                                        & vlTOPp->PWDATA));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlTOPp->PSEL) & (IData)(vlTOPp->PENABLE)) 
         & (~ (IData)(vlTOPp->PWRITE)))) {
        if ((0x40U & (IData)(vlTOPp->PADDR))) {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    vlTOPp->PRDATA = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffff0U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff0fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff0ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff0fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff0ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff0fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf0ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffcU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff3U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffcfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff3fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffcffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff3ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffcfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff3fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffcffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff3ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffcfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff3fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfcffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf3ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xcfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x3fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffcU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff3U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffcfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff3fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffcffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff3ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffcfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff3fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffcffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff3ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffcfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff3fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfcffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf3ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xcfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x3fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        vlTOPp->PRDATA = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->PADDR))) {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        } else {
                            vlTOPp->PRDATA = (0xfffffffeU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffdU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffffbU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffff7U 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffefU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffdfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffffbfU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffff7fU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffeffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffdffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffffbffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffff7ffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffefffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffdfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffffbfffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffff7fffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffeffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffdffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfffbffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfff7ffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffefffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffdfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xffbfffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xff7fffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfeffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfdffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xfbffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xf7ffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xefffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xdfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0xbfffffffU 
                                              & vlTOPp->PRDATA);
                            vlTOPp->PRDATA = (0x7fffffffU 
                                              & vlTOPp->PRDATA);
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[3U]));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[2U]));
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[1U]));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffff0U 
                                               & vlTOPp->PRDATA) 
                                              | (0xfU 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xffffff0fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfffff0ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xffff0fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfff0ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xff0fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf00000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xf0ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                            vlTOPp->PRDATA = ((0xfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xf0000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_padcfg[0U]));
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_status));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffcU 
                                               & vlTOPp->PRDATA) 
                                              | (3U 
                                                 & (IData)(
                                                           (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                            >> 0x20U))));
                            vlTOPp->PRDATA = ((0xfffffff3U 
                                               & vlTOPp->PRDATA) 
                                              | (0xcU 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x22U)) 
                                                    << 2U)));
                            vlTOPp->PRDATA = ((0xffffffcfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x24U)) 
                                                    << 4U)));
                            vlTOPp->PRDATA = ((0xffffff3fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x26U)) 
                                                    << 6U)));
                            vlTOPp->PRDATA = ((0xfffffcffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x28U)) 
                                                    << 8U)));
                            vlTOPp->PRDATA = ((0xfffff3ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2aU)) 
                                                    << 0xaU)));
                            vlTOPp->PRDATA = ((0xffffcfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2cU)) 
                                                    << 0xcU)));
                            vlTOPp->PRDATA = ((0xffff3fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x2eU)) 
                                                    << 0xeU)));
                            vlTOPp->PRDATA = ((0xfffcffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x30U)) 
                                                    << 0x10U)));
                            vlTOPp->PRDATA = ((0xfff3ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x32U)) 
                                                    << 0x12U)));
                            vlTOPp->PRDATA = ((0xffcfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x34U)) 
                                                    << 0x14U)));
                            vlTOPp->PRDATA = ((0xff3fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x36U)) 
                                                    << 0x16U)));
                            vlTOPp->PRDATA = ((0xfcffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x38U)) 
                                                    << 0x18U)));
                            vlTOPp->PRDATA = ((0xf3ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3aU)) 
                                                    << 0x1aU)));
                            vlTOPp->PRDATA = ((0xcfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3cU)) 
                                                    << 0x1cU)));
                            vlTOPp->PRDATA = ((0x3fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x3eU)) 
                                                    << 0x1eU)));
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->PADDR))) {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffcU 
                                               & vlTOPp->PRDATA) 
                                              | (3U 
                                                 & (IData)(vlTOPp->apb_gpio__DOT__r_gpio_inttype)));
                            vlTOPp->PRDATA = ((0xfffffff3U 
                                               & vlTOPp->PRDATA) 
                                              | (0xcU 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 2U)) 
                                                    << 2U)));
                            vlTOPp->PRDATA = ((0xffffffcfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 4U)) 
                                                    << 4U)));
                            vlTOPp->PRDATA = ((0xffffff3fU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 6U)) 
                                                    << 6U)));
                            vlTOPp->PRDATA = ((0xfffffcffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 8U)) 
                                                    << 8U)));
                            vlTOPp->PRDATA = ((0xfffff3ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xaU)) 
                                                    << 0xaU)));
                            vlTOPp->PRDATA = ((0xffffcfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xcU)) 
                                                    << 0xcU)));
                            vlTOPp->PRDATA = ((0xffff3fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0xeU)) 
                                                    << 0xeU)));
                            vlTOPp->PRDATA = ((0xfffcffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x10U)) 
                                                    << 0x10U)));
                            vlTOPp->PRDATA = ((0xfff3ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x12U)) 
                                                    << 0x12U)));
                            vlTOPp->PRDATA = ((0xffcfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x300000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x14U)) 
                                                    << 0x14U)));
                            vlTOPp->PRDATA = ((0xff3fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc00000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x16U)) 
                                                    << 0x16U)));
                            vlTOPp->PRDATA = ((0xfcffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x3000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x18U)) 
                                                    << 0x18U)));
                            vlTOPp->PRDATA = ((0xf3ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1aU)) 
                                                    << 0x1aU)));
                            vlTOPp->PRDATA = ((0xcfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x30000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1cU)) 
                                                    << 0x1cU)));
                            vlTOPp->PRDATA = ((0x3fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0xc0000000U 
                                                 & ((IData)(
                                                            (vlTOPp->apb_gpio__DOT__r_gpio_inttype 
                                                             >> 0x1eU)) 
                                                    << 0x1eU)));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_inten));
                        }
                    } else {
                        vlTOPp->PRDATA = 0U;
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->PADDR))) {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_out));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_in));
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->PADDR))) {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_en));
                        } else {
                            vlTOPp->PRDATA = ((0xfffffffeU 
                                               & vlTOPp->PRDATA) 
                                              | (1U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffffdU 
                                               & vlTOPp->PRDATA) 
                                              | (2U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffffbU 
                                               & vlTOPp->PRDATA) 
                                              | (4U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffff7U 
                                               & vlTOPp->PRDATA) 
                                              | (8U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffefU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffdfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffffbfU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffff7fU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffeffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffdffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffffbffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffff7ffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffefffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffdfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffffbfffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffff7fffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffeffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffdffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfffbffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfff7ffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffefffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x100000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffdfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x200000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xffbfffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x400000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xff7fffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x800000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfeffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x1000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfdffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x2000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xfbffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x4000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xf7ffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x8000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xefffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x10000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xdfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x20000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0xbfffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x40000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                            vlTOPp->PRDATA = ((0x7fffffffU 
                                               & vlTOPp->PRDATA) 
                                              | (0x80000000U 
                                                 & vlTOPp->apb_gpio__DOT__r_gpio_dir));
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->PRDATA = 0U;
    }
}
