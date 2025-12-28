// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light_fsm.h for the primary calling header

#include "Vtraffic_light_fsm.h"
#include "Vtraffic_light_fsm__Syms.h"

//==========

VL_CTOR_IMP(Vtraffic_light_fsm) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vtraffic_light_fsm__Syms(this, name());
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtraffic_light_fsm::__Vconfigure(Vtraffic_light_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtraffic_light_fsm::~Vtraffic_light_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtraffic_light_fsm::_settle__TOP__2(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_settle__TOP__2\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))) {
        vlTOPp->traffic_light_fsm__DOT__next_state = 1U;
        vlTOPp->light = 1U;
    } else {
        vlTOPp->traffic_light_fsm__DOT__next_state 
            = ((1U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                ? 2U : 0U);
        vlTOPp->light = ((1U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                          ? 2U : ((2U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                   ? 4U : 1U));
    }
}

void Vtraffic_light_fsm::_eval_initial(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_eval_initial\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtraffic_light_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::final\n"); );
    // Variables
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtraffic_light_fsm::_eval_settle(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_eval_settle\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtraffic_light_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    counter = VL_RAND_RESET_I(32);
    light = VL_RAND_RESET_I(3);
    traffic_light_fsm__DOT__current_state = VL_RAND_RESET_I(2);
    traffic_light_fsm__DOT__next_state = VL_RAND_RESET_I(2);
    traffic_light_fsm__DOT__cnt_timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
