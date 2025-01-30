// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPI_SLAVE_CONTROLLER__SYMS_H_
#define _VSPI_SLAVE_CONTROLLER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vspi_slave_controller.h"

// SYMS CLASS
class Vspi_slave_controller__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vspi_slave_controller*         TOPp;
    
    // CREATORS
    Vspi_slave_controller__Syms(Vspi_slave_controller* topp, const char* namep);
    ~Vspi_slave_controller__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
