// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef _VALU_ADD16_H_
#define _VALU_ADD16_H_  // guard

#include "verilated.h"

//==========

class Valu__Syms;
class Valu_VerilatedVcd;


//----------

VL_MODULE(Valu_add16) {
  public:
    
    // PORTS
    VL_IN8(c_in,0,0);
    VL_OUT8(c_out,0,0);
    VL_IN16(a_in,15,0);
    VL_IN16(b_in,15,0);
    VL_OUT16(sum,15,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__carry__BRA__0__KET__;
    CData/*0:0*/ __PVT__first_add__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1;
    CData/*0:0*/ __PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5;
    CData/*0:0*/ __Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5;
    
    // INTERNAL VARIABLES
  private:
    Valu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Valu_add16);  ///< Copying not allowed
  public:
    Valu_add16(const char* name = "TOP");
    ~Valu_add16();
    
    // INTERNAL METHODS
    void __Vconfigure(Valu__Syms* symsp, bool first);
    void _combo__TOP__alu__DOT__option0__DOT__c10__4(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c11__12(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c12__DOT__m1__16(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c12__DOT__m2__20(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c13__3(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c14__13(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c15__14(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c16__DOT__m1__5(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c16__DOT__m2__17(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c1__2(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c2__7(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c3__8(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c4__1(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c5__9(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c6__10(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m1__6(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m2__18(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m1__21(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m2__22(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c8__DOT__m1__15(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c8__DOT__m2__19(Valu__Syms* __restrict vlSymsp);
    void _combo__TOP__alu__DOT__option0__DOT__c9__11(Valu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
