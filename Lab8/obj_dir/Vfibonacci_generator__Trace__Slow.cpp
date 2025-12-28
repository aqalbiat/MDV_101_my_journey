// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfibonacci_generator__Syms.h"


//======================

void Vfibonacci_generator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vfibonacci_generator::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfibonacci_generator::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vfibonacci_generator::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vfibonacci_generator::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"enable", false,-1);
        tracep->declBus(c+4,"fib_out", false,-1, 31,0);
        tracep->declBit(c+1,"fibonacci_generator clk", false,-1);
        tracep->declBit(c+2,"fibonacci_generator rst", false,-1);
        tracep->declBit(c+3,"fibonacci_generator enable", false,-1);
        tracep->declBus(c+4,"fibonacci_generator fib_out", false,-1, 31,0);
        tracep->declBus(c+5,"fibonacci_generator fib_prev1", false,-1, 31,0);
        tracep->declBus(c+6,"fibonacci_generator fib_prev2", false,-1, 31,0);
    }
}

void Vfibonacci_generator::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vfibonacci_generator::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vfibonacci_generator::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vfibonacci_generator__Syms* __restrict vlSymsp = static_cast<Vfibonacci_generator__Syms*>(userp);
    Vfibonacci_generator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->enable));
        tracep->fullIData(oldp+4,(vlTOPp->fib_out),32);
        tracep->fullIData(oldp+5,(vlTOPp->fibonacci_generator__DOT__fib_prev1),32);
        tracep->fullIData(oldp+6,(vlTOPp->fibonacci_generator__DOT__fib_prev2),32);
    }
}
