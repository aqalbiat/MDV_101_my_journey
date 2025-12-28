// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtraffic_light_fsm__Syms.h"


//======================

void Vtraffic_light_fsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtraffic_light_fsm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtraffic_light_fsm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtraffic_light_fsm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtraffic_light_fsm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clk", false,-1);
        tracep->declBit(c+5,"reset", false,-1);
        tracep->declBus(c+6,"counter", false,-1, 31,0);
        tracep->declBus(c+7,"light", false,-1, 2,0);
        tracep->declBit(c+4,"traffic_light_fsm clk", false,-1);
        tracep->declBit(c+5,"traffic_light_fsm reset", false,-1);
        tracep->declBus(c+6,"traffic_light_fsm counter", false,-1, 31,0);
        tracep->declBus(c+7,"traffic_light_fsm light", false,-1, 2,0);
        tracep->declBus(c+8,"traffic_light_fsm RED", false,-1, 1,0);
        tracep->declBus(c+9,"traffic_light_fsm GREEN", false,-1, 1,0);
        tracep->declBus(c+10,"traffic_light_fsm YELLOW", false,-1, 1,0);
        tracep->declBus(c+1,"traffic_light_fsm current_state", false,-1, 1,0);
        tracep->declBus(c+2,"traffic_light_fsm next_state", false,-1, 1,0);
        tracep->declBus(c+3,"traffic_light_fsm cnt_timer", false,-1, 31,0);
    }
}

void Vtraffic_light_fsm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtraffic_light_fsm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtraffic_light_fsm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->traffic_light_fsm__DOT__current_state),2);
        tracep->fullCData(oldp+2,(((0U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                    ? 1U : ((1U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                             ? 2U : 0U))),2);
        tracep->fullIData(oldp+3,(vlTOPp->traffic_light_fsm__DOT__cnt_timer),32);
        tracep->fullBit(oldp+4,(vlTOPp->clk));
        tracep->fullBit(oldp+5,(vlTOPp->reset));
        tracep->fullIData(oldp+6,(vlTOPp->counter),32);
        tracep->fullCData(oldp+7,(vlTOPp->light),3);
        tracep->fullCData(oldp+8,(0U),2);
        tracep->fullCData(oldp+9,(1U),2);
        tracep->fullCData(oldp+10,(2U),2);
    }
}
