// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb2per.h for the primary calling header

#include "Vapb2per.h"
#include "Vapb2per__Syms.h"

//==========
CData/*0:0*/ Vapb2per::__Vtable1_per_master_we_o[64];
CData/*0:0*/ Vapb2per::__Vtable1_per_master_req_o[64];
CData/*0:0*/ Vapb2per::__Vtable1_PREADY[64];
CData/*0:0*/ Vapb2per::__Vtable1_apb2per__DOT__NS[64];

VL_CTOR_IMP(Vapb2per) {
    Vapb2per__Syms* __restrict vlSymsp = __VlSymsp = new Vapb2per__Syms(this, name());
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vapb2per::__Vconfigure(Vapb2per__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vapb2per::~Vapb2per() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vapb2per::_initial__TOP__1(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_initial__TOP__1\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PSLVERR = 0U;
    vlTOPp->per_master_be_o = 0xfU;
}

void Vapb2per::_settle__TOP__3(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_settle__TOP__3\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PRDATA = vlTOPp->per_master_r_rdata_i;
    vlTOPp->per_master_add_o = vlTOPp->PADDR;
    vlTOPp->per_master_wdata_o = vlTOPp->PWDATA;
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

void Vapb2per::_eval_initial(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_eval_initial\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

void Vapb2per::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::final\n"); );
    // Variables
    Vapb2per__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vapb2per::_eval_settle(Vapb2per__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_eval_settle\n"); );
    Vapb2per* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vapb2per::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb2per::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    PADDR = VL_RAND_RESET_I(32);
    PWDATA = VL_RAND_RESET_I(32);
    PWRITE = VL_RAND_RESET_I(1);
    PSEL = VL_RAND_RESET_I(1);
    PENABLE = VL_RAND_RESET_I(1);
    PRDATA = VL_RAND_RESET_I(32);
    PREADY = VL_RAND_RESET_I(1);
    PSLVERR = VL_RAND_RESET_I(1);
    per_master_req_o = VL_RAND_RESET_I(1);
    per_master_add_o = VL_RAND_RESET_I(32);
    per_master_we_o = VL_RAND_RESET_I(1);
    per_master_wdata_o = VL_RAND_RESET_I(32);
    per_master_be_o = VL_RAND_RESET_I(4);
    per_master_gnt_i = VL_RAND_RESET_I(1);
    per_master_r_valid_i = VL_RAND_RESET_I(1);
    per_master_r_opc_i = VL_RAND_RESET_I(1);
    per_master_r_rdata_i = VL_RAND_RESET_I(32);
    apb2per__DOT__CS = VL_RAND_RESET_I(1);
    apb2per__DOT__NS = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_per_master_we_o[0] = 0U;
    __Vtable1_per_master_we_o[1] = 0U;
    __Vtable1_per_master_we_o[2] = 0U;
    __Vtable1_per_master_we_o[3] = 0U;
    __Vtable1_per_master_we_o[4] = 0U;
    __Vtable1_per_master_we_o[5] = 0U;
    __Vtable1_per_master_we_o[6] = 0U;
    __Vtable1_per_master_we_o[7] = 0U;
    __Vtable1_per_master_we_o[8] = 0U;
    __Vtable1_per_master_we_o[9] = 0U;
    __Vtable1_per_master_we_o[10] = 0U;
    __Vtable1_per_master_we_o[11] = 0U;
    __Vtable1_per_master_we_o[12] = 0U;
    __Vtable1_per_master_we_o[13] = 0U;
    __Vtable1_per_master_we_o[14] = 0U;
    __Vtable1_per_master_we_o[15] = 0U;
    __Vtable1_per_master_we_o[16] = 0U;
    __Vtable1_per_master_we_o[17] = 0U;
    __Vtable1_per_master_we_o[18] = 0U;
    __Vtable1_per_master_we_o[19] = 0U;
    __Vtable1_per_master_we_o[20] = 0U;
    __Vtable1_per_master_we_o[21] = 0U;
    __Vtable1_per_master_we_o[22] = 0U;
    __Vtable1_per_master_we_o[23] = 0U;
    __Vtable1_per_master_we_o[24] = 0U;
    __Vtable1_per_master_we_o[25] = 0U;
    __Vtable1_per_master_we_o[26] = 0U;
    __Vtable1_per_master_we_o[27] = 0U;
    __Vtable1_per_master_we_o[28] = 1U;
    __Vtable1_per_master_we_o[29] = 0U;
    __Vtable1_per_master_we_o[30] = 1U;
    __Vtable1_per_master_we_o[31] = 0U;
    __Vtable1_per_master_we_o[32] = 0U;
    __Vtable1_per_master_we_o[33] = 0U;
    __Vtable1_per_master_we_o[34] = 0U;
    __Vtable1_per_master_we_o[35] = 0U;
    __Vtable1_per_master_we_o[36] = 0U;
    __Vtable1_per_master_we_o[37] = 0U;
    __Vtable1_per_master_we_o[38] = 0U;
    __Vtable1_per_master_we_o[39] = 0U;
    __Vtable1_per_master_we_o[40] = 0U;
    __Vtable1_per_master_we_o[41] = 0U;
    __Vtable1_per_master_we_o[42] = 0U;
    __Vtable1_per_master_we_o[43] = 0U;
    __Vtable1_per_master_we_o[44] = 0U;
    __Vtable1_per_master_we_o[45] = 0U;
    __Vtable1_per_master_we_o[46] = 0U;
    __Vtable1_per_master_we_o[47] = 0U;
    __Vtable1_per_master_we_o[48] = 0U;
    __Vtable1_per_master_we_o[49] = 0U;
    __Vtable1_per_master_we_o[50] = 0U;
    __Vtable1_per_master_we_o[51] = 0U;
    __Vtable1_per_master_we_o[52] = 0U;
    __Vtable1_per_master_we_o[53] = 0U;
    __Vtable1_per_master_we_o[54] = 0U;
    __Vtable1_per_master_we_o[55] = 0U;
    __Vtable1_per_master_we_o[56] = 0U;
    __Vtable1_per_master_we_o[57] = 0U;
    __Vtable1_per_master_we_o[58] = 0U;
    __Vtable1_per_master_we_o[59] = 0U;
    __Vtable1_per_master_we_o[60] = 1U;
    __Vtable1_per_master_we_o[61] = 0U;
    __Vtable1_per_master_we_o[62] = 1U;
    __Vtable1_per_master_we_o[63] = 0U;
    __Vtable1_per_master_req_o[0] = 0U;
    __Vtable1_per_master_req_o[1] = 0U;
    __Vtable1_per_master_req_o[2] = 0U;
    __Vtable1_per_master_req_o[3] = 0U;
    __Vtable1_per_master_req_o[4] = 0U;
    __Vtable1_per_master_req_o[5] = 0U;
    __Vtable1_per_master_req_o[6] = 0U;
    __Vtable1_per_master_req_o[7] = 0U;
    __Vtable1_per_master_req_o[8] = 0U;
    __Vtable1_per_master_req_o[9] = 0U;
    __Vtable1_per_master_req_o[10] = 0U;
    __Vtable1_per_master_req_o[11] = 0U;
    __Vtable1_per_master_req_o[12] = 1U;
    __Vtable1_per_master_req_o[13] = 0U;
    __Vtable1_per_master_req_o[14] = 1U;
    __Vtable1_per_master_req_o[15] = 0U;
    __Vtable1_per_master_req_o[16] = 0U;
    __Vtable1_per_master_req_o[17] = 0U;
    __Vtable1_per_master_req_o[18] = 0U;
    __Vtable1_per_master_req_o[19] = 0U;
    __Vtable1_per_master_req_o[20] = 0U;
    __Vtable1_per_master_req_o[21] = 0U;
    __Vtable1_per_master_req_o[22] = 0U;
    __Vtable1_per_master_req_o[23] = 0U;
    __Vtable1_per_master_req_o[24] = 0U;
    __Vtable1_per_master_req_o[25] = 0U;
    __Vtable1_per_master_req_o[26] = 0U;
    __Vtable1_per_master_req_o[27] = 0U;
    __Vtable1_per_master_req_o[28] = 1U;
    __Vtable1_per_master_req_o[29] = 0U;
    __Vtable1_per_master_req_o[30] = 1U;
    __Vtable1_per_master_req_o[31] = 0U;
    __Vtable1_per_master_req_o[32] = 0U;
    __Vtable1_per_master_req_o[33] = 0U;
    __Vtable1_per_master_req_o[34] = 0U;
    __Vtable1_per_master_req_o[35] = 0U;
    __Vtable1_per_master_req_o[36] = 0U;
    __Vtable1_per_master_req_o[37] = 0U;
    __Vtable1_per_master_req_o[38] = 0U;
    __Vtable1_per_master_req_o[39] = 0U;
    __Vtable1_per_master_req_o[40] = 0U;
    __Vtable1_per_master_req_o[41] = 0U;
    __Vtable1_per_master_req_o[42] = 0U;
    __Vtable1_per_master_req_o[43] = 0U;
    __Vtable1_per_master_req_o[44] = 1U;
    __Vtable1_per_master_req_o[45] = 0U;
    __Vtable1_per_master_req_o[46] = 1U;
    __Vtable1_per_master_req_o[47] = 0U;
    __Vtable1_per_master_req_o[48] = 0U;
    __Vtable1_per_master_req_o[49] = 0U;
    __Vtable1_per_master_req_o[50] = 0U;
    __Vtable1_per_master_req_o[51] = 0U;
    __Vtable1_per_master_req_o[52] = 0U;
    __Vtable1_per_master_req_o[53] = 0U;
    __Vtable1_per_master_req_o[54] = 0U;
    __Vtable1_per_master_req_o[55] = 0U;
    __Vtable1_per_master_req_o[56] = 0U;
    __Vtable1_per_master_req_o[57] = 0U;
    __Vtable1_per_master_req_o[58] = 0U;
    __Vtable1_per_master_req_o[59] = 0U;
    __Vtable1_per_master_req_o[60] = 1U;
    __Vtable1_per_master_req_o[61] = 0U;
    __Vtable1_per_master_req_o[62] = 1U;
    __Vtable1_per_master_req_o[63] = 0U;
    __Vtable1_PREADY[0] = 0U;
    __Vtable1_PREADY[1] = 0U;
    __Vtable1_PREADY[2] = 0U;
    __Vtable1_PREADY[3] = 1U;
    __Vtable1_PREADY[4] = 0U;
    __Vtable1_PREADY[5] = 0U;
    __Vtable1_PREADY[6] = 0U;
    __Vtable1_PREADY[7] = 1U;
    __Vtable1_PREADY[8] = 0U;
    __Vtable1_PREADY[9] = 0U;
    __Vtable1_PREADY[10] = 0U;
    __Vtable1_PREADY[11] = 1U;
    __Vtable1_PREADY[12] = 0U;
    __Vtable1_PREADY[13] = 0U;
    __Vtable1_PREADY[14] = 0U;
    __Vtable1_PREADY[15] = 1U;
    __Vtable1_PREADY[16] = 0U;
    __Vtable1_PREADY[17] = 0U;
    __Vtable1_PREADY[18] = 0U;
    __Vtable1_PREADY[19] = 1U;
    __Vtable1_PREADY[20] = 0U;
    __Vtable1_PREADY[21] = 0U;
    __Vtable1_PREADY[22] = 0U;
    __Vtable1_PREADY[23] = 1U;
    __Vtable1_PREADY[24] = 0U;
    __Vtable1_PREADY[25] = 0U;
    __Vtable1_PREADY[26] = 0U;
    __Vtable1_PREADY[27] = 1U;
    __Vtable1_PREADY[28] = 0U;
    __Vtable1_PREADY[29] = 0U;
    __Vtable1_PREADY[30] = 0U;
    __Vtable1_PREADY[31] = 1U;
    __Vtable1_PREADY[32] = 0U;
    __Vtable1_PREADY[33] = 0U;
    __Vtable1_PREADY[34] = 0U;
    __Vtable1_PREADY[35] = 1U;
    __Vtable1_PREADY[36] = 0U;
    __Vtable1_PREADY[37] = 0U;
    __Vtable1_PREADY[38] = 0U;
    __Vtable1_PREADY[39] = 1U;
    __Vtable1_PREADY[40] = 0U;
    __Vtable1_PREADY[41] = 0U;
    __Vtable1_PREADY[42] = 0U;
    __Vtable1_PREADY[43] = 1U;
    __Vtable1_PREADY[44] = 0U;
    __Vtable1_PREADY[45] = 0U;
    __Vtable1_PREADY[46] = 0U;
    __Vtable1_PREADY[47] = 1U;
    __Vtable1_PREADY[48] = 0U;
    __Vtable1_PREADY[49] = 0U;
    __Vtable1_PREADY[50] = 0U;
    __Vtable1_PREADY[51] = 1U;
    __Vtable1_PREADY[52] = 0U;
    __Vtable1_PREADY[53] = 0U;
    __Vtable1_PREADY[54] = 0U;
    __Vtable1_PREADY[55] = 1U;
    __Vtable1_PREADY[56] = 0U;
    __Vtable1_PREADY[57] = 0U;
    __Vtable1_PREADY[58] = 0U;
    __Vtable1_PREADY[59] = 1U;
    __Vtable1_PREADY[60] = 1U;
    __Vtable1_PREADY[61] = 0U;
    __Vtable1_PREADY[62] = 1U;
    __Vtable1_PREADY[63] = 1U;
    __Vtable1_apb2per__DOT__NS[0] = 0U;
    __Vtable1_apb2per__DOT__NS[1] = 1U;
    __Vtable1_apb2per__DOT__NS[2] = 0U;
    __Vtable1_apb2per__DOT__NS[3] = 0U;
    __Vtable1_apb2per__DOT__NS[4] = 0U;
    __Vtable1_apb2per__DOT__NS[5] = 1U;
    __Vtable1_apb2per__DOT__NS[6] = 0U;
    __Vtable1_apb2per__DOT__NS[7] = 0U;
    __Vtable1_apb2per__DOT__NS[8] = 0U;
    __Vtable1_apb2per__DOT__NS[9] = 1U;
    __Vtable1_apb2per__DOT__NS[10] = 0U;
    __Vtable1_apb2per__DOT__NS[11] = 0U;
    __Vtable1_apb2per__DOT__NS[12] = 0U;
    __Vtable1_apb2per__DOT__NS[13] = 1U;
    __Vtable1_apb2per__DOT__NS[14] = 0U;
    __Vtable1_apb2per__DOT__NS[15] = 0U;
    __Vtable1_apb2per__DOT__NS[16] = 0U;
    __Vtable1_apb2per__DOT__NS[17] = 1U;
    __Vtable1_apb2per__DOT__NS[18] = 0U;
    __Vtable1_apb2per__DOT__NS[19] = 0U;
    __Vtable1_apb2per__DOT__NS[20] = 0U;
    __Vtable1_apb2per__DOT__NS[21] = 1U;
    __Vtable1_apb2per__DOT__NS[22] = 0U;
    __Vtable1_apb2per__DOT__NS[23] = 0U;
    __Vtable1_apb2per__DOT__NS[24] = 0U;
    __Vtable1_apb2per__DOT__NS[25] = 1U;
    __Vtable1_apb2per__DOT__NS[26] = 0U;
    __Vtable1_apb2per__DOT__NS[27] = 0U;
    __Vtable1_apb2per__DOT__NS[28] = 0U;
    __Vtable1_apb2per__DOT__NS[29] = 1U;
    __Vtable1_apb2per__DOT__NS[30] = 0U;
    __Vtable1_apb2per__DOT__NS[31] = 0U;
    __Vtable1_apb2per__DOT__NS[32] = 0U;
    __Vtable1_apb2per__DOT__NS[33] = 1U;
    __Vtable1_apb2per__DOT__NS[34] = 0U;
    __Vtable1_apb2per__DOT__NS[35] = 0U;
    __Vtable1_apb2per__DOT__NS[36] = 0U;
    __Vtable1_apb2per__DOT__NS[37] = 1U;
    __Vtable1_apb2per__DOT__NS[38] = 0U;
    __Vtable1_apb2per__DOT__NS[39] = 0U;
    __Vtable1_apb2per__DOT__NS[40] = 0U;
    __Vtable1_apb2per__DOT__NS[41] = 1U;
    __Vtable1_apb2per__DOT__NS[42] = 0U;
    __Vtable1_apb2per__DOT__NS[43] = 0U;
    __Vtable1_apb2per__DOT__NS[44] = 1U;
    __Vtable1_apb2per__DOT__NS[45] = 1U;
    __Vtable1_apb2per__DOT__NS[46] = 1U;
    __Vtable1_apb2per__DOT__NS[47] = 0U;
    __Vtable1_apb2per__DOT__NS[48] = 0U;
    __Vtable1_apb2per__DOT__NS[49] = 1U;
    __Vtable1_apb2per__DOT__NS[50] = 0U;
    __Vtable1_apb2per__DOT__NS[51] = 0U;
    __Vtable1_apb2per__DOT__NS[52] = 0U;
    __Vtable1_apb2per__DOT__NS[53] = 1U;
    __Vtable1_apb2per__DOT__NS[54] = 0U;
    __Vtable1_apb2per__DOT__NS[55] = 0U;
    __Vtable1_apb2per__DOT__NS[56] = 0U;
    __Vtable1_apb2per__DOT__NS[57] = 1U;
    __Vtable1_apb2per__DOT__NS[58] = 0U;
    __Vtable1_apb2per__DOT__NS[59] = 0U;
    __Vtable1_apb2per__DOT__NS[60] = 0U;
    __Vtable1_apb2per__DOT__NS[61] = 1U;
    __Vtable1_apb2per__DOT__NS[62] = 0U;
    __Vtable1_apb2per__DOT__NS[63] = 0U;
}
