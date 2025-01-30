// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB_EVENT_UNIT__SYMS_H_
#define _VAPB_EVENT_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vapb_event_unit.h"

// SYMS CLASS
class Vapb_event_unit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vapb_event_unit*               TOPp;
    
    // CREATORS
    Vapb_event_unit__Syms(Vapb_event_unit* topp, const char* namep);
    ~Vapb_event_unit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
