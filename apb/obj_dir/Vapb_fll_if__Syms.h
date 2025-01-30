// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB_FLL_IF__SYMS_H_
#define _VAPB_FLL_IF__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vapb_fll_if.h"

// SYMS CLASS
class Vapb_fll_if__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vapb_fll_if*                   TOPp;
    
    // CREATORS
    Vapb_fll_if__Syms(Vapb_fll_if* topp, const char* namep);
    ~Vapb_fll_if__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
