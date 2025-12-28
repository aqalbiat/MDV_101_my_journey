// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VALU__SYMS_H_
#define _VALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Valu.h"
#include "Valu_add16.h"

// SYMS CLASS
class Valu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Valu*                          TOPp;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c10;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c11;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c12__DOT__m1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c12__DOT__m2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c13;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c14;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c15;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c16__DOT__m1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c16__DOT__m2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c3;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c4;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c5;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c6;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c7p1__DOT__m1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c7p1__DOT__m2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c7p2__DOT__m1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c7p2__DOT__m2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c8__DOT__m1;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c8__DOT__m2;
    Valu_add16                     TOP__alu__DOT__option0__DOT__c9;
    
    // CREATORS
    Valu__Syms(Valu* topp, const char* namep);
    ~Valu__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
