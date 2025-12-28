// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu.h"
#include "Valu__Syms.h"

//==========

void Valu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu::eval\n"); );
    Valu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("alu.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Valu::_eval_initial_loop(Valu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("alu.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Valu::_combo__TOP__1(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__1\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->compare = ((IData)(vlTOPp->in_a) == (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfff7U 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | ((IData)(vlTOPp->carry_in) 
                                                << 3U));
    vlTOPp->alu__DOT__out1 = (0xffffU & ((8U & (IData)(vlTOPp->select))
                                          ? ((4U & (IData)(vlTOPp->select))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? (IData)(vlTOPp->in_a)
                                                   : 
                                                  ((IData)(vlTOPp->in_a) 
                                                   | (IData)(vlTOPp->in_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  ((IData)(vlTOPp->in_a) 
                                                   | (~ (IData)(vlTOPp->in_b)))
                                                   : 0xffffU))
                                              : ((2U 
                                                  & (IData)(vlTOPp->select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  ((IData)(vlTOPp->in_a) 
                                                   & (IData)(vlTOPp->in_b))
                                                   : (IData)(vlTOPp->in_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    ^ (IData)(vlTOPp->in_b)))
                                                   : 
                                                  ((~ (IData)(vlTOPp->in_a)) 
                                                   | (IData)(vlTOPp->in_b)))))
                                          : ((4U & (IData)(vlTOPp->select))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  ((IData)(vlTOPp->in_a) 
                                                   & (~ (IData)(vlTOPp->in_b)))
                                                   : 
                                                  ((IData)(vlTOPp->in_a) 
                                                   ^ (IData)(vlTOPp->in_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  (~ (IData)(vlTOPp->in_b))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    & (IData)(vlTOPp->in_b)))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->select))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 0U
                                                   : 
                                                  ((~ (IData)(vlTOPp->in_a)) 
                                                   & (IData)(vlTOPp->in_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlTOPp->in_a) 
                                                    | (IData)(vlTOPp->in_b)))
                                                   : 
                                                  (~ (IData)(vlTOPp->in_a)))))));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1 
        = ((IData)(vlTOPp->in_a) | (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1 
        = (0xffffU & ((IData)(vlTOPp->in_a) | (~ (IData)(vlTOPp->in_b))));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1 
        = ((IData)(vlTOPp->in_a) | ((IData)(vlTOPp->in_a) 
                                    & (~ (IData)(vlTOPp->in_b))));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2 
        = ((IData)(vlTOPp->in_a) & (~ (IData)(vlTOPp->in_b)));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1 
        = ((IData)(vlTOPp->in_a) | (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2 
        = ((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2 
        = ((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1 
        = (0xffffU & ((IData)(vlTOPp->in_a) | (~ (IData)(vlTOPp->in_b))));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1 
        = ((IData)(vlTOPp->in_a) | (IData)(vlTOPp->in_b));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1 
        = (0xffffU & ((IData)(vlTOPp->in_a) | (~ (IData)(vlTOPp->in_b))));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1 
        = ((IData)(vlTOPp->in_a) & (~ (IData)(vlTOPp->in_b)));
    vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1 
        = ((IData)(vlTOPp->in_a) & (IData)(vlTOPp->in_b));
}

VL_INLINE_OPT void Valu::_combo__TOP__2(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__2\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfffeU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (((IData)(vlTOPp->in_a) 
                                                 >> 0xfU) 
                                                & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xefffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x1000U 
                                                & ((0x1ffff000U 
                                                    & ((IData)(vlTOPp->in_a) 
                                                       >> 3U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xcU))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfdffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x200U 
                                                & ((0x3fffe00U 
                                                    & (((IData)(vlTOPp->in_a) 
                                                        & (IData)(vlTOPp->in_b)) 
                                                       >> 6U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 9U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfffdU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x3fffeU 
                                                & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                      << 1U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfffbU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x7fffcU 
                                                & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                      << 2U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xffefU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x1ffff0U 
                                                & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                      << 4U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xffdfU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x20U 
                                                & ((0x3fffe0U 
                                                    & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                                        & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                                       >> 0xaU)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 5U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfeffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x100U 
                                                & ((0x1ffff00U 
                                                    & (((IData)(vlTOPp->in_a) 
                                                        & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                                       >> 7U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 8U))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xfbffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x400U 
                                                & ((0x7fffc00U 
                                                    & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                                        & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                                       >> 5U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xaU))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xdfffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x2000U 
                                                & ((0x3fffe000U 
                                                    & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                                        & (IData)(vlTOPp->in_a)) 
                                                       >> 2U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xdU))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xbfffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x4000U 
                                                & ((0x7fffc000U 
                                                    & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                                        & (IData)(vlTOPp->in_a)) 
                                                       >> 1U)) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                      << 0xeU))));
}

VL_INLINE_OPT void Valu::_combo__TOP__3(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__3\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->alu__DOT__option0__DOT__carry = ((0x7fffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x8000U 
                                                & (((0xffff8000U 
                                                     & (IData)(vlTOPp->in_a)) 
                                                    | (((~ 
                                                         ((IData)(vlTOPp->in_a) 
                                                          >> 0xfU)) 
                                                        & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                       << 0xfU)) 
                                                   ^ 
                                                   (0xffff8000U 
                                                    & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                          << 0xfU))))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xff7fU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x80U 
                                                & (((0xffff80U 
                                                     & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                        >> 8U)) 
                                                    | (((~ 
                                                         ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                          >> 0xfU)) 
                                                        & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                       << 7U)) 
                                                   ^ 
                                                   (0xffff80U 
                                                    & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                                        >> 8U) 
                                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                          << 7U))))));
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xf7ffU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x800U 
                                                & (((0xffff800U 
                                                     & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                        >> 4U)) 
                                                    | (((~ 
                                                         ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                          >> 0xfU)) 
                                                        & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                       << 0xbU)) 
                                                   ^ 
                                                   (0xffff800U 
                                                    & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                                        >> 4U) 
                                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                          << 0xbU))))));
}

VL_INLINE_OPT void Valu::_combo__TOP__4(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__4\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->alu__DOT__option0__DOT__carry = ((0xffbfU 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT__carry)) 
                                             | (0x40U 
                                                & ((((0x7fffc0U 
                                                      & (((IData)(vlTOPp->in_a) 
                                                          >> 9U) 
                                                         & ((~ 
                                                             ((IData)(vlTOPp->in_b) 
                                                              >> 0xfU)) 
                                                            << 6U))) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                         & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                        << 6U)) 
                                                    ^ 
                                                    (0x7fffc0U 
                                                     & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                                         >> 9U) 
                                                        & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                           << 6U)))) 
                                                   ^ 
                                                   ((0x7fffc0U 
                                                     & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                        >> 9U)) 
                                                    | (((~ 
                                                         ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                          >> 0xfU)) 
                                                        & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                       << 6U)))));
    vlTOPp->carry_out = (1U & ((8U & (IData)(vlTOPp->select))
                                ? ((4U & (IData)(vlTOPp->select))
                                    ? ((2U & (IData)(vlTOPp->select))
                                        ? ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xfU)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xeU))
                                        : ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xdU)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xcU)))
                                    : ((2U & (IData)(vlTOPp->select))
                                        ? ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xbU)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 0xaU))
                                        : ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 9U)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 8U))))
                                : ((4U & (IData)(vlTOPp->select))
                                    ? ((2U & (IData)(vlTOPp->select))
                                        ? ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 7U)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 6U))
                                        : ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 5U)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 4U)))
                                    : ((2U & (IData)(vlTOPp->select))
                                        ? ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 3U)
                                            : ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 2U))
                                        : ((1U & (IData)(vlTOPp->select))
                                            ? ((IData)(vlTOPp->alu__DOT__option0__DOT__carry) 
                                               >> 1U)
                                            : (IData)(vlTOPp->alu__DOT__option0__DOT__carry))))));
}

VL_INLINE_OPT void Valu::_combo__TOP__5(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__5\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mode) {
        if (vlTOPp->mode) {
            vlTOPp->alu_out = vlTOPp->alu__DOT__out1;
        }
    } else {
        vlTOPp->alu_out = ((8U & (IData)(vlTOPp->select))
                            ? ((4U & (IData)(vlTOPp->select))
                                ? ((2U & (IData)(vlTOPp->select))
                                    ? ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.sum))
                                    : ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.sum)))
                                : ((2U & (IData)(vlTOPp->select))
                                    ? ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.sum))
                                    : ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.sum))))
                            : ((4U & (IData)(vlTOPp->select))
                                ? ((2U & (IData)(vlTOPp->select))
                                    ? ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m2.sum))
                                    : ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.sum)))
                                : ((2U & (IData)(vlTOPp->select))
                                    ? ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c4.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.sum))
                                    : ((1U & (IData)(vlTOPp->select))
                                        ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.sum)
                                        : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.sum)))));
    }
}

void Valu::_eval(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
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

VL_INLINE_OPT QData Valu::_change_request(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_change_request\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Valu::_change_request_1(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_change_request_1\n"); );
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((select & 0xf0U))) {
        Verilated::overWidthError("select");}
    if (VL_UNLIKELY((mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
