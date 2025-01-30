// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPI_MASTER_CONTROLLER__SYMS_H_
#define _VSPI_MASTER_CONTROLLER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vspi_master_controller.h"

// SYMS CLASS
class Vspi_master_controller__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vspi_master_controller*        TOPp;
    
    // CREATORS
    Vspi_master_controller__Syms(Vspi_master_controller* topp, const char* namep);
    ~Vspi_master_controller__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
