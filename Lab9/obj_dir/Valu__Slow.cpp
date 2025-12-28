// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu.h"
#include "Valu__Syms.h"

//==========

VL_CTOR_IMP(Valu) {
    Valu__Syms* __restrict vlSymsp = __VlSymsp = new Valu__Syms(this, name());
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__alu__DOT__option0__DOT__c1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c2, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c3, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c4, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c5, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c6, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c9, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c10, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c11, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c13, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c14, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c15, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c7p1__DOT__m1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c7p1__DOT__m2, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c7p2__DOT__m1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c7p2__DOT__m2, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c8__DOT__m1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c8__DOT__m2, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c12__DOT__m1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c12__DOT__m2, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c16__DOT__m1, Valu_add16);
    VL_CELL(__PVT__alu__DOT__option0__DOT__c16__DOT__m2, Valu_add16);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu::__Vconfigure(Valu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Valu::~Valu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Valu::_eval_initial(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_initial\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::final\n"); );
    // Variables
    Valu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu::_eval_settle(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_settle\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__alu__DOT__option0__DOT__c4._combo__TOP__alu__DOT__option0__DOT__c4__1(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c1._combo__TOP__alu__DOT__option0__DOT__c1__2(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c13._combo__TOP__alu__DOT__option0__DOT__c13__3(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c10._combo__TOP__alu__DOT__option0__DOT__c10__4(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1._combo__TOP__alu__DOT__option0__DOT__c16__DOT__m1__5(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1._combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m1__6(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c2._combo__TOP__alu__DOT__option0__DOT__c2__7(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c3._combo__TOP__alu__DOT__option0__DOT__c3__8(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c5._combo__TOP__alu__DOT__option0__DOT__c5__9(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c6._combo__TOP__alu__DOT__option0__DOT__c6__10(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c9._combo__TOP__alu__DOT__option0__DOT__c9__11(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c11._combo__TOP__alu__DOT__option0__DOT__c11__12(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c14._combo__TOP__alu__DOT__option0__DOT__c14__13(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c15._combo__TOP__alu__DOT__option0__DOT__c15__14(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1._combo__TOP__alu__DOT__option0__DOT__c8__DOT__m1__15(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1._combo__TOP__alu__DOT__option0__DOT__c12__DOT__m1__16(vlSymsp);
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2._combo__TOP__alu__DOT__option0__DOT__c16__DOT__m2__17(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2._combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m2__18(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2._combo__TOP__alu__DOT__option0__DOT__c8__DOT__m2__19(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2._combo__TOP__alu__DOT__option0__DOT__c12__DOT__m2__20(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1._combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m1__21(vlSymsp);
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m2._combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m2__22(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
}

void Valu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_ctor_var_reset\n"); );
    // Body
    carry_in = VL_RAND_RESET_I(1);
    in_a = VL_RAND_RESET_I(16);
    in_b = VL_RAND_RESET_I(16);
    select = VL_RAND_RESET_I(4);
    mode = VL_RAND_RESET_I(1);
    carry_out = VL_RAND_RESET_I(1);
    compare = VL_RAND_RESET_I(1);
    alu_out = VL_RAND_RESET_I(16);
    alu__DOT__out1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT__carry = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1 = VL_RAND_RESET_I(16);
    alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
