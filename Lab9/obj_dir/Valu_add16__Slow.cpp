// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu_add16.h"
#include "Valu__Syms.h"

//==========

VL_CTOR_IMP(Valu_add16) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Valu_add16::__Vconfigure(Valu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Valu_add16::~Valu_add16() {
}

void Valu_add16::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_add16::_ctor_var_reset\n"); );
    // Body
    a_in = VL_RAND_RESET_I(16);
    b_in = VL_RAND_RESET_I(16);
    c_in = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(16);
    c_out = VL_RAND_RESET_I(1);
    __PVT__carry__BRA__0__KET__ = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5 = VL_RAND_RESET_I(1);
    __PVT__first_add__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
    __PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1 = VL_RAND_RESET_I(1);
}
