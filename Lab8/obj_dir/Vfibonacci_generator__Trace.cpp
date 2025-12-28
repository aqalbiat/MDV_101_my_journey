// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfibonacci_generator__Syms.h"


void Vfibonacci_generator::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vfibonacci_generator::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgIData(oldp+3,(vlTOPp->fib_out),32);
        tracep->chgIData(oldp+4,(vlTOPp->fibonacci_generator__DOT__fib_prev1),32);
        tracep->chgIData(oldp+5,(vlTOPp->fibonacci_generator__DOT__fib_prev2),32);
    }
}

void Vfibonacci_generator::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
