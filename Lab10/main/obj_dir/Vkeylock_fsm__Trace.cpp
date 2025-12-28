// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeylock_fsm__Syms.h"


void Vkeylock_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vkeylock_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->digit),4);
        tracep->chgBit(oldp+3,(vlTOPp->locked));
        tracep->chgCData(oldp+4,(vlTOPp->keylock_fsm__DOT__current_state),4);
        tracep->chgCData(oldp+5,(vlTOPp->keylock_fsm__DOT__next_state),4);
    }
}

void Vkeylock_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
