// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB_I2C__SYMS_H_
#define _VAPB_I2C__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vapb_i2c.h"

// SYMS CLASS
class Vapb_i2c__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vapb_i2c*                      TOPp;
    
    // CREATORS
    Vapb_i2c__Syms(Vapb_i2c* topp, const char* namep);
    ~Vapb_i2c__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
