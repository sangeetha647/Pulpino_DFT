// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_core.h for the primary calling header

#include "Vriscv_core.h"
#include "Vriscv_core__Syms.h"

//==========

void Vriscv_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_core::eval\n"); );
    Vriscv_core__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("riscv_core.sv", 35, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_core::_eval_initial_loop(Vriscv_core__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("riscv_core.sv", 35, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vriscv_core::_combo__TOP__2(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_combo__TOP__2\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->irq_ack_o = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->irq_ack_o = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__instr_req_int = 1U;
    if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((8U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->riscv_core__DOT__instr_req_int = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->riscv_core__DOT__instr_req_int = 0U;
            } else {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__instr_req_int = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                vlTOPp->riscv_core__DOT__instr_req_int 
                    = (1U & ((~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                 >> 1U)) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
            }
        }
    }
    vlTOPp->riscv_core__DOT__core_ctrl_firstfetch = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        vlTOPp->riscv_core__DOT__core_ctrl_firstfetch = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_core::_sequent__TOP__5(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_sequent__TOP__5\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_core__DOT__core_busy_q = ((IData)(vlTOPp->rst_ni) 
                                            & ((1U 
                                                & ((IData)(vlTOPp->riscv_core__DOT__data_load_event_ex) 
                                                   & (IData)(vlTOPp->data_req_o)))
                                                ? (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_busy)
                                                : (
                                                   ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_busy) 
                                                    | (IData)(vlTOPp->riscv_core__DOT__ctrl_busy)) 
                                                   | ((((1U 
                                                         == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q)) 
                                                        | (2U 
                                                           == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q))) 
                                                       | (3U 
                                                          == (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q))) 
                                                      | (IData)(vlTOPp->riscv_core__DOT__data_req_pmp)))));
}

VL_INLINE_OPT void Vriscv_core::_combo__TOP__7(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_combo__TOP__7\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_core__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->riscv_core__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlTOPp->core_busy_o = ((IData)(vlTOPp->riscv_core__DOT__core_ctrl_firstfetch) 
                           | (IData)(vlTOPp->riscv_core__DOT__core_busy_q));
    if ((1U & (~ (IData)(vlTOPp->clk_i)))) {
        vlTOPp->riscv_core__DOT__core_clock_gate_i__DOT__clk_en 
            = (((IData)(vlTOPp->clock_en_i) | (IData)(vlTOPp->core_busy_o)) 
               | (IData)(vlTOPp->test_en_i));
    }
    vlTOPp->riscv_core__DOT__clk = ((IData)(vlTOPp->clk_i) 
                                    & (IData)(vlTOPp->riscv_core__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void Vriscv_core::_sequent__TOP__8(Vriscv_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_core::_sequent__TOP__8\n"); );
    Vriscv_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
    WData/*1023:0*/ __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32];
    // Body
    __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU];
    __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU] 
        = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__id_valid_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__id_valid));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q 
        = ((IData)(vlTOPp->rst_ni) ? ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear)
                                       ? 0U : (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_n))
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear)))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[3U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3U];
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[3U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_d;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_d;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_d;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_d;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_d;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_d;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP 
            = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SN) 
               & 1U);
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS 
            = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__NS;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_n;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_q 
            = vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_d;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_n;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_n;
    } else {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__state_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__sign_ext_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__mask_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__type_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__resp_state_q = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__CS = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_size_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__stack_base_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mepc_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q 
                = (((~ (0xffffffffULL << (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid) 
                                                   << 5U)))) 
                    & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q) 
                   | ((QData)((IData)(((1U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked))
                                        ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_int
                                        : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                      << (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid) 
                                   << 5U))));
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q = 0ULL;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SN));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__is_compressed_id 
                = (3U != (3U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_rdata));
        }
    } else {
        vlTOPp->riscv_core__DOT__is_compressed_id = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[3U];
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_d[4U];
    } else {
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__offset_fsm_cs 
        = (1U & ((~ (IData)(vlTOPp->rst_ni)) | (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__offset_fsm_ns)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q) 
           | ((IData)(vlTOPp->rst_ni) & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_d));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q) 
           | (0xfffffffcU & (((IData)(vlTOPp->rst_ni) 
                              << 2U) & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_d)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q) 
           | (0xfffffff8U & (((IData)(vlTOPp->rst_ni) 
                              << 3U) & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_d)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_q) 
           | (0xfffffff0U & (((IData)(vlTOPp->rst_ni) 
                              << 4U) & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcounteren_d)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlTOPp->rst_ni)) | vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d)));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (4U & (((~ (IData)(vlTOPp->rst_ni)) << 2U) 
                    | (0xfffffffcU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (8U & (((~ (IData)(vlTOPp->rst_ni)) << 3U) 
                    | (0xfffffff8U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (0x10U & (((~ (IData)(vlTOPp->rst_ni)) 
                        << 4U) | (0xfffffff0U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_d))));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                = (1U & ((~ (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                         & (IData)((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                    >> 0x20U))));
        } else {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)
            : 0U);
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__pc_id = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr;
        }
    } else {
        vlTOPp->riscv_core__DOT__pc_id = 0U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_NS)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q 
                = (((~ (0xffffffffULL << (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid) 
                                                   << 5U)))) 
                    & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q) 
                   | ((QData)((IData)(((2U & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we_masked))
                                        ? vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target
                                        : vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                      << (0x3fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid) 
                                   << 5U))));
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q = 0ULL;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0U] = 0U;
    if (vlTOPp->rst_ni) {
        if ((2U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[1U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((2U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[1U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[1U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[2U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((4U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[2U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[2U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((8U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[3U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((8U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[3U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[3U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[4U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[4U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[4U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[5U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x20U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[5U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[5U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[6U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x40U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[6U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[6U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x80U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[7U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x80U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[7U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[7U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[8U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x100U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[8U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[8U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x200U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[9U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x200U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[9U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[9U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xaU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x400U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xaU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xaU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x800U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xbU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x800U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xbU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xbU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xcU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x1000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xcU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xcU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x2000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xdU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x2000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xdU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xdU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xeU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x4000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xeU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xeU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x8000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xfU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x8000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xfU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0xfU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x10U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x10000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x10U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x10U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x11U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x20000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x11U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x11U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x12U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x40000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x12U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x12U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x80000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x13U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x80000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x13U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x13U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x100000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x14U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x100000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x14U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x14U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x200000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x15U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x200000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x15U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x15U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x400000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x16U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x400000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x16U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x16U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x800000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x17U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x800000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x17U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x17U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x1000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x18U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x1000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x18U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x18U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x2000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x19U] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x2000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x19U] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x19U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x4000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1aU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x4000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1aU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1aU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x8000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1bU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x8000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1bU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1bU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1cU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x10000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1cU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1cU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x20000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1dU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x20000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1dU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1dU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x40000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1eU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x40000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1eU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1eU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x80000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec)) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1fU] 
                = vlTOPp->riscv_core__DOT__regfile_alu_wdata_fw;
        } else {
            if ((0x80000000U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec)) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1fU] 
                    = vlTOPp->riscv_core__DOT__lsu_rdata;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[0x1fU] = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
    if (vlTOPp->rst_ni) {
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
            = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_n;
    } else {
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q = 0U;
        vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q 
            = (3U | vlTOPp->riscv_core__DOT__cs_registers_i__DOT__dcsr_q);
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear)))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[1U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[2U];
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[3U] 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[3U];
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U] = 0U;
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[3U] = 0U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q 
        = ((IData)(vlTOPp->rst_ni) ? ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_clear)
                                       ? 0U : (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n))
            : 0U);
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__addr_valid) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                = (((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwloop_speculative) 
                    & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__branch_req)))
                    ? vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target
                    : vlTOPp->riscv_core__DOT__instr_addr_pmp);
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
    if (vlTOPp->rst_ni) {
        if ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we) 
              >> 2U) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                = ((0xffffffff00000000ULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                   | (IData)((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt)));
        } else {
            if (((IData)(vlTOPp->riscv_core__DOT__hwlp_dec_cnt_id) 
                 & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_valid))) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                    = ((0xffffffff00000000ULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                       | (IData)((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n)));
            }
        }
        if ((((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_we) 
              >> 2U) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regid))) {
            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                = ((0xffffffffULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                   | ((QData)((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt)) 
                      << 0x20U));
        } else {
            if ((((IData)(vlTOPp->riscv_core__DOT__hwlp_dec_cnt_id) 
                  >> 1U) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_valid))) {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                    = ((0xffffffffULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                       | ((QData)((IData)((IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n 
                                                   >> 0x20U)))) 
                          << 0x20U));
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q = 0ULL;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
        = ((IData)(vlTOPp->rst_ni) & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
                                      & (~ (IData)(vlTOPp->riscv_core__DOT__id_ready))));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__is_hwlp_id_q 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp;
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__is_hwlp_id_q = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
        vlTOPp->riscv_core__DOT__apu_lat_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
            if ((((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q) 
                  >> 5U) & (IData)(vlTOPp->irq_i))) {
                __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs = 1U;
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q 
                    = vlTOPp->irq_id_i;
            }
        } else {
            if ((1U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
                __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs 
                    = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_ack)
                        ? 2U : ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__exc_kill)
                                 ? 0U : 1U));
            } else {
                if ((2U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
                    __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs = 0U;
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q = 0U;
        __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DN;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DN;
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((1U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment)) {
                __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                    = ((IData)(1U) + vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]);
            }
        }
    } else {
        __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((4U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((4U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment)) {
                __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
                    = ((IData)(1U) + vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U]);
            }
        }
    } else {
        __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((8U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((8U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment)) {
                __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
                    = ((IData)(1U) + vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]);
            }
        }
    } else {
        __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((0x10U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment)) {
                __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                    = ((IData)(1U) + vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]);
            }
        }
    } else {
        __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SN));
    if (vlTOPp->rst_ni) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DN;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DN;
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP = 0U;
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__illegal_c_insn_id 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__illegal_c_insn;
        }
    } else {
        vlTOPp->riscv_core__DOT__illegal_c_insn_id = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id) {
                        vlTOPp->riscv_core__DOT__data_atop_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__atop_id;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_atop_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id) {
                        vlTOPp->riscv_core__DOT__data_sign_ext_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_sign_ext_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id) {
                        vlTOPp->riscv_core__DOT__data_we_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_we_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_signed_mode_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_signed_mode;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_signed_mode_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if (vlTOPp->riscv_core__DOT__mult_multicycle) {
                vlTOPp->riscv_core__DOT__mult_operand_c_ex 
                    = vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c;
            } else {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_operand_c_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_operand_c_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_dot_op_c_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_dot_op_c_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_operand_b_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_b;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_operand_b_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_operand_a_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_a;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_operand_a_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__data_load_event_ex 
                        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id) 
                           & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id));
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__data_load_event_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_load_event_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_c;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_operand_c_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__csr_op_ex 
                        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__deassert_we)
                            ? 0U : (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__csr_op_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__csr_op_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_sel_subword_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_sel_subword;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_sel_subword_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__imm_vec_ext_ex 
                            = (3U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_vu_type);
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__imm_vec_ext_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_operator_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator;
                    }
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_operator_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_operator_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__is_fetch_failed_id = 0U;
        } else {
            if (vlTOPp->riscv_core__DOT__clear_instr_valid) {
                vlTOPp->riscv_core__DOT__is_fetch_failed_id 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_failed;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__is_fetch_failed_id = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_q 
        = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_irq_flush_n));
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__mult_en_ex 
                        = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) 
                           | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en));
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__mult_en_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_en_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__instr_valid_id = 1U;
        } else {
            if (vlTOPp->riscv_core__DOT__clear_instr_valid) {
                vlTOPp->riscv_core__DOT__instr_valid_id = 0U;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__instr_valid_id = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_a;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_dot_op_a_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_b;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_dot_op_b_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_dot_signed_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_dot_signed_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__apu_en_ex = 0U;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__apu_en_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__apu_en_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id) {
                        vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__branch_in_ex 
                        = (3U == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_in_id));
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__branch_in_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__branch_in_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__data_misaligned) {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                vlTOPp->riscv_core__DOT__regfile_alu_we_ex 
                    = vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__regfile_alu_we_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_alu_we_id;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__regfile_alu_we_ex = 0U;
                    } else {
                        if (vlTOPp->riscv_core__DOT__csr_access_ex) {
                            vlTOPp->riscv_core__DOT__regfile_alu_we_ex = 0U;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__regfile_alu_we_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id) {
                        vlTOPp->riscv_core__DOT__data_type_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_type_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__ex_valid) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu 
                = vlTOPp->riscv_core__DOT__regfile_we_ex;
        } else {
            if (vlTOPp->riscv_core__DOT__lsu_ready_wb) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__data_req_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_req_id;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__data_req_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_req_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__data_misaligned) {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                vlTOPp->riscv_core__DOT__data_misaligned_ex = 1U;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__data_misaligned_ex = 0U;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__data_misaligned_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__data_misaligned_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_clpx_shift_ex 
                            = (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                     >> 0xdU));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_clpx_shift_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_int_en) {
                        vlTOPp->riscv_core__DOT__mult_imm_ex 
                            = ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_imm_mux)
                                ? ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_imm_mux)
                                    ? (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                >> 0x19U))
                                    : 0U) : 0U);
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_imm_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlTOPp->riscv_core__DOT__mult_clpx_img_ex 
                            = (1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                     >> 0x19U));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__mult_clpx_img_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__ex_valid) {
            if (vlTOPp->riscv_core__DOT__regfile_we_ex) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                    = vlTOPp->riscv_core__DOT__regfile_waddr_ex;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_is_clpx_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_is_clpx_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__bmask_a_ex 
                            = (0x1fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                         ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                         : ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                             ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                             : (vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id 
                                                >> 5U))));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__bmask_a_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_clpx_shift_ex 
                            = (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                     >> 0xdU));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_clpx_shift_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__bmask_b_ex 
                            = (0x1fU & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                         ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                         : ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                             ? (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                             : vlTOPp->riscv_core__DOT__id_stage_i__DOT__operand_b_fw_id)));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__bmask_b_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__alu_en_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__alu_en_ex = 1U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_en_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_vec_mode_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_vec_mode_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__data_misaligned) {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                    = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_b;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_b;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_operand_b_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_is_subrot_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_subrot;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_is_subrot_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_operator_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator;
                    }
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__alu_operator_ex = 3U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_operator_ex = 3U;
    }
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__data_misaligned) {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                if (vlTOPp->riscv_core__DOT__useincr_addr_ex) {
                    vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_a;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_en) {
                        vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            = vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operand_a;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__alu_operand_a_ex = 0U;
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs 
        = __Vdly__riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU] 
        = __Vdly__riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU];
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_increment) 
           | (1U & (~ vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS)))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp = 1U;
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS)))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_branch = 1U;
            }
        }
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
        = ((8U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
            ? vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U]
            : vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q);
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n 
        = ((0xffffffff00000000ULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n) 
           | (IData)((IData)(((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                              - (IData)(1U)))));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n 
        = ((0xffffffffULL & vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n) 
           | ((QData)((IData)(((IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                        >> 0x20U)) 
                               - (IData)(1U)))) << 0x20U));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp) {
                vlTOPp->riscv_core__DOT__hwlp_dec_cnt_id 
                    = vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt_if;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__hwlp_dec_cnt_id = 0U;
    }
    vlTOPp->irq_id_o = vlTOPp->riscv_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_q 
        = ((IData)(vlTOPp->rst_ni) ? (6U | (0x28U & (IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mstatus_n)))
            : 6U);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (1U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                    >> 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (2U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                    >> 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (4U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                    >> 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (8U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                    >> 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x10U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                       >> 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x20U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                       >> 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x40U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                       >> 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x80U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                       >> 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x100U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                        >> 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x200U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                        >> 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x400U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                        >> 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x800U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                        >> 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x1000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                         >> 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x2000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                         >> 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x4000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                         >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x8000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                         >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x10000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                          << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x20000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                          << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x40000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                          << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x80000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                          << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x100000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                           << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x200000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                           << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x400000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                           << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x800000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                           << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x1000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                            << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x2000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                            << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x4000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x8000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                            << 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x10000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                             << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x20000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                             << 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x40000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev) 
           | (0x80000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                             << 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    if ((0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active = 1U;
    if ((0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active = 1U;
        }
    }
    vlTOPp->data_atop_o = vlTOPp->riscv_core__DOT__data_atop_ex;
    vlTOPp->data_we_o = vlTOPp->riscv_core__DOT__data_we_ex;
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlTOPp->riscv_core__DOT__mult_signed_mode_ex));
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                        = (1U & (IData)(vlTOPp->riscv_core__DOT__mult_signed_mode_ex));
                } else {
                    if ((4U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                            = vlTOPp->riscv_core__DOT__mult_signed_mode_ex;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__csr_op_ex)))) {
            vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlTOPp->riscv_core__DOT__mult_operator_ex)) 
             & (IData)(vlTOPp->riscv_core__DOT__mult_en_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__is_hwlp_id = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__is_hwlp_id_q) 
                                           & (IData)(vlTOPp->riscv_core__DOT__instr_valid_id));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
        = ((0xffffffe00ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a) 
           | (IData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                          << 7U) & 
                                         (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                          << 1U))) 
                              | (0xffU & vlTOPp->riscv_core__DOT__mult_dot_op_a_ex)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
        = ((0xffffc01ffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 7U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 7U))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 8U))))) 
              << 9U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
        = ((0xff803ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 7U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 0xfU))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 0x10U))))) 
              << 0x12U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
        = ((0x7ffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 7U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 0x17U))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                           >> 0x18U))))) 
              << 0x1bU));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
        = ((0xffffffe00ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b) 
           | (IData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                          << 8U) & 
                                         (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                          << 1U))) 
                              | (0xffU & vlTOPp->riscv_core__DOT__mult_dot_op_b_ex)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
        = ((0xffffc01ffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 8U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 7U))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 8U))))) 
              << 9U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
        = ((0xff803ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 8U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 0xfU))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 0x10U))))) 
              << 0x12U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
        = ((0x7ffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b) 
           | ((QData)((IData)(((0x100U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                           << 8U) & 
                                          (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 0x17U))) 
                               | (0xffU & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                           >> 0x18U))))) 
              << 0x1bU));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a 
        = ((0x3fffe0000ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a) 
           | (IData)((IData)(((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                            << 0xfU) 
                                           & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                              << 1U))) 
                              | (0xffffU & vlTOPp->riscv_core__DOT__mult_dot_op_a_ex)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a 
        = ((0x1ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a) 
           | ((QData)((IData)(((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                             << 0xfU) 
                                            & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                               >> 0xfU))) 
                               | (0xffffU & (vlTOPp->riscv_core__DOT__mult_dot_op_a_ex 
                                             >> 0x10U))))) 
              << 0x11U));
    vlTOPp->riscv_core__DOT__regfile_alu_we_fw = ((IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_ex) 
                                                  & (~ (IData)(vlTOPp->riscv_core__DOT__apu_en_ex)));
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__csr_access_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_access;
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__csr_access_ex = 0U;
    }
    vlTOPp->riscv_core__DOT__regfile_we_wb = 0U;
    if (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        vlTOPp->riscv_core__DOT__regfile_we_wb = 1U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
        = ((0x3fffe0000ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b) 
           | (IData)((IData)((((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) 
                               & (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex))
                               ? ((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                                << 0x10U) 
                                               & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                  >> 0xfU))) 
                                  | (0xffffU & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                >> 0x10U)))
                               : ((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                                << 0x10U) 
                                               & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                  << 1U))) 
                                  | (0xffffU & vlTOPp->riscv_core__DOT__mult_dot_op_b_ex))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
        = ((0x1ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b) 
           | ((QData)((IData)((((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) 
                                & (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex))
                                ? ((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                                 << 0x10U) 
                                                & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                   << 1U))) 
                                   | (0xffffU & vlTOPp->riscv_core__DOT__mult_dot_op_b_ex))
                                : ((0x10000U & (((IData)(vlTOPp->riscv_core__DOT__mult_dot_signed_ex) 
                                                 << 0x10U) 
                                                & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                   >> 0xfU))) 
                                   | (0xffffU & (vlTOPp->riscv_core__DOT__mult_dot_op_b_ex 
                                                 >> 0x10U)))))) 
              << 0x11U));
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__regfile_we_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_we_id;
                } else {
                    if (vlTOPp->riscv_core__DOT__ex_ready) {
                        vlTOPp->riscv_core__DOT__regfile_we_ex = 0U;
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__regfile_we_ex = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    if (vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_we_id) {
                        vlTOPp->riscv_core__DOT__regfile_waddr_ex 
                            = (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                        >> 7U));
                    }
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__regfile_waddr_ex = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex 
        = ((0xfffcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex)) 
           | (IData)(vlTOPp->riscv_core__DOT__alu_clpx_shift_ex));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlTOPp->riscv_core__DOT__bmask_a_ex))) 
           << (IData)(vlTOPp->riscv_core__DOT__bmask_b_ex));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0xfU;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0xcU;
                                }
                            } else {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0xeU | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0xeU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel));
                            } else {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0xcU | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0xcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel));
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((7U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (8U & 
                                              ((~ (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                   >> 0x1aU)) 
                                               << 3U)));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0xbU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (4U & 
                                              ((~ (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                   >> 0x12U)) 
                                               << 2U)));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0xdU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (2U & 
                                              ((~ (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                   >> 0xaU)) 
                                               << 1U)));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0xeU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (1U & 
                                              (~ (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                  >> 2U))));
                                } else {
                                    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((7U 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (8U 
                                                  & ((~ 
                                                      (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                       >> 0x11U)) 
                                                     << 3U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xbU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (4U 
                                                  & ((~ 
                                                      (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                       >> 0x11U)) 
                                                     << 2U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xdU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (2U 
                                                  & ((~ 
                                                      (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                       >> 1U)) 
                                                     << 1U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xeU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                      >> 1U))));
                                    }
                                }
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                                    ? ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))
                                        ? 4U : 3U) : 
                                   ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))
                                     ? 1U : 3U));
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((2U & (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex))
                                            ? ((1U 
                                                & (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex))
                                                ? 7U
                                                : 0xbU)
                                            : ((1U 
                                                & (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex))
                                                ? 0xdU
                                                : 0xeU));
                                } else {
                                    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((7U 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (8U 
                                                  & ((~ (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex)) 
                                                     << 3U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xbU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (4U 
                                                  & ((~ (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex)) 
                                                     << 2U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xdU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (2U 
                                                  & ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                                     << 1U)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                            = ((0xeU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                          << 6U));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                          << 4U));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                          << 2U));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex));
                            } else {
                                if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x40U 
                                              | (0x80U 
                                                 & ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                                    << 7U))));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x10U 
                                              | (0x20U 
                                                 & ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                                    << 5U))));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (4U | 
                                              (8U & 
                                               ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                                << 3U))));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (2U & 
                                              ((IData)(vlTOPp->riscv_core__DOT__imm_vec_ext_ex) 
                                               << 1U)));
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0xc0U & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                   >> 0x12U)));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x30U & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                   >> 0xcU)));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0xcU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                  >> 6U)));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (3U & vlTOPp->riscv_core__DOT__alu_operand_b_ex));
                            } else {
                                if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x40U 
                                              | (0x80U 
                                                 & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                    >> 9U))));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x20U 
                                              & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                 >> 0xbU)));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (4U | 
                                              (8U & 
                                               (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                << 3U))));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (2U & 
                                              (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                               << 1U)));
                                }
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                } else {
                                    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0xc0U 
                                               | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0x20U 
                                               | (0xcfU 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0xcU 
                                               | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (2U | 
                                               (0xfcU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                    }
                                }
                            } else {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0x3fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xcfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xf3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = (0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                } else {
                                    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0x40U 
                                               | (0x3fU 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0xcfU 
                                               & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (4U | 
                                               (0xf3U 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                            = (0xfcU 
                                               & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0xc0U | (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x20U | (0xcfU 
                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (4U | (0xf3U 
                                             & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)));
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0xfcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                } else {
                                    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                                        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                            if ((0x3eU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
                                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((((((0x24U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
               | (0x28U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
              | (0x18U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
             | (0x19U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
            | (0x1cU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
           | (0x1dU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)));
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex) 
                             << 7U) | (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = vlTOPp->__Vtable2_riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed
        [vlTOPp->__Vtableidx2];
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((((((((0x18U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                 | (0x19U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                | (0x1cU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
               | (0x1dU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
              | (0x1aU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
             | (0x1bU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
            | (0x1eU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
           | (0x1fU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = (((((((((0x27U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                  | (0x2aU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                 | (0x37U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                | (0x35U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
               | (0x31U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
              | (0x30U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
             | (0x33U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
            | (0x32U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
           | (0x49U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlTOPp->riscv_core__DOT__alu_en_ex) 
           & ((((0x31U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                | (0x30U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
               | (0x33U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
              | (0x32U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = (((((0x19U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
              | (0x1dU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
             | (0x1bU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
            | (0x1fU == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
           | (IData)(vlTOPp->riscv_core__DOT__alu_is_subrot_ex));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__data_misaligned) {
            if (vlTOPp->riscv_core__DOT__ex_ready) {
                vlTOPp->riscv_core__DOT__useincr_addr_ex 
                    = vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__mult_multicycle)))) {
                if (vlTOPp->riscv_core__DOT__id_valid) {
                    vlTOPp->riscv_core__DOT__useincr_addr_ex 
                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__prepost_useincr;
                }
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__useincr_addr_ex = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
           == ((0x17U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
                ? 0U : (~ vlTOPp->riscv_core__DOT__alu_operand_b_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = ((0xeU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)) 
           | ((0xffU & vlTOPp->riscv_core__DOT__alu_operand_a_ex) 
              == (0xffU & vlTOPp->riscv_core__DOT__alu_operand_b_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = ((0xdU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)) 
           | (((0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 8U)) == (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                              >> 8U))) 
              << 1U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = ((0xbU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)) 
           | (((0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 0x10U)) == (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                 >> 0x10U))) 
              << 2U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = ((7U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)) 
           | (((0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 0x18U)) == (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                                 >> 0x18U))) 
              << 3U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfffffffcU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (3U & ((1U & vlTOPp->riscv_core__DOT__alu_operand_a_ex) 
                    + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             >> 1U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfffffff3U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xcU & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                              >> 2U)) + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                               >> 3U))) 
                      << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xffffffcfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x30U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 4U)) + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                >> 5U))) 
                       << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xffffff3fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc0U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 6U)) + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                >> 7U))) 
                       << 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfffffcffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x300U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 8U)) + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                 >> 9U))) 
                        << 8U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfffff3ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc00U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 0xaU)) + (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                   >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xffffcfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x3000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                 >> 0xcU)) + (1U & 
                                              (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                               >> 0xdU))) 
                         << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xffff3fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                 >> 0xeU)) + (1U & 
                                              (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                               >> 0xfU))) 
                         << 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfffcffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x30000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                  >> 0x10U)) + (1U 
                                                & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                   >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfff3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc0000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                  >> 0x12U)) + (1U 
                                                & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                   >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xffcfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x300000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                   >> 0x14U)) + (1U 
                                                 & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                    >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xff3fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc00000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                   >> 0x16U)) + (1U 
                                                 & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                    >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xfcffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x3000000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                    >> 0x18U)) + (1U 
                                                  & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                     >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xf3ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc000000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                    >> 0x1aU)) + (1U 
                                                  & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                     >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0xcfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0x30000000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                     >> 0x1cU)) + (1U 
                                                   & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                      >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
        = ((0x3fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
           | (0xc0000000U & (((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                     >> 0x1eU)) + (1U 
                                                   & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                      >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))
            ? (~ vlTOPp->riscv_core__DOT__alu_operand_a_ex)
            : ((IData)(vlTOPp->riscv_core__DOT__alu_is_subrot_ex)
                ? ((0xffff0000U & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                    >> 0x10U)))
                : vlTOPp->riscv_core__DOT__alu_operand_a_ex));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed 
        = (1U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                  >> 0x1fU) & (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (1U & (~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                       >> 0x1fU))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (2U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0x1eU)) << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (4U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0x1dU)) << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (8U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0x1cU)) << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x10U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           >> 0x1bU)) << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x20U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           >> 0x1aU)) << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x40U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           >> 0x19U)) << 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x80U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           >> 0x18U)) << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x100U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            >> 0x17U)) << 8U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x200U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            >> 0x16U)) << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x400U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            >> 0x15U)) << 0xaU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x800U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            >> 0x14U)) << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x1000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             >> 0x13U)) << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x2000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             >> 0x12U)) << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x4000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             >> 0x11U)) << 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x8000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             >> 0x10U)) << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x10000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                              >> 0xfU)) << 0x10U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x20000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                              >> 0xeU)) << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x40000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                              >> 0xdU)) << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x80000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                              >> 0xcU)) << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x100000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 0xbU)) << 0x14U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x200000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 0xaU)) << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x400000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 9U)) << 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x800000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                               >> 8U)) << 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x1000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 7U)) << 0x18U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x2000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 6U)) << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x4000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 5U)) << 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x8000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                >> 4U)) << 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x10000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                 >> 3U)) << 0x1cU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x20000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                 >> 2U)) << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x40000000U & ((~ (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                 >> 1U)) << 0x1eU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev) 
           | (0x80000000U & ((~ vlTOPp->riscv_core__DOT__alu_operand_a_ex) 
                             << 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                    >> 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                    >> 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                    >> 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                    >> 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                       >> 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                       >> 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                       >> 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                       >> 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                        >> 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                         >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                          << 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                          << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                          << 5U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                          << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           << 0xdU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                           << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                            << 0x17U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             << 0x19U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             << 0x1bU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                             << 0x1fU)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__valid_stored 
        = (1U & ((1U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
                         >> 1U) & (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q))))
                  ? ((((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                       >> 3U) & (3U != (3U & ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                                                 >> 0x10U))))) 
                     | ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 2U)) : ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                   >> 3U)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_is_hwlp 
        = (1U & ((8U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
                  ? ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__is_hwlp_Q) 
                     >> 1U) : (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__fifo_hwlp)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP)
            ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP
            : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev);
    if (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    } else {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlTOPp->riscv_core__DOT__mult_signed_mode_ex));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlTOPp->riscv_core__DOT__mult_sel_subword_ex))));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlTOPp->riscv_core__DOT__mult_signed_mode_ex;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U] 
        = ((0xfffc0000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U]) 
           | (0x3ffffU & VL_MULS_III(18,18,18, (0x3ffffU 
                                                & VL_EXTENDS_II(18,9, 
                                                                (0x1ffU 
                                                                 & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a)))), 
                                     (0x3ffffU & VL_EXTENDS_II(18,9, 
                                                               (0x1ffU 
                                                                & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b)))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U] 
        = ((0x3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U]) 
           | (0xfffc0000U & (VL_MULS_III(18,18,18, 
                                         (0x3ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
                                                                      >> 9U))))), 
                                         (0x3ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
                                                                      >> 9U)))))) 
                             << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
        = ((0xfffffff0U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U]) 
           | (0xfU & (VL_MULS_III(18,18,18, (0x3ffffU 
                                             & VL_EXTENDS_II(18,9, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
                                                                         >> 9U))))), 
                                  (0x3ffffU & VL_EXTENDS_II(18,9, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
                                                                        >> 9U)))))) 
                      >> 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
        = ((0xffc0000fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U]) 
           | (0x3ffff0U & (VL_MULS_III(18,18,18, (0x3ffffU 
                                                  & VL_EXTENDS_II(18,9, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
                                                                              >> 0x12U))))), 
                                       (0x3ffffU & 
                                        VL_EXTENDS_II(18,9, 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
                                                                  >> 0x12U)))))) 
                           << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
        = ((0x3fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U]) 
           | (0xffc00000U & (VL_MULS_III(18,18,18, 
                                         (0x3ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
                                                                      >> 0x1bU))))), 
                                         (0x3ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
                                                                      >> 0x1bU)))))) 
                             << 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[2U] 
        = (0xffU & (VL_MULS_III(18,18,18, (0x3ffffU 
                                           & VL_EXTENDS_II(18,9, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a 
                                                                       >> 0x1bU))))), 
                                (0x3ffffU & VL_EXTENDS_II(18,9, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b 
                                                                      >> 0x1bU)))))) 
                    >> 0xaU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | ((0U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                       << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
              & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((1U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 1U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((2U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 2U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((3U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 3U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((4U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 4U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((5U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 5U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((6U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 6U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((7U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 7U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((8U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 8U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((9U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 9U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xaU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xaU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xbU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xbU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xcU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xcU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xdU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xdU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xeU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xeU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0xfU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0xfU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x10U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x10U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x11U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x11U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x12U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x12U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x13U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x13U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x14U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x14U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x15U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x15U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x16U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x16U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x17U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x17U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x18U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x18U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x19U == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x19U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1aU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1aU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1bU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1bU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1cU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1cU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1dU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1dU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1eU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1eU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_b_dec) 
           | (((0x1fU == (((IData)(vlTOPp->riscv_core__DOT__regfile_alu_waddr_ex) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_alu_we_fw)) 
              << 0x1fU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | ((0U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                       << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
              & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffffdU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((1U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 1U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((2U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 2U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((3U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 3U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((4U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 4U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffffdfU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((5U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 5U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffffbfU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((6U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 6U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffff7fU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((7U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 7U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffeffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((8U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 8U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffdffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((9U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                        << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 9U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffffbffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xaU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xaU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffff7ffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xbU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xbU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffefffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xcU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xcU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffdfffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xdU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xdU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffffbfffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xeU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xeU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0xfU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                          << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0xfU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x10U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x10U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x11U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x11U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x12U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x12U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x13U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x13U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x14U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x14U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x15U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x15U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x16U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x16U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x17U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x17U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x18U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x18U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x19U == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x19U));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1aU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1aU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1bU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1bU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1cU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1cU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1dU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1dU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1eU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1eU));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__we_a_dec) 
           | (((0x1fU == (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                           << 0x1aU) | vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__apu)) 
               & (IData)(vlTOPp->riscv_core__DOT__regfile_we_wb)) 
              << 0x1fU));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[0U] 
        = (IData)((0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                                (0x3ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (0x1ffffU 
                                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a)))), 
                                                (0x3ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (0x1ffffU 
                                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b)))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U] 
        = ((0xfffffffcU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U]) 
           | (IData)(((0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0x1ffffU 
                                                                      & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a)))), 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0x1ffffU 
                                                                      & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b)))))) 
                      >> 0x20U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U] 
        = ((3U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U]) 
           | (0xfffffffcU & ((IData)((0x3ffffffffULL 
                                      & VL_MULS_QQQ(34,34,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0x1ffffU 
                                                                      & ((IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a 
                                                                                >> 0x11U)) 
                                                                         ^ 
                                                                         (- (IData)(
                                                                                ((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) 
                                                                                & (~ (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex))))))))), 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0x1ffffU 
                                                                      & (IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
                                                                                >> 0x11U)))))))) 
                             << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[2U] 
        = ((3U & ((IData)((0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                                        (0x3ffffffffULL 
                                                         & VL_EXTENDS_QI(34,17, 
                                                                         (0x1ffffU 
                                                                          & ((IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a 
                                                                                >> 0x11U)) 
                                                                             ^ 
                                                                             (- (IData)(
                                                                                ((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) 
                                                                                & (~ (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex))))))))), 
                                                        (0x3ffffffffULL 
                                                         & VL_EXTENDS_QI(34,17, 
                                                                         (0x1ffffU 
                                                                          & (IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
                                                                                >> 0x11U)))))))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & VL_MULS_QQQ(34,34,34, 
                                                                       (0x3ffffffffULL 
                                                                        & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a 
                                                                                >> 0x11U)) 
                                                                                ^ 
                                                                                (- (IData)(
                                                                                ((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o) 
                                                                                & (~ (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex))))))))), 
                                                                       (0x3ffffffffULL 
                                                                        & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
                                                                                >> 0x11U))))))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlTOPp->riscv_core__DOT__alu_operand_a_ex
            : ((1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((0xffff0000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->riscv_core__DOT__alu_operand_a_ex))
                : ((0xff000000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                   << 0x18U)) | ((0xff0000U 
                                                  & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->riscv_core__DOT__alu_operand_a_ex))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((0xff000000U & ((- (IData)((1U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                 >> 0x1fU)))) 
                               << 0x18U)) | ((0xff0000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                                >> 0x17U)))) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                                   >> 0xfU)))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                                    >> 7U))))))))
            : ((1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlTOPp->riscv_core__DOT__alu_operand_c_ex
                : vlTOPp->riscv_core__DOT__alu_operand_b_ex));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = ((0xeU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)) 
           | VL_GTS_III(32,9,9, ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             << 1U) 
                                            & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                               << 8U))) 
                                 | (0xffU & vlTOPp->riscv_core__DOT__alu_operand_a_ex)), 
                        ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                     << 1U) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                               << 8U))) 
                         | (0xffU & vlTOPp->riscv_core__DOT__alu_operand_b_ex))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = ((0xdU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)) 
           | (VL_GTS_III(1,9,9, ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 7U) 
                                            & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                               << 7U))) 
                                 | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 8U))), 
                         ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 7U) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                << 7U))) 
                          | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 8U)))) << 1U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = ((0xbU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)) 
           | (VL_GTS_III(1,9,9, ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 0xfU) 
                                            & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                               << 6U))) 
                                 | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 0x10U))), 
                         ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 0xfU) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  << 6U))) 
                          | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 0x10U)))) 
              << 2U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = ((7U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)) 
           | (VL_GTS_III(1,9,9, ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 0x17U) 
                                            & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                               << 5U))) 
                                 | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                             >> 0x18U))), 
                         ((0x100U & ((vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 0x17U) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                   << 5U))) 
                          | (0xffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                      >> 0x18U)))) 
              << 3U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate)
            ? ((IData)(vlTOPp->riscv_core__DOT__alu_is_subrot_ex)
                ? (~ ((0xffff0000U & (vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                      << 0x10U)) | 
                      (0xffffU & (vlTOPp->riscv_core__DOT__alu_operand_b_ex 
                                  >> 0x10U)))) : (~ vlTOPp->riscv_core__DOT__alu_operand_b_ex))
            : vlTOPp->riscv_core__DOT__alu_operand_b_ex);
    vlTOPp->riscv_core__DOT__mult_multicycle = 0U;
    if ((0U != (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlTOPp->riscv_core__DOT__mult_multicycle = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlTOPp->riscv_core__DOT__mult_multicycle = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlTOPp->riscv_core__DOT__mult_multicycle = 1U;
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0xfU & (- (IData)((1U & (((((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                       >> 3U) & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                 >> 2U)) 
                                     & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                        >> 1U)) & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0xcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((1U & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                         & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                            >> 1U)))))));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0xcU & ((- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                             >> 2U) 
                                            & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U))))) 
                          << 2U)));
    } else {
        if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
                = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xfffff8U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (7U & ((3U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1) 
                    + (3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                             >> 2U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xffffc7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0x38U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                               >> 4U)) + (3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                >> 6U))) 
                       << 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xfffe3fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0x1c0U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                >> 8U)) + (3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                 >> 0xaU))) 
                        << 6U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xfff1ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0xe00U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                >> 0xcU)) + (3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                   >> 0xeU))) 
                        << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xff8fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0x7000U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                 >> 0x10U)) + (3U & 
                                               (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xfc7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0x38000U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                  >> 0x14U)) + (3U 
                                                & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0xe3ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0x1c0000U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                   >> 0x18U)) + (3U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
        = ((0x1fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
           | (0xe00000U & (((3U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                   >> 0x1cU)) + (3U 
                                                 & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1 
                                                    >> 0x1eU))) 
                           << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = (1ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0xffffffe01ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0xffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a))) 
              << 1U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = (0x200ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0xffffc03ffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                        >> 8U)))) << 0xaU));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = (0x40000ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0xff807ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                        >> 0x10U)))) 
              << 0x13U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = (0x8000000ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0xfffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                        >> 0x18U)))) 
              << 0x1cU));
    if ((1U & (~ ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0xffffbffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else {
            if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                    = (0xffffffdffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                    = (0xffffbffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                    = (0xff7ffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            }
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlTOPp->riscv_core__DOT__alu_operand_a_ex;
    } else {
        if ((((0x30U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
              | (0x32U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
             | (0x37U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
        } else {
            if ((((0x31U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
                  | (0x33U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))) 
                 | (0x35U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                    = ((0x80000000U & vlTOPp->riscv_core__DOT__alu_operand_a_ex)
                        ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                        : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
            }
        }
    }
    if (vlTOPp->rst_ni) {
        if ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt_if 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt;
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt_if = 0U;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i 
        = ((IData)(vlTOPp->riscv_core__DOT__hwlp_dec_cnt_id) 
           & (- (IData)((IData)(vlTOPp->riscv_core__DOT__is_hwlp_id))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = ((0x10000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a) 
           | (0xffffU & ((1U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                          ? (vlTOPp->riscv_core__DOT__mult_operand_a_ex 
                             >> 0x10U) : vlTOPp->riscv_core__DOT__mult_operand_a_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = ((0x10000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b) 
           | (0xffffU & ((2U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                          ? (vlTOPp->riscv_core__DOT__mult_operand_b_ex 
                             >> 0x10U) : vlTOPp->riscv_core__DOT__mult_operand_b_ex)));
    vlTOPp->riscv_core__DOT__csr_addr_int = ((IData)(vlTOPp->riscv_core__DOT__csr_access_ex)
                                              ? (0xfffU 
                                                 & vlTOPp->riscv_core__DOT__alu_operand_b_ex)
                                              : 0U);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x1ffffffffULL & ((VL_EXTENDS_QI(33,32, 
                                            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[0U]) 
                              + VL_EXTENDS_QI(33,32, 
                                              ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[2U] 
                                                << 0x1eU) 
                                               | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U] 
                                                  >> 2U)))) 
                             + VL_EXTENDS_QI(33,32, 
                                             ((IData)(vlTOPp->riscv_core__DOT__mult_is_clpx_ex_o)
                                               ? (0x1ffffU 
                                                  & ((IData)(
                                                             (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b 
                                                              >> 0x11U)) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlTOPp->riscv_core__DOT__mult_clpx_img_ex)))))))
                                               : vlTOPp->riscv_core__DOT__mult_dot_op_c_ex))));
    if (vlTOPp->rst_ni) {
        if (vlTOPp->riscv_core__DOT__if_stage_i__DOT__if_valid) {
            vlTOPp->riscv_core__DOT__instr_rdata_id 
                = vlTOPp->riscv_core__DOT__if_stage_i__DOT__instr_decompressed;
        }
    } else {
        vlTOPp->riscv_core__DOT__instr_rdata_id = 0U;
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
        = ((0xff000000U & (((0x80U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                             ? ((0x40U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                 ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                    >> 0x18U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                 >> 0x10U))
                             : ((0x40U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                 ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                    >> 8U) : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((0x20U 
                                               & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                               ? ((0x10U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x18U)
                                                   : 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x10U))
                                               : ((0x10U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((8U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x18U)
                                                   : 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x10U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x18U)
                                                    : 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 8U)
                                                    : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
        = ((0xff000000U & (((0x80U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                             ? ((0x40U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                 ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                    >> 0x18U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                 >> 0x10U))
                             : ((0x40U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                 ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                    >> 8U) : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((0x20U 
                                               & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                               ? ((0x10U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x18U)
                                                   : 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x10U))
                                               : ((0x10U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((8U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x18U)
                                                   : 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x10U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((2U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x18U)
                                                    : 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 8U)
                                                    : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0xfU & (- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                     >> 3U) | (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                >> 3U) 
                                               & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                   >> 2U) 
                                                  | (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                      >> 2U) 
                                                     & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 1U) 
                                                        | (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                            >> 1U) 
                                                           & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0xcU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0xcU & ((- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                             >> 3U) 
                                            | (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U)))))) 
                          << 2U)));
    } else {
        if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
                = vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = (0xffffffffeULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0xffffffe01ULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0xffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b))) 
              << 1U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = (0xffffffdffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0xffffc03ffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                        >> 8U)))) << 0xaU));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = (0xffffbffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0xff807ffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                        >> 0x10U)))) 
              << 0x13U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = (0xff7ffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0xfffffffULL & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0xffU & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                        >> 0x18U)))) 
              << 0x1cU));
    if (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlTOPp->riscv_core__DOT__alu_operator_ex))))) {
        vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
            vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x40000ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else {
            if ((3U == (IData)(vlTOPp->riscv_core__DOT__alu_vec_mode_ex))) {
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                    = (0x200ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                    = (0x40000ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
                vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                    = (0x8000000ULL | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            }
        }
    }
    vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt 
        = (3U & vlTOPp->riscv_core__DOT__alu_operand_a_ex);
    if (vlTOPp->riscv_core__DOT__useincr_addr_ex) {
        vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt 
            = (3U & ((IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt) 
                     + vlTOPp->riscv_core__DOT__alu_operand_b_ex));
    }
    vlTOPp->riscv_core__DOT__data_addr_pmp = vlTOPp->riscv_core__DOT__alu_operand_a_ex;
    if (vlTOPp->riscv_core__DOT__useincr_addr_ex) {
        vlTOPp->riscv_core__DOT__data_addr_pmp = (vlTOPp->riscv_core__DOT__data_addr_pmp 
                                                  + vlTOPp->riscv_core__DOT__alu_operand_b_ex);
        if (vlTOPp->riscv_core__DOT__data_misaligned_ex) {
            vlTOPp->riscv_core__DOT__data_addr_pmp 
                = (0xfffffffcU & vlTOPp->riscv_core__DOT__data_addr_pmp);
        }
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3 
        = ((0xfff0U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
           | (0xfU & ((7U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2) 
                      + (7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                               >> 3U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3 
        = ((0xff0fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
           | (0xf0U & (((7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                               >> 6U)) + (7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                                                >> 9U))) 
                       << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3 
        = ((0xf0ffU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
           | (0xf00U & (((7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                                >> 0xcU)) + (7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                                                   >> 0xfU))) 
                        << 8U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3 
        = ((0xfffU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
           | (0xf000U & (((7U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                                 >> 0x12U)) + (7U & 
                                               (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xffff07ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0xf800U & (((1U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                           ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U]
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                               << 0x1bU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                            >> 5U))) 
                         << 0xbU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xffe0ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x1f0000U & (((4U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                 << 0x16U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0xaU))
                             : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                 << 0x11U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0xfU))) 
                           << 0x10U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0xfc1fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x3e00000U & (((0x10U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                  << 0xcU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                              >> 0x14U))
                              : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                  << 7U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                            >> 0x19U))) 
                            << 0x15U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0x83ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x7c000000U & (((0x40U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                   << 2U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[0U] 
                                             >> 0x1eU))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x1dU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 3U))) 
                             << 0x1aU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[2U]) 
           | (0x80000000U & (((0x100U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x18U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 8U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                   << 0x13U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                                >> 0xdU))) 
                             << 0x1fU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfffffff0U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xfU & (((0x100U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                        ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                            << 0x18U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                         >> 8U)) : 
                       ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                         << 0x13U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                      >> 0xdU))) >> 1U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfffffe0fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x1f0U & (((0x400U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                          ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                              << 0xeU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                          >> 0x12U))
                          : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                              << 9U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                        >> 0x17U))) 
                        << 4U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xffffc1ffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x3e00U & (((0x1000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                           ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                               << 4U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[1U] 
                                         >> 0x1cU))
                           : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                               << 0x1fU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                            >> 1U))) 
                         << 9U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xfff83fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x7c000U & (((0x4000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                            ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                << 0x1aU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 6U))
                            : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                << 0x15U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0xbU))) 
                          << 0xeU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xff07ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xf80000U & (((0x10000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                 << 0x10U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                              >> 0x10U))
                             : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                 << 0xbU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x15U))) 
                           << 0x13U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0xe0ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0x1f000000U & (((0x40000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                   << 6U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x1aU))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                   << 1U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[2U] 
                                             >> 0x1fU))) 
                             << 0x18U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[3U]) 
           | (0xe0000000U & (((0x100000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                               ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                   << 0x1cU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                >> 4U))
                               : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                   << 0x17U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                >> 9U))) 
                             << 0x1dU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffffffcU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (3U & (((0x100000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                      ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                          << 0x1cU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                       >> 4U)) : ((
                                                   vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                                     >> 9U))) 
                    >> 3U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xffffff83U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x7cU & (((0x400000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                         ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                             << 0x12U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                          >> 0xeU))
                         : ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                             << 0xdU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                         >> 0x13U))) 
                       << 2U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffff07fU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0xf80U & (((0x1000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                          ? ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                              << 8U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                        >> 0x18U)) : 
                         ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                           << 3U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[3U] 
                                     >> 0x1dU))) << 7U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xfffe0fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x1f000U & (((0x4000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                            ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                               >> 2U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                         >> 7U)) << 0xcU)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xffc1ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x3e0000U & (((0x10000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                             ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                >> 0xcU) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                            >> 0x11U)) 
                           << 0x11U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U] 
        = ((0xf83fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[4U]) 
           | (0x7c00000U & (((0x40000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                 >> 0x16U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut[4U] 
                                              >> 0x1bU)) 
                            << 0x16U)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffff7fffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x8000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                          << 0xfU) | (0xffff8000U & 
                                      (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 0xeU)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffeffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x10000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                           << 0xeU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 0xdU))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffdffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x20000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                           << 0xdU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 0xcU))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfffbffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x40000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                           << 0xcU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 0xbU))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfff7ffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x80000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                           << 0xbU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 0xaU))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffefffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x100000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                            << 0xaU) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                        << 9U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffdfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x200000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                            << 9U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                      << 8U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xffbfffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x400000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                            << 8U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                      << 7U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xff7fffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x800000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                            << 7U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                      << 6U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfeffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x1000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                             << 6U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 5U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfdffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x2000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                             << 5U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 4U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xfbffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x4000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                             << 4U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 3U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xf7ffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x8000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                             << 3U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       << 2U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xefffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x10000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                              << 2U) | (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                        << 1U))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xdfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x20000000U & ((vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                              << 1U) | vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes 
        = ((0xbfffffffU & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes) 
           | (0x40000000U & ((0xc0000000U & vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input) 
                             | (0x40000000U & (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 1U)))));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr 
        = (2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr));
    if ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
         == (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q))) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr 
            = ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr)) 
               | (1U & ((0U != (0x3fffffffU & (IData)(
                                                      (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                                       >> 2U)))) 
                        | ((IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                    >> 1U)) & ((IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q) 
                                               | (~ (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i)))))));
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr 
        = (1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr));
    if ((vlTOPp->riscv_core__DOT__if_stage_i__DOT__fetch_addr 
         == (IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q 
                     >> 0x20U)))) {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr 
            = ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr)) 
               | (2U & (((0U != (0x3fffffffU & (IData)(
                                                       (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                                        >> 0x22U)))) 
                         | ((IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                     >> 0x21U)) & ((IData)(
                                                           (vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q 
                                                            >> 0x20U)) 
                                                   | (~ 
                                                      ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i) 
                                                       >> 1U))))) 
                        << 1U)));
    }
    vlTOPp->riscv_core__DOT__csr_hwlp_we = 0U;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x7b3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x400U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if ((0x404U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                    if ((0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                            vlTOPp->riscv_core__DOT__csr_hwlp_we = 1U;
                                        }
                                    } else {
                                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                            vlTOPp->riscv_core__DOT__csr_hwlp_we = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x7c2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlTOPp->riscv_core__DOT__csr_hwlp_we = 4U;
                }
            } else {
                if ((0x7c4U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                        vlTOPp->riscv_core__DOT__csr_hwlp_we = 1U;
                    }
                } else {
                    if ((0x7c5U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlTOPp->riscv_core__DOT__csr_hwlp_we = 2U;
                        }
                    } else {
                        if ((0x7c6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->riscv_core__DOT__csr_hwlp_we = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__csr_hwlp_regid = 0U;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                      | (6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                     | (0x300U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                    | (0x340U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                   | (0x341U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x342U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))))) {
        if (((((((((0x7b0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)) 
                   | (0x7b1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                  | (0x7b2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                 | (0x7b3U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
                | (0x400U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
               | (0x404U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              | (0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
             | (0x7c1U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int)))) {
            if ((0x7b0U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if ((0x7b1U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if ((0x7b2U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if ((0x7b3U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if ((0x400U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                if ((0x404U != (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                    if ((0x7c0U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                            vlTOPp->riscv_core__DOT__csr_hwlp_regid = 0U;
                                        }
                                    } else {
                                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                            vlTOPp->riscv_core__DOT__csr_hwlp_regid = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x7c2U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlTOPp->riscv_core__DOT__csr_hwlp_regid = 0U;
                }
            } else {
                if ((0x7c4U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                    if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                        vlTOPp->riscv_core__DOT__csr_hwlp_regid = 1U;
                    }
                } else {
                    if ((0x7c5U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                        if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlTOPp->riscv_core__DOT__csr_hwlp_regid = 1U;
                        }
                    } else {
                        if ((0x7c6U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) {
                            if (vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->riscv_core__DOT__csr_hwlp_regid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffeU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | ((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb00U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffbU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb02U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              << 2U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffff7U & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb03U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              << 3U));
    vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffefU & vlTOPp->riscv_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlTOPp->riscv_core__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb04U == (IData)(vlTOPp->riscv_core__DOT__csr_addr_int))) 
              << 4U));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0xffffU & VL_SHIFTRS_III(16,16,2, (0xffffU 
                                              & (IData)(
                                                        (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                         >> 0xfU))), (IData)(vlTOPp->riscv_core__DOT__mult_clpx_shift_ex)));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
        = ((0xff000000U & (((8U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                             ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                >> 0x18U) : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                             >> 0x18U)) 
                           << 0x18U)) | ((0xff0000U 
                                          & (((4U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                               ? (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                  >> 0x10U)
                                               : (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                  >> 8U)
                                                  : 
                                                 (vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1
                                                   : vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater 
        = (0xfU & (- (IData)((1U & (((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                     >> 3U) ^ (((vlTOPp->riscv_core__DOT__alu_operand_a_ex 
                                                 & vlTOPp->riscv_core__DOT__alu_operand_b_ex) 
                                                >> 0x1fU) 
                                               & (~ 
                                                  ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal) 
                                                   >> 3U))))))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x1fffffffffULL & (VL_EXTENDS_QQ(37,36, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                              + VL_EXTENDS_QQ(37,36, vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlTOPp->data_wdata_o = ((2U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt))
                             ? ((1U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt))
                                 ? ((0xff000000U & 
                                     (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                      << 0x18U)) | 
                                    (0xffffffU & (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                                  >> 8U)))
                                 : ((0xffff0000U & 
                                     (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                      << 0x10U)) | 
                                    (0xffffU & (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                                >> 0x10U))))
                             : ((1U & (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt))
                                 ? ((0xffffff00U & 
                                     (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                      << 8U)) | (0xffU 
                                                 & (vlTOPp->riscv_core__DOT__alu_operand_c_ex 
                                                    >> 0x18U)))
                                 : vlTOPp->riscv_core__DOT__alu_operand_c_ex));
    vlTOPp->data_be_o = ((2U & (IData)(vlTOPp->riscv_core__DOT__data_type_ex))
                          ? 1U : ((1U & (IData)(vlTOPp->riscv_core__DOT__data_type_ex))
                                   ? 3U : 0xfU));
    vlTOPp->data_be_o = (0xfU & ((IData)(vlTOPp->data_be_o) 
                                 << (IData)(vlTOPp->riscv_core__DOT__load_store_unit_i__DOT__shamt)));
    if (vlTOPp->riscv_core__DOT__data_misaligned_ex) {
        vlTOPp->data_be_o = (0xfU & (~ (IData)(vlTOPp->data_be_o)));
    }
    vlTOPp->data_addr_o = vlTOPp->riscv_core__DOT__data_addr_pmp;
    vlTOPp->riscv_core__DOT__data_misaligned = 0U;
    if (((IData)(vlTOPp->riscv_core__DOT__data_req_ex) 
         & (~ (IData)(vlTOPp->riscv_core__DOT__data_misaligned_ex)))) {
        vlTOPp->riscv_core__DOT__data_misaligned = 
            (((0U == (IData)(vlTOPp->riscv_core__DOT__data_type_ex)) 
              & (0U != (3U & vlTOPp->riscv_core__DOT__data_addr_pmp))) 
             | ((1U == (IData)(vlTOPp->riscv_core__DOT__data_type_ex)) 
                & (3U == (3U & vlTOPp->riscv_core__DOT__data_addr_pmp))));
    }
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4 
        = ((0x3e0U & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
           | (0x1fU & ((0xfU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3)) 
                       + (0xfU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                  >> 4U)))));
    vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4 
        = ((0x1fU & (IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4)) 
           | (0x3e0U & (((0xfU & ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlTOPp->riscv_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3) 
                                              >> 0xcU))) 
                        << 5U)));
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target = 0U;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt = 0U;
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)) {
            if ((1U & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr) 
                       >> (1U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_target 
                    = (IData)((vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q 
                               >> (0x3fU & (vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j 
                                            << 5U))));
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt 
                    = ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwlp_dec_cnt) 
                       | ((IData)(1U) << (1U & vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j)));
                goto __Vlabel1;
            }
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j 
                = ((IData)(1U) + vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j);
        }
        __Vlabel1: ;
    }
    vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 0U;
    if ((4U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
        if ((2U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
            vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS))) {
                vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked = 1U;
            }
        }
    } else {
        vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_masked 
            = (1U & ((~ ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                         >> 1U)) & ((IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__hwlp_CS) 
                                    | ((0U != (IData)(vlTOPp->riscv_core__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr)) 
                                       & (~ (vlTOPp->riscv_core__DOT__if_stage_i__DOT__prefetch_32__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                                             >> 1U))))));
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id 
                                    = ((0U == (3U & 
                                               (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                >> 0xcU)))
                                        ? 2U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U));
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
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
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id 
                                    = ((0U == (3U & 
                                               (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                >> 0xcU)))
                                        ? 2U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U));
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_type_id = 2U;
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
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 3U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 3U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_dot_signed = 3U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__atop_id = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__atop_id 
                                        = (0x20U | 
                                           (0x1fU & 
                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                             >> 0x1bU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id 
                                    = (1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id 
                                        = (1U & (~ 
                                                 (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)));
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id 
                                    = (1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_sign_ext_id 
                                        = (1U & (~ 
                                                 (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0x80000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id 
                                                    = 
                                                    (1U 
                                                     & ((~ 
                                                         (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                          >> 0x1cU)) 
                                                        | (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                           >> 0x1bU)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_we_id = 0U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 3U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                    = ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                        ? ((0x2000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0xbU
                                                : 1U)
                                            : ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0xaU
                                                : 0U))
                                        : ((0x2000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0xdU
                                                : 0xcU)
                                            : ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0xdU
                                                : 0xcU)));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x1000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? ((0x80000000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (
                                                   (0x4000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x1fU
                                                    : 0x1bU)
                                                : (
                                                   (0x4000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x1dU
                                                    : 0x19U))
                                            : ((0x80000000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (
                                                   (0x4000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x1eU
                                                    : 0x1aU)
                                                : (
                                                   (0x4000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x1cU
                                                    : 0x18U)));
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3aU;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3aU;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x38U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x39U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x2000000U 
                                                              & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                              ? 0x39U
                                                              : 0x38U);
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3bU;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3aU;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x2dU;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3fU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x3eU;
                                                    }
                                                } else {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000000U 
                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                          ? 0x18U
                                                          : 0x14U);
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x8000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 0x19U
                                                       : 0x15U)
                                                      : 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 0x19U
                                                       : 0x2fU));
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000000U 
                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                          ? 0x14U
                                                          : 0x2eU);
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x27U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x8000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 5U
                                                       : 0x24U)
                                                      : 
                                                     ((0x4000000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 1U
                                                       : 0x25U));
                                            }
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x20000000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (
                                                   (0x10000000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 0xbU
                                                      : 0x13U)
                                                     : 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 9U
                                                      : 0x12U))
                                                    : 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 4U
                                                      : 0x11U)
                                                     : 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 0U
                                                      : 0x10U)))
                                                : (
                                                   (0x10000000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 0xaU
                                                      : 0x1aU)
                                                     : 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 8U
                                                      : 0x18U))
                                                    : 
                                                   ((0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 0xdU
                                                      : 0x19U)
                                                     : 
                                                    ((0x4000000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 0xcU
                                                      : 0x18U))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                = (
                                                   (0x1000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x49U
                                                    : 0x2cU);
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x2000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (
                                                   (0x1000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x2bU
                                                    : 0x2aU)
                                                : (
                                                   (0x1000U 
                                                    & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                    ? 0x29U
                                                    : 0x28U));
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x2000U 
                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 0x2bU
                                                       : 0x2aU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                       ? 0x29U
                                                       : 0x28U));
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x17U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x16U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x17U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x16U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x3fU
                                                                        : 0x3eU)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x3fU
                                                                        : 0x3eU))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x34U
                                                                        : 0x35U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x37U
                                                                        : 0x36U)));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x26U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                                        = 
                                                                        ((0x2000U 
                                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                          ? 
                                                                         ((0x1000U 
                                                                           & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                           ? 0x13U
                                                                           : 0x12U)
                                                                          : 
                                                                         ((0x1000U 
                                                                           & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                           ? 0x11U
                                                                           : 0x10U));
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                                            = 
                                                                            ((0x1000U 
                                                                              & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                              ? 7U
                                                                              : 6U);
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x14U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                                        = 
                                                                        ((0x2000U 
                                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                          ? 
                                                                         ((0x1000U 
                                                                           & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                           ? 0x32U
                                                                           : 0x33U)
                                                                          : 
                                                                         ((0x1000U 
                                                                           & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                           ? 0x30U
                                                                           : 0x31U));
                                                                }
                                                            } else {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x15U
                                                                        : 0x2eU)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x25U
                                                                        : 0x2fU))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 3U
                                                                        : 2U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                        ? 0x27U
                                                                        : 0x18U)));
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
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0x15U
                                                : 0x2eU);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x19U)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x19U)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                                        }
                                    }
                                } else {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 3U
                                                : 2U)
                                            : ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 0x27U
                                                : 0x18U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator = 2U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator 
                                        = ((0x1000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? ((0x4000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 3U
                                                : 2U)
                                            : ((0x4000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? 3U
                                                : 2U));
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator 
                                    = ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                        ? 4U : 5U);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator 
                                                                            = 
                                                                            ((0x1000U 
                                                                              & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                              ? 1U
                                                                              : 0U);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_operator 
                                                                        = 
                                                                        ((0x2000U 
                                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x1000U 
                                                                           & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                           ? 6U
                                                                           : 0U));
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
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_imm_mux = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_imm_mux = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_signed_mode 
                                        = (3U & ((0x1000U 
                                                  & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                >> 0x1fU))))
                                                  : 
                                                 (- (IData)(
                                                            (1U 
                                                             & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                >> 0x1fU))))));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_signed_mode 
                                                                            = 
                                                                            ((0x1000U 
                                                                              & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                              ? 0U
                                                                              : 1U);
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
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
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_sel_subword = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mult_sel_subword 
                                        = (1U & ((0x1000U 
                                                  & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                  ? 
                                                 (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)
                                                  : 
                                                 (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel = 1U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel = 0U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel = 0U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = 1U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = 0U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0xcU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel = 0U;
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
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0x1fU)))) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_clpx = 1U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_subrot = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0x1fU)))) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__is_subrot = 1U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
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
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
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
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 2U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0x1fU)))) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 3U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 3U;
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
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 0U;
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xdU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 2U;
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 0U;
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xeU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0xdU)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_b_mux = 2U;
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
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                }
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
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
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 1U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux = 1U;
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__bmask_a_mux = 1U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel = 1U;
                                    }
                                } else {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_start_mux_sel = 0U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel = 0U;
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_target_mux_sel = 1U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel 
                                            = (1U & 
                                               (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)));
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel 
                                            = (1U & 
                                               (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we = 7U;
                                    }
                                } else {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we 
                                        = ((0x2000U 
                                            & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                            ? (4U | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we))
                                            : ((0x1000U 
                                                & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                ? (2U 
                                                   | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we))
                                                : (1U 
                                                   | (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel = 1U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel = 2U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__jump_target_mux_sel = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_vu_type 
        = ((0x3eU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                     >> 0x13U)) | (1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                         >> 0x19U)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode 
                                    = ((0x1000U & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                        ? 3U : 2U);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((2U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__alu_vec_mode 
                                                                        = 
                                                                        ((0x2000U 
                                                                          & vlTOPp->riscv_core__DOT__instr_rdata_id)
                                                                          ? 3U
                                                                          : 2U);
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
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__imm_i_type 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x14U)));
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__registers_i__DOT__riscv_register_file_i__DOT__mem[
        (0x1fU & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 0xfU))];
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_dec = 1U;
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
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_dec = 1U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (0x7b2U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x14U)))) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_dec = 1U;
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
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
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
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (0x7b2U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x14U)))) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
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
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
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
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (0x7b2U 
                                                             != 
                                                             (0xfffU 
                                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x14U)))) {
                                                            if (
                                                                (0x105U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__pipe_flush_dec = 1U;
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
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U == 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
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
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id = 0U;
    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((6U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((6U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__data_load_event_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_access = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_access = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    if ((0x40U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            if ((1U 
                                                 != 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                } else {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (0xfffU 
                                                          & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        if (
                                                            (0x7b2U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                 >> 0x14U)))) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                        } else {
                                                            if (
                                                                (0x105U 
                                                                 != 
                                                                 (0xfffU 
                                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    }
                                } else {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            if ((3U 
                                                 != 
                                                 (3U 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal)))) {
                                        if ((((((((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                       >> 0x14U))) 
                                                  | (0U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) 
                                                 | (0x41U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                        >> 0x14U)))) 
                                                | (0x7b0U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                       >> 0x14U)))) 
                                               | (0x7b1U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                      >> 0x14U)))) 
                                              | (0x7b2U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) 
                                             | (0x7b3U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                    >> 0x14U))))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    }
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = vlTOPp->riscv_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x80000000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x4000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                }
            } else {
                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        }
    } else {
        if ((0x20U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((3U == (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                    if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x2000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    }
                                } else {
                                    if ((2U == (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                 >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x2000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x1000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
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
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((2U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0x80000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        } else {
                                            if ((0x8000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (3U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (3U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (3U & 
                                              (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ vlTOPp->riscv_core__DOT__instr_rdata_id))) {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0x4000U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x20U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                         >> 0x19U)))) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U & (~ (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                     >> 0x19U)))) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0x80000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((3U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    if ((4U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                            if ((1U & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                if ((7U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0x80000000U 
                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->riscv_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((3U == (7U & (vlTOPp->riscv_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->riscv_core__DOT__illegal_c_insn_id) {
        vlTOPp->riscv_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
}
