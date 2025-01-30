// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VADV_DBG_IF__SYMS_H_
#define _VADV_DBG_IF__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vadv_dbg_if.h"

// SYMS CLASS
class Vadv_dbg_if__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vadv_dbg_if*                   TOPp;
    
    // CREATORS
    Vadv_dbg_if__Syms(Vadv_dbg_if* topp, const char* namep);
    ~Vadv_dbg_if__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
