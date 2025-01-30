// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB_UART_SV__SYMS_H_
#define _VAPB_UART_SV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vapb_uart_sv.h"

// SYMS CLASS
class Vapb_uart_sv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vapb_uart_sv*                  TOPp;
    
    // CREATORS
    Vapb_uart_sv__Syms(Vapb_uart_sv* topp, const char* namep);
    ~Vapb_uart_sv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
