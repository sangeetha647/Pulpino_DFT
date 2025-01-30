// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB_GPIO__SYMS_H_
#define _VAPB_GPIO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vapb_gpio.h"

// SYMS CLASS
class Vapb_gpio__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vapb_gpio*                     TOPp;
    
    // CREATORS
    Vapb_gpio__Syms(Vapb_gpio* topp, const char* namep);
    ~Vapb_gpio__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
