// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu_add16.h"
#include "Valu__Syms.h"

//==========

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c1__2(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c1__2\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlTOPp->in_a) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlTOPp->in_a) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->in_a) >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlTOPp->in_a)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c2__7(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c2__7\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c3__8(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c3__8\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c4__1(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c4__1\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 1U)));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 2U)));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 3U)));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 4U)));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 5U)));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 6U)));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 7U)));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 8U)));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 9U)));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xaU)));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xbU)));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xcU)));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xdU)));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xeU)));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((~ (IData)(vlTOPp->carry_in)) 
                                                      << 0xfU)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c5__9(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c5__9\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c6__10(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c6__10\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                 >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                               ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                                & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 1U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 2U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 3U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 4U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 5U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 6U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 7U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 8U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 9U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 0xaU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 0xbU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 0xcU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 0xdU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                  >> 0xeU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c9__11(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c9__11\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                 >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->in_a) 
                                               ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->in_a) 
                                                & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 1U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 2U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 3U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 4U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 5U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 6U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 7U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 8U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 9U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 0xaU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 0xbU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 0xcU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 0xdU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                  >> 0xeU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c10__4(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c10__4\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) ^ (IData)(vlTOPp->in_b)) 
                 >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->in_a) 
                                               ^ (IData)(vlTOPp->in_b)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->in_a) 
                                                & (IData)(vlTOPp->in_b)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 1U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 2U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 3U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 4U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 5U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 6U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 7U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 8U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 9U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 0xaU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 0xbU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 0xcU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 0xdU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b)) 
                  >> 0xeU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c11__12(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c11__12\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                  ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                 >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                               ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                                & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 1U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 2U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 3U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 4U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 5U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 6U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 7U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 8U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 9U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                            & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 0xaU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 0xbU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 0xcU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 0xdU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                  >> 0xeU) | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                              & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c13__3(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c13__3\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 = 0U;
    this->__PVT__first_add__DOT__half_sum1 = 0U;
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & ((IData)(vlTOPp->in_a) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 1U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 2U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 3U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 4U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 5U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 6U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 7U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 8U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 9U) | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xaU) | 
                 ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xbU) | 
                 ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xcU) | 
                 ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xdU) | 
                 ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xeU) | 
                 ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c14__13(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c14__13\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                               ^ (IData)(vlTOPp->in_a)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                                & (IData)(vlTOPp->in_a)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 1U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 2U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 3U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 4U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 5U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 6U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 7U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 8U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 9U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xaU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xbU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xcU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xdU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xeU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c15__14(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c15__14\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xfU));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xeU));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xdU));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xcU));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xbU));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 0xaU));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 9U));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 8U));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 7U));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 6U));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 5U));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 4U));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 3U));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 2U));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                  ^ (IData)(vlTOPp->in_a)) >> 1U));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                               ^ (IData)(vlTOPp->in_a)));
    this->sum = ((0xfffeU & (IData)(this->sum)) | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                   ^ (IData)(vlTOPp->carry_in)));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                                & (IData)(vlTOPp->in_a)) 
                                               | ((IData)(this->__PVT__first_add__DOT__half_sum1) 
                                                  & (IData)(vlTOPp->carry_in))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 1U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 2U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 3U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 4U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 5U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 6U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 7U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 8U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 9U) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xaU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xbU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xcU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xdU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                   & (IData)(vlTOPp->in_a)) >> 0xeU) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m1__6(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m1__6\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xfU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xfU))));
    this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xeU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xeU))));
    this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xdU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xdU))));
    this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xcU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xcU))));
    this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xbU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xbU))));
    this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xaU) ^ 
                 (~ ((IData)(vlTOPp->in_b) >> 0xaU))));
    this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 9U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 9U))));
    this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 8U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 8U))));
    this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 7U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 7U))));
    this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 6U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 6U))));
    this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 5U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 5U))));
    this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 4U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 4U))));
    this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 3U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 3U))));
    this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 2U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 2U))));
    this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 
        = (1U & (((IData)(vlTOPp->in_a) >> 1U) ^ (~ 
                                                  ((IData)(vlTOPp->in_b) 
                                                   >> 1U))));
    this->__PVT__first_add__DOT__half_sum1 = (1U & 
                                              ((IData)(vlTOPp->in_a) 
                                               ^ (~ (IData)(vlTOPp->in_b))));
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(this->__PVT__first_add__DOT__half_sum1))));
    this->__PVT__carry__BRA__0__KET__ = (1U & (((IData)(vlTOPp->in_a) 
                                                & (~ (IData)(vlTOPp->in_b))) 
                                               | (IData)(this->__PVT__first_add__DOT__half_sum1)));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__PVT__carry__BRA__0__KET__)) 
                                                   << 1U));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 1U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 1U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__PVT__carry__BRA__0__KET__))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                   << 2U));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 2U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 2U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                   << 3U));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 3U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 3U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                   << 4U));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 4U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 4U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                   << 5U));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 5U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 5U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                   << 6U));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 6U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 6U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                   << 7U));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 7U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 7U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                   << 8U));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 8U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 8U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                   << 9U));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 9U) & (~ 
                                                   ((IData)(vlTOPp->in_b) 
                                                    >> 9U))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xaU));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 0xaU) & 
                  (~ ((IData)(vlTOPp->in_b) >> 0xaU))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xbU));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 0xbU) & 
                  (~ ((IData)(vlTOPp->in_b) >> 0xbU))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xcU));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 0xcU) & 
                  (~ ((IData)(vlTOPp->in_b) >> 0xcU))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xdU));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 0xdU) & 
                  (~ ((IData)(vlTOPp->in_b) >> 0xdU))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xeU));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & ((((IData)(vlTOPp->in_a) >> 0xeU) & 
                  (~ ((IData)(vlTOPp->in_b) >> 0xeU))) 
                 | ((IData)(this->__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                    & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (
                                                   ((IData)(this->__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                    ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                   << 0xfU));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m2__18(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p1__DOT__m2__18\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m1__21(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m1__21\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 1U)) 
                                                       ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)) 
                                                      << 1U)));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 1U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 1U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 2U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                      << 2U)));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 2U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 2U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 3U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                      << 3U)));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 3U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 3U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 4U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                      << 4U)));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 4U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 4U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 5U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                      << 5U)));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 5U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 5U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 6U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                      << 6U)));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 6U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 6U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 7U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                      << 7U)));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 7U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 7U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 8U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                      << 8U)));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 8U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 8U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 9U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                      << 9U)));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 9U) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                >> 9U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xaU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xaU)));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 0xaU) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                  >> 0xaU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xbU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xbU)));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 0xbU) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                  >> 0xbU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xcU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xcU)));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 0xcU) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                  >> 0xcU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xdU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xdU)));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 0xdU) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                  >> 0xdU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xeU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xeU)));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                  >> 0xeU) | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                  >> 0xeU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & (((~ 
                                                        ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                         >> 0xfU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xfU)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m2__22(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c7p2__DOT__m2__22\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c8__DOT__m1__15(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c8__DOT__m1__15\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 1U)) 
                                                       ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)) 
                                                      << 1U)));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 1U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 1U)) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 2U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                      << 2U)));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 2U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 2U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 3U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                      << 3U)));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 3U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 3U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 4U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                      << 4U)));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 4U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 4U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 5U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                      << 5U)));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 5U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 5U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 6U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                      << 6U)));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 6U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 6U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 7U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                      << 7U)));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 7U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 7U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 8U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                      << 8U)));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 8U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 8U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 9U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                      << 9U)));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 9U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                >> 9U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xaU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xaU)));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 0xaU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                  >> 0xaU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xbU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xbU)));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 0xbU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                  >> 0xbU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xcU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xcU)));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 0xcU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                  >> 0xcU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xdU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xdU)));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 0xdU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                  >> 0xdU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xeU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xeU)));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                  >> 0xeU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                  >> 0xeU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                         >> 0xfU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xfU)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c8__DOT__m2__19(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c8__DOT__m2__19\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c12__DOT__m1__16(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c12__DOT__m1__16\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 1U)) 
                                                       ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)) 
                                                      << 1U)));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 1U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 1U)) & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 2U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                      << 2U)));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 2U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 2U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 3U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                      << 3U)));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 3U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 3U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 4U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                      << 4U)));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 4U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 4U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 5U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                      << 5U)));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 5U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 5U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 6U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                      << 6U)));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 6U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 6U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 7U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                      << 7U)));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 7U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 7U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 8U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                      << 8U)));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 8U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 8U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 9U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                      << 9U)));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 9U) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                >> 9U)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xaU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xaU)));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 0xaU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                  >> 0xaU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xbU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xbU)));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 0xbU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                  >> 0xbU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xcU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xcU)));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 0xcU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                  >> 0xcU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xdU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xdU)));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 0xdU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                  >> 0xdU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xeU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xeU)));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                  >> 0xeU) | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                  >> 0xeU)) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                         >> 0xfU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xfU)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c12__DOT__m2__20(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c12__DOT__m2__20\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c16__DOT__m1__5(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c16__DOT__m1__5\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & (~ (IData)(vlTOPp->in_a))));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 1U)) 
                                                       ^ (IData)(vlTOPp->in_a)) 
                                                      << 1U)));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 1U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->in_a))));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 2U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)) 
                                                      << 2U)));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 2U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 2U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 3U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)) 
                                                      << 3U)));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 3U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 3U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 4U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)) 
                                                      << 4U)));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 4U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 4U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 5U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)) 
                                                      << 5U)));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 5U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 5U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 6U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)) 
                                                      << 6U)));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 6U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 6U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 7U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)) 
                                                      << 7U)));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 7U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 7U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 8U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)) 
                                                      << 8U)));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 8U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 8U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 9U)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)) 
                                                      << 9U)));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 9U) | ((~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    >> 9U)) 
                                                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xaU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xaU)));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xaU) | 
                 ((~ ((IData)(vlTOPp->in_a) >> 0xaU)) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xbU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xbU)));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xbU) | 
                 ((~ ((IData)(vlTOPp->in_a) >> 0xbU)) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xcU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xcU)));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xcU) | 
                 ((~ ((IData)(vlTOPp->in_a) >> 0xcU)) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xdU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xdU)));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xdU) | 
                 ((~ ((IData)(vlTOPp->in_a) >> 0xdU)) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xeU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xeU)));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (1U & (((IData)(vlTOPp->in_a) >> 0xeU) | 
                 ((~ ((IData)(vlTOPp->in_a) >> 0xeU)) 
                  & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & (((~ 
                                                        ((IData)(vlTOPp->in_a) 
                                                         >> 0xfU)) 
                                                       ^ (IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xfU)));
}

VL_INLINE_OPT void Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c16__DOT__m2__17(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_combo__TOP__alu__DOT__option0__DOT__c16__DOT__m2__17\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sum = ((0xfffeU & (IData)(this->sum)) | (1U 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                                      ^ (IData)(vlTOPp->carry_in))));
    this->__PVT__carry__BRA__0__KET__ = ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                         & (IData)(vlTOPp->carry_in));
    this->sum = ((0xfffdU & (IData)(this->sum)) | (2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__PVT__carry__BRA__0__KET__) 
                                                       << 1U))));
    this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 1U) & (IData)(this->__PVT__carry__BRA__0__KET__));
    this->sum = ((0xfffbU & (IData)(this->sum)) | (4U 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                       << 2U))));
    this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 2U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfff7U & (IData)(this->sum)) | (8U 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                       << 3U))));
    this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 3U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffefU & (IData)(this->sum)) | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                       << 4U))));
    this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 4U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffdfU & (IData)(this->sum)) | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                       << 5U))));
    this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 5U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xffbfU & (IData)(this->sum)) | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                       << 6U))));
    this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 6U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xff7fU & (IData)(this->sum)) | (0x80U 
                                                   & ((0xffffff80U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                       << 7U))));
    this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 7U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfeffU & (IData)(this->sum)) | (0x100U 
                                                   & ((0xffffff00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                       << 8U))));
    this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 8U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfdffU & (IData)(this->sum)) | (0x200U 
                                                   & ((0xfffffe00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                       << 9U))));
    this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 9U) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xfbffU & (IData)(this->sum)) | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU))));
    this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 0xaU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xf7ffU & (IData)(this->sum)) | (0x800U 
                                                   & ((0xfffff800U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xbU))));
    this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 0xbU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xefffU & (IData)(this->sum)) | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                       << 0xcU))));
    this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 0xcU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xdfffU & (IData)(this->sum)) | (0x2000U 
                                                   & ((0xffffe000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                       << 0xdU))));
    this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 0xdU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
    this->sum = ((0xbfffU & (IData)(this->sum)) | (0x4000U 
                                                   & ((0xffffc000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                       << 0xeU))));
    this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 
        = (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
            >> 0xeU) & (IData)(this->__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
    this->sum = ((0x7fffU & (IData)(this->sum)) | (0x8000U 
                                                   & ((0xffff8000U 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum)) 
                                                      ^ 
                                                      ((IData)(this->__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                       << 0xfU))));
}
