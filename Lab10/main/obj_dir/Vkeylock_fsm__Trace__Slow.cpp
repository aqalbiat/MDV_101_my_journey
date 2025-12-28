// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeylock_fsm__Syms.h"


//======================

void Vkeylock_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vkeylock_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vkeylock_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vkeylock_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vkeylock_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"digit", false,-1, 3,0);
        tracep->declBit(c+4,"locked", false,-1);
        tracep->declBit(c+1,"keylock_fsm clk", false,-1);
        tracep->declBit(c+2,"keylock_fsm reset", false,-1);
        tracep->declBus(c+3,"keylock_fsm digit", false,-1, 3,0);
        tracep->declBit(c+4,"keylock_fsm locked", false,-1);
        tracep->declBus(c+7,"keylock_fsm enterX", false,-1, 3,0);
        tracep->declBus(c+8,"keylock_fsm digit1", false,-1, 3,0);
        tracep->declBus(c+8,"keylock_fsm digit2", false,-1, 3,0);
        tracep->declBus(c+9,"keylock_fsm digit3", false,-1, 3,0);
        tracep->declBus(c+10,"keylock_fsm digit4", false,-1, 3,0);
        tracep->declBus(c+9,"keylock_fsm digit5", false,-1, 3,0);
        tracep->declBus(c+11,"keylock_fsm digit6", false,-1, 3,0);
        tracep->declBus(c+5,"keylock_fsm current_state", false,-1, 3,0);
        tracep->declBus(c+6,"keylock_fsm next_state", false,-1, 3,0);
    }
}

void Vkeylock_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vkeylock_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vkeylock_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vkeylock_fsm__Syms* __restrict vlSymsp = static_cast<Vkeylock_fsm__Syms*>(userp);
    Vkeylock_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullCData(oldp+3,(vlTOPp->digit),4);
        tracep->fullBit(oldp+4,(vlTOPp->locked));
        tracep->fullCData(oldp+5,(vlTOPp->keylock_fsm__DOT__current_state),4);
        tracep->fullCData(oldp+6,(vlTOPp->keylock_fsm__DOT__next_state),4);
        tracep->fullCData(oldp+7,(0U),4);
        tracep->fullCData(oldp+8,(3U),4);
        tracep->fullCData(oldp+9,(5U),4);
        tracep->fullCData(oldp+10,(2U),4);
        tracep->fullCData(oldp+11,(6U),4);
    }
}
