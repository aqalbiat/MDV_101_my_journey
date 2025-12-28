// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu__Syms.h"
#include "Valu.h"
#include "Valu_add16.h"



// FUNCTIONS
Valu__Syms::Valu__Syms(Valu* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__alu__DOT__option0__DOT__c1(Verilated::catName(topp->name(), "alu.option0.c1"))
    , TOP__alu__DOT__option0__DOT__c10(Verilated::catName(topp->name(), "alu.option0.c10"))
    , TOP__alu__DOT__option0__DOT__c11(Verilated::catName(topp->name(), "alu.option0.c11"))
    , TOP__alu__DOT__option0__DOT__c12__DOT__m1(Verilated::catName(topp->name(), "alu.option0.c12.m1"))
    , TOP__alu__DOT__option0__DOT__c12__DOT__m2(Verilated::catName(topp->name(), "alu.option0.c12.m2"))
    , TOP__alu__DOT__option0__DOT__c13(Verilated::catName(topp->name(), "alu.option0.c13"))
    , TOP__alu__DOT__option0__DOT__c14(Verilated::catName(topp->name(), "alu.option0.c14"))
    , TOP__alu__DOT__option0__DOT__c15(Verilated::catName(topp->name(), "alu.option0.c15"))
    , TOP__alu__DOT__option0__DOT__c16__DOT__m1(Verilated::catName(topp->name(), "alu.option0.c16.m1"))
    , TOP__alu__DOT__option0__DOT__c16__DOT__m2(Verilated::catName(topp->name(), "alu.option0.c16.m2"))
    , TOP__alu__DOT__option0__DOT__c2(Verilated::catName(topp->name(), "alu.option0.c2"))
    , TOP__alu__DOT__option0__DOT__c3(Verilated::catName(topp->name(), "alu.option0.c3"))
    , TOP__alu__DOT__option0__DOT__c4(Verilated::catName(topp->name(), "alu.option0.c4"))
    , TOP__alu__DOT__option0__DOT__c5(Verilated::catName(topp->name(), "alu.option0.c5"))
    , TOP__alu__DOT__option0__DOT__c6(Verilated::catName(topp->name(), "alu.option0.c6"))
    , TOP__alu__DOT__option0__DOT__c7p1__DOT__m1(Verilated::catName(topp->name(), "alu.option0.c7p1.m1"))
    , TOP__alu__DOT__option0__DOT__c7p1__DOT__m2(Verilated::catName(topp->name(), "alu.option0.c7p1.m2"))
    , TOP__alu__DOT__option0__DOT__c7p2__DOT__m1(Verilated::catName(topp->name(), "alu.option0.c7p2.m1"))
    , TOP__alu__DOT__option0__DOT__c7p2__DOT__m2(Verilated::catName(topp->name(), "alu.option0.c7p2.m2"))
    , TOP__alu__DOT__option0__DOT__c8__DOT__m1(Verilated::catName(topp->name(), "alu.option0.c8.m1"))
    , TOP__alu__DOT__option0__DOT__c8__DOT__m2(Verilated::catName(topp->name(), "alu.option0.c8.m2"))
    , TOP__alu__DOT__option0__DOT__c9(Verilated::catName(topp->name(), "alu.option0.c9"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__alu__DOT__option0__DOT__c1 = &TOP__alu__DOT__option0__DOT__c1;
    TOPp->__PVT__alu__DOT__option0__DOT__c10 = &TOP__alu__DOT__option0__DOT__c10;
    TOPp->__PVT__alu__DOT__option0__DOT__c11 = &TOP__alu__DOT__option0__DOT__c11;
    TOPp->__PVT__alu__DOT__option0__DOT__c12__DOT__m1 = &TOP__alu__DOT__option0__DOT__c12__DOT__m1;
    TOPp->__PVT__alu__DOT__option0__DOT__c12__DOT__m2 = &TOP__alu__DOT__option0__DOT__c12__DOT__m2;
    TOPp->__PVT__alu__DOT__option0__DOT__c13 = &TOP__alu__DOT__option0__DOT__c13;
    TOPp->__PVT__alu__DOT__option0__DOT__c14 = &TOP__alu__DOT__option0__DOT__c14;
    TOPp->__PVT__alu__DOT__option0__DOT__c15 = &TOP__alu__DOT__option0__DOT__c15;
    TOPp->__PVT__alu__DOT__option0__DOT__c16__DOT__m1 = &TOP__alu__DOT__option0__DOT__c16__DOT__m1;
    TOPp->__PVT__alu__DOT__option0__DOT__c16__DOT__m2 = &TOP__alu__DOT__option0__DOT__c16__DOT__m2;
    TOPp->__PVT__alu__DOT__option0__DOT__c2 = &TOP__alu__DOT__option0__DOT__c2;
    TOPp->__PVT__alu__DOT__option0__DOT__c3 = &TOP__alu__DOT__option0__DOT__c3;
    TOPp->__PVT__alu__DOT__option0__DOT__c4 = &TOP__alu__DOT__option0__DOT__c4;
    TOPp->__PVT__alu__DOT__option0__DOT__c5 = &TOP__alu__DOT__option0__DOT__c5;
    TOPp->__PVT__alu__DOT__option0__DOT__c6 = &TOP__alu__DOT__option0__DOT__c6;
    TOPp->__PVT__alu__DOT__option0__DOT__c7p1__DOT__m1 = &TOP__alu__DOT__option0__DOT__c7p1__DOT__m1;
    TOPp->__PVT__alu__DOT__option0__DOT__c7p1__DOT__m2 = &TOP__alu__DOT__option0__DOT__c7p1__DOT__m2;
    TOPp->__PVT__alu__DOT__option0__DOT__c7p2__DOT__m1 = &TOP__alu__DOT__option0__DOT__c7p2__DOT__m1;
    TOPp->__PVT__alu__DOT__option0__DOT__c7p2__DOT__m2 = &TOP__alu__DOT__option0__DOT__c7p2__DOT__m2;
    TOPp->__PVT__alu__DOT__option0__DOT__c8__DOT__m1 = &TOP__alu__DOT__option0__DOT__c8__DOT__m1;
    TOPp->__PVT__alu__DOT__option0__DOT__c8__DOT__m2 = &TOP__alu__DOT__option0__DOT__c8__DOT__m2;
    TOPp->__PVT__alu__DOT__option0__DOT__c9 = &TOP__alu__DOT__option0__DOT__c9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__alu__DOT__option0__DOT__c1.__Vconfigure(this, true);
    TOP__alu__DOT__option0__DOT__c10.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c11.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c13.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c14.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c15.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c3.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c4.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c5.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c6.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c7p2__DOT__m2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vconfigure(this, false);
    TOP__alu__DOT__option0__DOT__c9.__Vconfigure(this, false);
}
