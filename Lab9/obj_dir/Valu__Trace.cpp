// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Valu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->alu__DOT__out1),16);
            tracep->chgSData(oldp+1,(vlTOPp->alu__DOT__option0__DOT__carry),16);
            tracep->chgSData(oldp+2,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.sum),16);
            tracep->chgSData(oldp+3,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.sum),16);
            tracep->chgSData(oldp+4,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.sum),16);
            tracep->chgSData(oldp+5,(vlSymsp->TOP__alu__DOT__option0__DOT__c4.sum),16);
            tracep->chgSData(oldp+6,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.sum),16);
            tracep->chgSData(oldp+7,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.sum),16);
            tracep->chgSData(oldp+8,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m2.sum),16);
            tracep->chgSData(oldp+9,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.sum),16);
            tracep->chgSData(oldp+10,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.sum),16);
            tracep->chgSData(oldp+11,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.sum),16);
            tracep->chgSData(oldp+12,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.sum),16);
            tracep->chgSData(oldp+13,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.sum),16);
            tracep->chgSData(oldp+14,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.sum),16);
            tracep->chgSData(oldp+15,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.sum),16);
            tracep->chgSData(oldp+16,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.sum),16);
            tracep->chgSData(oldp+17,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.sum),16);
            tracep->chgSData(oldp+18,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum),16);
            tracep->chgBit(oldp+19,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 0xfU) 
                                           | ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgSData(oldp+20,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum),16);
            tracep->chgBit(oldp+21,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+22,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum),16);
            tracep->chgSData(oldp+23,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1),16);
            tracep->chgBit(oldp+24,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xfU) 
                                            | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                   >> 0xfU)) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                           ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                               >> 0xfU) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgSData(oldp+25,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum),16);
            tracep->chgBit(oldp+26,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                            >> 0xfU) 
                                           | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgBit(oldp+27,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+28,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1),16);
            tracep->chgBit(oldp+29,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xfU) 
                                            | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                   >> 0xfU)) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                           ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                               >> 0xfU) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgSData(oldp+30,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum),16);
            tracep->chgBit(oldp+31,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                            >> 0xfU) 
                                           | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgBit(oldp+32,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+33,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum),16);
            tracep->chgBit(oldp+34,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgSData(oldp+50,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1),16);
            tracep->chgBit(oldp+51,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+52,(((0xffff8000U 
                                        & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                              << 0xfU))) 
                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                           << 0xeU) 
                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                              << 0xdU) 
                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                 << 0xcU) 
                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                          << 9U) 
                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                             << 8U) 
                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                << 7U) 
                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+53,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1))));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 1U))));
            tracep->chgBit(oldp+56,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 1U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+58,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+59,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 2U))));
            tracep->chgBit(oldp+60,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 2U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+62,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+63,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 3U))));
            tracep->chgBit(oldp+64,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 3U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+66,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+67,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 4U))));
            tracep->chgBit(oldp+68,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 4U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+70,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+71,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 5U))));
            tracep->chgBit(oldp+72,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 5U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+74,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+75,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 6U))));
            tracep->chgBit(oldp+76,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 6U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+78,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+79,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 7U))));
            tracep->chgBit(oldp+80,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 7U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+82,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+83,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 8U))));
            tracep->chgBit(oldp+84,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 8U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+86,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+87,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 9U))));
            tracep->chgBit(oldp+88,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 9U) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+90,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+92,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 0xaU) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+94,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+96,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 0xbU) 
                                           ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+98,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+99,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                           >> 0xcU))));
            tracep->chgBit(oldp+100,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                             >> 0xcU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+102,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                       >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+103,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+104,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                             >> 0xdU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+106,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                       >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+107,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+108,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                             >> 0xeU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+110,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                       >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+111,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+112,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                             >> 0xfU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgSData(oldp+113,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1),16);
            tracep->chgBit(oldp+114,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+115,(((0xffff8000U 
                                         & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                               << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+116,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1))));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+119,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 1U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+121,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+122,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+123,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 2U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+125,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+126,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+127,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 3U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+129,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+131,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 4U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+132,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+133,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+135,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 5U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+137,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+138,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+139,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 6U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+141,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+143,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 7U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+145,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+146,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+147,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 8U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+149,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+150,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+151,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 9U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+153,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+154,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+155,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xaU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+157,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+158,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+159,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xbU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+161,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+162,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+163,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xcU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+165,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+167,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xdU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+169,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+170,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+171,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xeU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+173,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+174,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+175,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                             >> 0xfU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgSData(oldp+176,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1),16);
            tracep->chgBit(oldp+177,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+178,(((0xffff8000U 
                                         & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                               << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+179,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1))));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+181,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+182,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 1U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+184,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+186,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 2U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+188,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+189,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+190,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 3U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+191,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+192,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+193,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+194,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 4U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+196,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+198,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 5U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+199,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+200,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+201,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+202,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 6U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+204,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+205,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+206,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 7U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+207,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+208,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+210,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 8U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+212,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+213,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+214,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 9U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+216,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+217,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+218,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xaU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+219,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+220,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+221,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+222,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xbU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+224,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+225,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+226,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xcU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+227,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+228,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+230,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xdU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+231,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+232,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+234,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xeU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+235,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+236,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+238,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                             >> 0xfU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgSData(oldp+239,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1),16);
            tracep->chgSData(oldp+240,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2),16);
            tracep->chgBit(oldp+241,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                             >> 0xfU) 
                                            | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgSData(oldp+242,(((0x8000U & 
                                         ((0xffff8000U 
                                           & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2))) 
                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                             << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+243,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1))));
            tracep->chgBit(oldp+244,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2))));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+246,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 1U))));
            tracep->chgBit(oldp+250,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+251,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+252,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+253,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 1U))));
            tracep->chgBit(oldp+254,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 2U))));
            tracep->chgBit(oldp+257,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+259,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+260,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 2U))));
            tracep->chgBit(oldp+261,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 3U))));
            tracep->chgBit(oldp+264,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+265,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+267,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 3U))));
            tracep->chgBit(oldp+268,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 4U))));
            tracep->chgBit(oldp+271,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+272,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+273,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+274,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 4U))));
            tracep->chgBit(oldp+275,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 5U))));
            tracep->chgBit(oldp+278,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+280,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+281,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 5U))));
            tracep->chgBit(oldp+282,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+283,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+284,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 6U))));
            tracep->chgBit(oldp+285,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+288,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 6U))));
            tracep->chgBit(oldp+289,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 7U))));
            tracep->chgBit(oldp+292,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+293,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+294,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+295,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 7U))));
            tracep->chgBit(oldp+296,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+297,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 8U))));
            tracep->chgBit(oldp+299,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+301,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+302,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 8U))));
            tracep->chgBit(oldp+303,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 9U))));
            tracep->chgBit(oldp+306,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+307,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+309,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 9U))));
            tracep->chgBit(oldp+310,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+313,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+314,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+315,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+316,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+317,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+318,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+320,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+321,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+322,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+323,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+324,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+326,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+327,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+328,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+329,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+330,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+331,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+334,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+335,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+336,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+337,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+338,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+341,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+342,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+343,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+344,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+345,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+346,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+347,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+348,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+349,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+350,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+351,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+352,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2),16);
            tracep->chgBit(oldp+353,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2))));
            tracep->chgBit(oldp+354,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+355,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+356,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 1U))));
            tracep->chgBit(oldp+357,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+358,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+359,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+360,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 2U))));
            tracep->chgBit(oldp+362,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+363,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+364,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+365,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+366,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 3U))));
            tracep->chgBit(oldp+367,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+368,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+369,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+370,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+371,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 4U))));
            tracep->chgBit(oldp+372,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+373,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+374,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+375,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+376,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 5U))));
            tracep->chgBit(oldp+377,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+378,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+379,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+380,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+381,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 6U))));
            tracep->chgBit(oldp+382,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+383,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+384,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+385,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+386,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 7U))));
            tracep->chgBit(oldp+387,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+388,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+389,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+390,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+391,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 8U))));
            tracep->chgBit(oldp+392,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+393,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+394,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+395,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+396,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 9U))));
            tracep->chgBit(oldp+397,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+398,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+399,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+400,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+402,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+403,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+404,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+405,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+406,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+407,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+408,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+409,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+410,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+411,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+412,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+413,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+414,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+415,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+416,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+417,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+419,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+420,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+421,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+422,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+423,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+424,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+425,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+426,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+427,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+428,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+429,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+430,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+431,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+432,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+433,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+434,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+435,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+436,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+437,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+438,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+439,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+440,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+441,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+443,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+444,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+445,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+446,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+447,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+448,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+449,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+450,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+451,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+452,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+453,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+454,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+455,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+456,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+458,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+459,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+460,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+461,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+462,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+463,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+464,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+465,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+466,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+467,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+468,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+469,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+470,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+471,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+472,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+473,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+474,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+475,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+476,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+477,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+478,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+479,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+480,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+481,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+482,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+483,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+484,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+485,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+486,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+487,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+488,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+489,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+490,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+491,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1),16);
            tracep->chgSData(oldp+492,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2),16);
            tracep->chgBit(oldp+493,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                             >> 0xfU) 
                                            | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
            tracep->chgSData(oldp+494,(((0x8000U & 
                                         ((0xffff8000U 
                                           & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                              & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2))) 
                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                             << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+495,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1))));
            tracep->chgBit(oldp+496,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2))));
            tracep->chgBit(oldp+497,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+498,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+499,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)))));
            tracep->chgBit(oldp+500,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 1U))));
            tracep->chgBit(oldp+502,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+503,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+504,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+505,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 1U))));
            tracep->chgBit(oldp+506,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 2U))));
            tracep->chgBit(oldp+509,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+510,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+511,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+512,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 2U))));
            tracep->chgBit(oldp+513,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+514,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+515,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 3U))));
            tracep->chgBit(oldp+516,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+517,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+518,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+519,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 3U))));
            tracep->chgBit(oldp+520,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+522,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 4U))));
            tracep->chgBit(oldp+523,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+525,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+526,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 4U))));
            tracep->chgBit(oldp+527,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+528,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 5U))));
            tracep->chgBit(oldp+530,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+531,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+532,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+533,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 5U))));
            tracep->chgBit(oldp+534,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+536,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 6U))));
            tracep->chgBit(oldp+537,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+538,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+539,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+540,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 6U))));
            tracep->chgBit(oldp+541,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+542,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 7U))));
            tracep->chgBit(oldp+544,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+545,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+546,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+547,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 7U))));
            tracep->chgBit(oldp+548,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+549,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+550,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 8U))));
            tracep->chgBit(oldp+551,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+554,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 8U))));
            tracep->chgBit(oldp+555,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+556,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+557,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 9U))));
            tracep->chgBit(oldp+558,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+559,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+560,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+561,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 9U))));
            tracep->chgBit(oldp+562,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+563,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+564,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+565,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+566,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+567,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+568,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+569,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+570,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+572,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+573,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+574,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+575,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+576,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+577,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+578,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+579,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+580,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+581,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+582,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+583,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+584,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+585,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+586,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+587,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+588,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+589,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+590,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+591,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+592,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+593,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+594,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+595,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+596,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+597,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+598,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+599,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+600,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+602,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+603,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+604,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+605,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+606,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+607,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+609,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+610,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+611,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+612,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+613,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+614,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+615,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+616,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+617,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+618,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+619,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+620,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+621,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+622,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+623,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+624,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+625,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+626,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+627,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+628,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+629,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+630,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+631,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+632,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+633,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+634,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+635,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+636,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+637,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+638,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+639,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+640,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+641,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+642,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+644,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+645,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+646,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+647,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+649,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+650,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+651,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+652,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+653,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+654,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+655,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+656,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+657,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+658,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+659,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+660,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+661,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+662,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+663,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+664,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+665,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1),16);
            tracep->chgBit(oldp+666,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1))));
            tracep->chgBit(oldp+667,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+668,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+669,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+670,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+671,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+672,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+673,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+674,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+675,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+676,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+677,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+678,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+679,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+680,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+681,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+682,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+683,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+684,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+685,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+686,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+687,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+688,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+689,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+690,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+691,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+692,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+693,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+694,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+695,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+696,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+697,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+698,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+699,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+700,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+701,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+702,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+703,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+704,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+705,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+706,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+707,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+708,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+709,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+710,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+711,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+712,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+713,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+715,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+716,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+717,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+718,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+719,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+720,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+721,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+722,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+723,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+724,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+725,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+726,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+727,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+728,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+729,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+730,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+731,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+732,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+733,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+734,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+735,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+736,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+737,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+738,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+739,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+740,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+741,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+742,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+743,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1),16);
            tracep->chgBit(oldp+744,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1))));
            tracep->chgBit(oldp+745,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+746,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+747,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 1U))));
            tracep->chgBit(oldp+748,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+749,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+750,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+751,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+752,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 2U))));
            tracep->chgBit(oldp+753,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+754,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+755,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+756,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+757,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 3U))));
            tracep->chgBit(oldp+758,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+759,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+760,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+761,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+762,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 4U))));
            tracep->chgBit(oldp+763,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+764,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+765,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+766,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+767,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 5U))));
            tracep->chgBit(oldp+768,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+769,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+770,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+771,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+772,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 6U))));
            tracep->chgBit(oldp+773,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+774,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+776,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+777,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 7U))));
            tracep->chgBit(oldp+778,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+779,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+780,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+781,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+782,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 8U))));
            tracep->chgBit(oldp+783,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+784,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+785,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+786,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+787,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 9U))));
            tracep->chgBit(oldp+788,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+789,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+790,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+791,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+792,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+793,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+794,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+795,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+796,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+797,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+798,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+799,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+800,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+801,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+802,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+803,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+804,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+805,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+806,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+807,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+808,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+809,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+810,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+811,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+812,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+813,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+814,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+815,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+816,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+817,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+818,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+819,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+820,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+821,((1U & (~ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__first_add__DOT__half_sum1)))));
            tracep->chgBit(oldp+822,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+823,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__first_add__DOT__half_sum1));
            tracep->chgBit(oldp+824,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+825,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+826,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+827,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+828,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+829,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+830,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+831,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+832,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+833,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+834,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+835,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+836,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+837,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+838,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+839,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+840,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+841,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+842,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+843,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+844,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+845,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+846,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+847,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+848,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+849,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+850,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+851,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+852,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+853,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+854,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+855,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+856,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+857,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+858,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+859,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+860,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+861,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+862,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+863,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+864,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+865,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+866,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+867,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+868,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+869,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+870,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+871,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+872,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+873,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+874,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+875,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+876,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+877,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+878,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+879,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+880,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+881,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
            tracep->chgBit(oldp+882,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+883,(((0xffff8000U 
                                         & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                               << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+884,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum))));
            tracep->chgBit(oldp+885,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+886,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 1U))));
            tracep->chgBit(oldp+887,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 1U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+888,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+889,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+890,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 2U))));
            tracep->chgBit(oldp+891,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 2U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+892,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+893,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+894,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 3U))));
            tracep->chgBit(oldp+895,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 3U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+896,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+897,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+898,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 4U))));
            tracep->chgBit(oldp+899,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 4U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+900,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+901,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+902,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 5U))));
            tracep->chgBit(oldp+903,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 5U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+904,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+905,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+906,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 6U))));
            tracep->chgBit(oldp+907,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 6U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+908,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+909,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 7U))));
            tracep->chgBit(oldp+911,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 7U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+912,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+913,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+914,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 8U))));
            tracep->chgBit(oldp+915,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 8U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+916,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+917,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+918,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 9U))));
            tracep->chgBit(oldp+919,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 9U) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+920,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+921,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+922,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+923,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xaU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+924,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+925,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+926,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+927,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xbU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+928,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+929,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+930,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+931,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xcU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+932,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+933,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+934,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+935,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xdU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+936,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+937,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+938,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+939,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xeU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+940,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+941,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+942,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+943,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xfU) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgSData(oldp+944,(((0x8000U & 
                                         ((0xffff8000U 
                                           & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)) 
                                          | (((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                             << 0xfU))) 
                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))))))))))))))))),16);
            tracep->chgBit(oldp+945,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum))));
            tracep->chgBit(oldp+946,((1U & (~ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
            tracep->chgBit(oldp+947,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 1U))));
            tracep->chgBit(oldp+948,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 1U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
            tracep->chgBit(oldp+949,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+950,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 1U)))));
            tracep->chgBit(oldp+951,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 1U)) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
            tracep->chgBit(oldp+952,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 2U))));
            tracep->chgBit(oldp+953,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 2U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+954,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+955,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 2U)))));
            tracep->chgBit(oldp+956,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+957,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 3U))));
            tracep->chgBit(oldp+958,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 3U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+959,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+960,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 3U)))));
            tracep->chgBit(oldp+961,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+962,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 4U))));
            tracep->chgBit(oldp+963,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 4U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+964,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+965,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 4U)))));
            tracep->chgBit(oldp+966,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+967,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 5U))));
            tracep->chgBit(oldp+968,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 5U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+969,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+970,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 5U)))));
            tracep->chgBit(oldp+971,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 6U))));
            tracep->chgBit(oldp+973,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 6U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+974,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+975,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 6U)))));
            tracep->chgBit(oldp+976,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+977,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 7U))));
            tracep->chgBit(oldp+978,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 7U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+979,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+980,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 7U)))));
            tracep->chgBit(oldp+981,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 8U))));
            tracep->chgBit(oldp+983,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 8U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+984,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+985,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 8U)))));
            tracep->chgBit(oldp+986,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+987,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 9U))));
            tracep->chgBit(oldp+988,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 9U)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+989,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+990,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 9U)))));
            tracep->chgBit(oldp+991,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+992,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+993,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xaU)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+994,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+995,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+996,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 0xaU)) 
                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+997,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+998,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xbU)) 
                                            ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+999,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1000,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1001,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                           >> 0xbU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1002,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1003,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1004,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1005,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1006,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                           >> 0xcU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1008,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                 >> 0xdU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1009,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1010,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1011,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                           >> 0xdU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1012,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1013,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                 >> 0xeU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1014,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1015,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1016,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                           >> 0xeU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1017,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1018,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                 >> 0xfU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1019,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1020,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                           >> 0xfU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1021,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum))));
            tracep->chgBit(oldp+1022,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 1U))));
            tracep->chgBit(oldp+1023,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 2U))));
            tracep->chgBit(oldp+1024,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 3U))));
            tracep->chgBit(oldp+1025,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 4U))));
            tracep->chgBit(oldp+1026,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 5U))));
            tracep->chgBit(oldp+1027,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 6U))));
            tracep->chgBit(oldp+1028,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 7U))));
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 8U))));
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 9U))));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1032,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1033,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1034,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1036,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1037,(((0x8000U & 
                                          ((0xffff8000U 
                                            & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)) 
                                           | (((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                   >> 0xfU)) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                              << 0xfU))) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xeU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                << 0xdU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))))))))))))))))),16);
            tracep->chgBit(oldp+1038,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1))));
            tracep->chgBit(oldp+1039,((1U & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
            tracep->chgBit(oldp+1040,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 1U))));
            tracep->chgBit(oldp+1041,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 1U)) 
                                             ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
            tracep->chgBit(oldp+1042,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1043,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1044,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 2U))));
            tracep->chgBit(oldp+1046,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 2U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1047,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1048,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1049,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 2U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 3U))));
            tracep->chgBit(oldp+1051,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 3U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1052,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1053,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1054,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 3U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1055,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 4U))));
            tracep->chgBit(oldp+1056,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 4U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1057,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1058,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 4U)))));
            tracep->chgBit(oldp+1059,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 4U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 5U))));
            tracep->chgBit(oldp+1061,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 5U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1062,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1063,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 5U)))));
            tracep->chgBit(oldp+1064,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 5U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1065,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 6U))));
            tracep->chgBit(oldp+1066,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 6U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1067,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1068,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 6U)))));
            tracep->chgBit(oldp+1069,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 6U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1070,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 7U))));
            tracep->chgBit(oldp+1071,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 7U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1072,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1073,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 7U)))));
            tracep->chgBit(oldp+1074,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 7U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1075,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 8U))));
            tracep->chgBit(oldp+1076,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 8U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1077,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1078,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 8U)))));
            tracep->chgBit(oldp+1079,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 8U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1080,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 9U))));
            tracep->chgBit(oldp+1081,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 9U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1082,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1083,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 9U)))));
            tracep->chgBit(oldp+1084,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 9U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1085,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1086,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xaU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1087,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1088,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1089,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xaU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1090,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1091,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xbU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1092,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1093,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1094,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xbU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1095,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1096,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1097,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1098,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1099,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xcU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1100,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1101,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xdU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1102,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1103,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1104,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xdU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1105,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1106,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xeU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1107,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1108,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1109,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xeU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1110,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1111,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                 >> 0xfU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1112,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1113,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                           >> 0xfU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+1114,(((0xffff8000U 
                                          & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                << 0xfU))) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xeU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                << 0xdU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+1115,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum))));
            tracep->chgBit(oldp+1116,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 1U))));
            tracep->chgBit(oldp+1118,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 1U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+1119,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1120,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+1121,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 2U))));
            tracep->chgBit(oldp+1122,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 2U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1123,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1124,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 3U))));
            tracep->chgBit(oldp+1126,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 3U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1127,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1128,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 4U))));
            tracep->chgBit(oldp+1130,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 4U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1131,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1132,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 5U))));
            tracep->chgBit(oldp+1134,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 5U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1135,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1136,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1137,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 6U))));
            tracep->chgBit(oldp+1138,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 6U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1139,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1140,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1141,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 7U))));
            tracep->chgBit(oldp+1142,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 7U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1143,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1144,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 8U))));
            tracep->chgBit(oldp+1146,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 8U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1147,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1148,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 9U))));
            tracep->chgBit(oldp+1150,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 9U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1151,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1152,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1154,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xaU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1155,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1156,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1157,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1158,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xbU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1159,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1160,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1161,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1162,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xcU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1163,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1164,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1165,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1166,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xdU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1167,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1168,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1169,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1170,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xeU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1171,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1172,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1173,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1174,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                              >> 0xfU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgSData(oldp+1175,(((0x8000U & 
                                          ((0xffff8000U 
                                            & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)) 
                                           | (((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                   >> 0xfU)) 
                                               & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                              << 0xfU))) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xeU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                << 0xdU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))))))))))))))))),16);
            tracep->chgBit(oldp+1176,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1))));
            tracep->chgBit(oldp+1177,((1U & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
            tracep->chgBit(oldp+1178,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 1U))));
            tracep->chgBit(oldp+1179,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 1U)) 
                                             ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
            tracep->chgBit(oldp+1180,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1181,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1182,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 1U)) 
                                             & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
            tracep->chgBit(oldp+1183,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 2U))));
            tracep->chgBit(oldp+1184,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 2U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1185,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1186,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1187,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 2U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1188,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 3U))));
            tracep->chgBit(oldp+1189,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 3U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1190,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1191,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1192,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 3U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1193,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 4U))));
            tracep->chgBit(oldp+1194,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 4U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1195,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1196,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 4U)))));
            tracep->chgBit(oldp+1197,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 4U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1198,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 5U))));
            tracep->chgBit(oldp+1199,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 5U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1200,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1201,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 5U)))));
            tracep->chgBit(oldp+1202,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 5U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1203,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 6U))));
            tracep->chgBit(oldp+1204,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 6U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1205,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1206,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 6U)))));
            tracep->chgBit(oldp+1207,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 6U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 7U))));
            tracep->chgBit(oldp+1209,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 7U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1210,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1211,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 7U)))));
            tracep->chgBit(oldp+1212,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 7U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1213,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 8U))));
            tracep->chgBit(oldp+1214,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 8U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1215,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1216,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 8U)))));
            tracep->chgBit(oldp+1217,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 8U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1218,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 9U))));
            tracep->chgBit(oldp+1219,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 9U)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1220,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1221,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 9U)))));
            tracep->chgBit(oldp+1222,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 9U)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1223,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1224,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xaU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1225,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1226,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1227,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xaU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1228,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1229,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xbU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1230,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1231,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1232,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xbU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1233,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1234,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1235,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1236,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1237,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xcU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1239,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xdU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1240,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1241,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1242,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xdU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1244,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xeU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1245,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1246,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1247,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xeU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1248,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1249,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                 >> 0xfU)) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1250,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1251,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                           >> 0xfU)) 
                                       & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
            tracep->chgSData(oldp+1252,(((0xffff8000U 
                                          & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                << 0xfU))) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xeU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                << 0xdU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+1253,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum))));
            tracep->chgBit(oldp+1254,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 1U))));
            tracep->chgBit(oldp+1256,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 1U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+1257,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1258,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 2U))));
            tracep->chgBit(oldp+1260,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 2U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1261,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1262,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1263,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 3U))));
            tracep->chgBit(oldp+1264,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 3U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1265,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1266,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1267,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 4U))));
            tracep->chgBit(oldp+1268,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 4U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1269,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1270,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1271,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 5U))));
            tracep->chgBit(oldp+1272,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 5U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1273,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1274,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1275,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 6U))));
            tracep->chgBit(oldp+1276,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 6U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1277,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1278,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1279,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 7U))));
            tracep->chgBit(oldp+1280,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 7U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1281,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1282,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 8U))));
            tracep->chgBit(oldp+1284,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 8U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1285,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1286,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1287,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 9U))));
            tracep->chgBit(oldp+1288,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 9U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1289,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1290,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1291,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1292,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xaU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1293,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1294,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1296,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xbU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1297,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1298,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1299,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1300,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xcU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1301,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1302,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1303,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1304,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xdU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1305,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1306,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1307,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1308,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xeU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1309,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1310,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1311,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1312,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                              >> 0xfU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1315,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1316,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1317,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1318,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1319,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1320,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1321,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1322,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1323,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1324,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1325,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1326,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgSData(oldp+1327,(((0xffff8000U 
                                          & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                                << 0xfU))) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xeU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                                << 0xdU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                            << 9U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                               << 8U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
            tracep->chgBit(oldp+1328,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum))));
            tracep->chgBit(oldp+1329,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 1U))));
            tracep->chgBit(oldp+1331,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 1U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__)))));
            tracep->chgBit(oldp+1332,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1333,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__))));
            tracep->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 2U))));
            tracep->chgBit(oldp+1335,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 2U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1336,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1337,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1338,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 3U))));
            tracep->chgBit(oldp+1339,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 3U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1340,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1341,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1342,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 4U))));
            tracep->chgBit(oldp+1343,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 4U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1344,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1345,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1346,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 5U))));
            tracep->chgBit(oldp+1347,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 5U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1348,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1349,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1350,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 6U))));
            tracep->chgBit(oldp+1351,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 6U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1352,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1353,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1354,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 7U))));
            tracep->chgBit(oldp+1355,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 7U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1356,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1357,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1358,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 8U))));
            tracep->chgBit(oldp+1359,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 8U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1360,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1361,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1362,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 9U))));
            tracep->chgBit(oldp+1363,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 9U) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1364,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1365,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1366,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1367,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xaU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1368,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1369,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1370,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1371,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xbU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1372,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1373,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1374,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1375,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xcU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1376,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1377,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1378,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1379,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xdU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1381,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1382,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1383,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xeU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
            tracep->chgBit(oldp+1384,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
            tracep->chgBit(oldp+1385,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
            tracep->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1387,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xfU) 
                                             ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        }
        tracep->chgBit(oldp+1388,(vlTOPp->carry_in));
        tracep->chgSData(oldp+1389,(vlTOPp->in_a),16);
        tracep->chgSData(oldp+1390,(vlTOPp->in_b),16);
        tracep->chgCData(oldp+1391,(vlTOPp->select),4);
        tracep->chgBit(oldp+1392,(vlTOPp->mode));
        tracep->chgBit(oldp+1393,(vlTOPp->carry_out));
        tracep->chgBit(oldp+1394,(vlTOPp->compare));
        tracep->chgSData(oldp+1395,(vlTOPp->alu_out),16);
        tracep->chgSData(oldp+1396,(((8U & (IData)(vlTOPp->select))
                                      ? ((4U & (IData)(vlTOPp->select))
                                          ? ((2U & (IData)(vlTOPp->select))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.sum))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.sum)))
                                          : ((2U & (IData)(vlTOPp->select))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.sum))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.sum))))
                                      : ((4U & (IData)(vlTOPp->select))
                                          ? ((2U & (IData)(vlTOPp->select))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m2.sum))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.sum)))
                                          : ((2U & (IData)(vlTOPp->select))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c4.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.sum))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select))
                                                  ? (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.sum)
                                                  : (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.sum)))))),16);
        tracep->chgBit(oldp+1397,((1U & (((((IData)(vlTOPp->in_a) 
                                            >> 0xfU) 
                                           & (~ ((IData)(vlTOPp->in_b) 
                                                 >> 0xfU))) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                         ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                             >> 0xfU) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgBit(oldp+1398,((1U & ((((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xfU))) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgBit(oldp+1399,((1U & ((((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          | ((~ ((IData)(vlTOPp->in_a) 
                                                 >> 0xfU)) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                         ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                             >> 0xfU) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgBit(oldp+1400,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xfU) 
                                         | ((~ ((IData)(vlTOPp->in_a) 
                                                >> 0xfU)) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgBit(oldp+1401,((((IData)(vlTOPp->in_a) 
                                    >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->chgSData(oldp+1402,(((0xffff8000U & 
                                      ((IData)(vlTOPp->in_a) 
                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1403,((1U & (IData)(vlTOPp->in_a))));
        tracep->chgBit(oldp+1404,((1U & ((IData)(vlTOPp->in_a) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1405,(((IData)(vlTOPp->in_a) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1406,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 1U))));
        tracep->chgBit(oldp+1407,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__)))));
        tracep->chgBit(oldp+1408,((((IData)(vlTOPp->in_a) 
                                    >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__))));
        tracep->chgBit(oldp+1409,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 2U))));
        tracep->chgBit(oldp+1410,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1411,((((IData)(vlTOPp->in_a) 
                                    >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1412,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 3U))));
        tracep->chgBit(oldp+1413,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1414,((((IData)(vlTOPp->in_a) 
                                    >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1415,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 4U))));
        tracep->chgBit(oldp+1416,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1417,((((IData)(vlTOPp->in_a) 
                                    >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1418,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 5U))));
        tracep->chgBit(oldp+1419,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1420,((((IData)(vlTOPp->in_a) 
                                    >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1421,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 6U))));
        tracep->chgBit(oldp+1422,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1423,((((IData)(vlTOPp->in_a) 
                                    >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1424,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 7U))));
        tracep->chgBit(oldp+1425,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1426,((((IData)(vlTOPp->in_a) 
                                    >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1427,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 8U))));
        tracep->chgBit(oldp+1428,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1429,((((IData)(vlTOPp->in_a) 
                                    >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1430,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 9U))));
        tracep->chgBit(oldp+1431,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1432,((((IData)(vlTOPp->in_a) 
                                    >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1433,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1434,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xaU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1435,((((IData)(vlTOPp->in_a) 
                                    >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1436,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1437,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xbU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1438,((((IData)(vlTOPp->in_a) 
                                    >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1439,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1440,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xcU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1441,((((IData)(vlTOPp->in_a) 
                                    >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1442,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1443,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xdU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1444,((((IData)(vlTOPp->in_a) 
                                    >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1445,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1446,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1447,((((IData)(vlTOPp->in_a) 
                                    >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1448,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1449,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xfU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1450,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1451,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1452,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1453,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgSData(oldp+1454,((0xffffU & (- (IData)((IData)(vlTOPp->carry_in))))),16);
        tracep->chgBit(oldp+1455,((1U & (~ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1456,((1U & (~ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1457,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1458,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1459,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1460,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1461,((1U & ((((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgSData(oldp+1462,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->in_a) 
                                                     & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1463,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1464,((1U & ((IData)(vlTOPp->in_a) 
                                         & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)))));
        tracep->chgBit(oldp+1465,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1466,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 1U))));
        tracep->chgBit(oldp+1467,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 2U))));
        tracep->chgBit(oldp+1468,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 3U))));
        tracep->chgBit(oldp+1469,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 4U))));
        tracep->chgBit(oldp+1470,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 5U))));
        tracep->chgBit(oldp+1471,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 6U))));
        tracep->chgBit(oldp+1472,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 7U))));
        tracep->chgBit(oldp+1473,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 8U))));
        tracep->chgBit(oldp+1474,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 9U))));
        tracep->chgBit(oldp+1475,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1476,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1477,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1478,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1479,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1480,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1481,((1U & ((((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgSData(oldp+1482,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->in_a) 
                                                     & (IData)(vlTOPp->in_b))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1483,((1U & (IData)(vlTOPp->in_b))));
        tracep->chgBit(oldp+1484,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1485,((1U & ((IData)(vlTOPp->in_a) 
                                         & (IData)(vlTOPp->in_b)))));
        tracep->chgBit(oldp+1486,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1487,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 1U))));
        tracep->chgBit(oldp+1488,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 1U))));
        tracep->chgBit(oldp+1489,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 2U))));
        tracep->chgBit(oldp+1490,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 2U))));
        tracep->chgBit(oldp+1491,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 3U))));
        tracep->chgBit(oldp+1492,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 3U))));
        tracep->chgBit(oldp+1493,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 4U))));
        tracep->chgBit(oldp+1494,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 4U))));
        tracep->chgBit(oldp+1495,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 5U))));
        tracep->chgBit(oldp+1496,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 5U))));
        tracep->chgBit(oldp+1497,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 6U))));
        tracep->chgBit(oldp+1498,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 6U))));
        tracep->chgBit(oldp+1499,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 7U))));
        tracep->chgBit(oldp+1500,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 7U))));
        tracep->chgBit(oldp+1501,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 8U))));
        tracep->chgBit(oldp+1502,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 8U))));
        tracep->chgBit(oldp+1503,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 9U))));
        tracep->chgBit(oldp+1504,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 9U))));
        tracep->chgBit(oldp+1505,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1506,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1507,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1508,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1509,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1510,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1511,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1512,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1513,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1514,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1515,((1U & ((IData)(vlTOPp->in_b) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1516,((1U & (((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1517,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1518,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1519,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgSData(oldp+1520,(((0x8000U & ((0xffff8000U 
                                                  & (IData)(vlTOPp->in_a)) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1521,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1522,((1U & (IData)(vlTOPp->in_a))));
        tracep->chgBit(oldp+1523,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1524,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 1U))));
        tracep->chgBit(oldp+1525,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 2U))));
        tracep->chgBit(oldp+1526,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 3U))));
        tracep->chgBit(oldp+1527,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 4U))));
        tracep->chgBit(oldp+1528,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 5U))));
        tracep->chgBit(oldp+1529,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 6U))));
        tracep->chgBit(oldp+1530,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 7U))));
        tracep->chgBit(oldp+1531,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 8U))));
        tracep->chgBit(oldp+1532,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 9U))));
        tracep->chgBit(oldp+1533,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1534,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1535,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1536,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1537,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1538,((1U & ((IData)(vlTOPp->in_a) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1539,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgSData(oldp+1540,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                                     & (IData)(vlTOPp->in_a))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1541,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1542,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         & (IData)(vlTOPp->in_a)))));
        tracep->chgBit(oldp+1543,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1544,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 1U))));
        tracep->chgBit(oldp+1545,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 2U))));
        tracep->chgBit(oldp+1546,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 3U))));
        tracep->chgBit(oldp+1547,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 4U))));
        tracep->chgBit(oldp+1548,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 5U))));
        tracep->chgBit(oldp+1549,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 6U))));
        tracep->chgBit(oldp+1550,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 7U))));
        tracep->chgBit(oldp+1551,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 8U))));
        tracep->chgBit(oldp+1552,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 9U))));
        tracep->chgBit(oldp+1553,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1554,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1555,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1556,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1557,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1558,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1559,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->chgSData(oldp+1560,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                                     & (IData)(vlTOPp->in_a))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1561,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1) 
                                   ^ (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1562,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         & (IData)(vlTOPp->in_a)))));
        tracep->chgBit(oldp+1563,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1564,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 1U))));
        tracep->chgBit(oldp+1565,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 2U))));
        tracep->chgBit(oldp+1566,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 3U))));
        tracep->chgBit(oldp+1567,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 4U))));
        tracep->chgBit(oldp+1568,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 5U))));
        tracep->chgBit(oldp+1569,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 6U))));
        tracep->chgBit(oldp+1570,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 7U))));
        tracep->chgBit(oldp+1571,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 8U))));
        tracep->chgBit(oldp+1572,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 9U))));
        tracep->chgBit(oldp+1573,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1574,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1575,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1576,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1577,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1578,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)) 
                                         >> 0xfU))));
        tracep->chgSData(oldp+1579,((0xffffU & (~ (IData)(vlTOPp->in_b)))),16);
        tracep->chgSData(oldp+1580,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->in_a) 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->in_b) 
                                                          >> 0xfU)) 
                                                        << 0xfU))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__))))))))))))))))),16);
        tracep->chgBit(oldp+1581,((1U & (~ (IData)(vlTOPp->in_b)))));
        tracep->chgBit(oldp+1582,((1U & ((IData)(vlTOPp->in_a) 
                                         & (~ (IData)(vlTOPp->in_b))))));
        tracep->chgBit(oldp+1583,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 1U)))));
        tracep->chgBit(oldp+1584,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 1U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 1U))))));
        tracep->chgBit(oldp+1585,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 2U)))));
        tracep->chgBit(oldp+1586,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 2U))))));
        tracep->chgBit(oldp+1587,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 3U)))));
        tracep->chgBit(oldp+1588,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 3U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 3U))))));
        tracep->chgBit(oldp+1589,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 4U)))));
        tracep->chgBit(oldp+1590,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 4U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 4U))))));
        tracep->chgBit(oldp+1591,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 5U)))));
        tracep->chgBit(oldp+1592,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 5U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 5U))))));
        tracep->chgBit(oldp+1593,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 6U)))));
        tracep->chgBit(oldp+1594,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 6U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 6U))))));
        tracep->chgBit(oldp+1595,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 7U)))));
        tracep->chgBit(oldp+1596,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 7U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 7U))))));
        tracep->chgBit(oldp+1597,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 8U)))));
        tracep->chgBit(oldp+1598,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 8U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 8U))))));
        tracep->chgBit(oldp+1599,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 9U)))));
        tracep->chgBit(oldp+1600,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 9U) & 
                                         (~ ((IData)(vlTOPp->in_b) 
                                             >> 9U))))));
        tracep->chgBit(oldp+1601,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xaU)))));
        tracep->chgBit(oldp+1602,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xaU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xaU))))));
        tracep->chgBit(oldp+1603,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xbU)))));
        tracep->chgBit(oldp+1604,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xbU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xbU))))));
        tracep->chgBit(oldp+1605,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xcU)))));
        tracep->chgBit(oldp+1606,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xcU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xcU))))));
        tracep->chgBit(oldp+1607,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xdU)))));
        tracep->chgBit(oldp+1608,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xdU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xdU))))));
        tracep->chgBit(oldp+1609,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xeU)))));
        tracep->chgBit(oldp+1610,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xeU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xeU))))));
        tracep->chgBit(oldp+1611,((1U & (~ ((IData)(vlTOPp->in_b) 
                                            >> 0xfU)))));
        tracep->chgBit(oldp+1612,((1U & (((IData)(vlTOPp->in_a) 
                                          >> 0xfU) 
                                         & (~ ((IData)(vlTOPp->in_b) 
                                               >> 0xfU))))));
        tracep->chgBit(oldp+1613,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1614,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1615,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1616,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgBit(oldp+1617,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1618,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                   & (IData)(vlTOPp->carry_in))));
        tracep->chgSData(oldp+1619,(((0x8000U & ((0xffff8000U 
                                                  & (IData)(vlTOPp->in_a)) 
                                                 | (((~ 
                                                      ((IData)(vlTOPp->in_a) 
                                                       >> 0xfU)) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                & (IData)(vlTOPp->in_a)))))))))))))))))),16);
        tracep->chgBit(oldp+1620,((1U & (~ (IData)(vlTOPp->in_a)))));
        tracep->chgBit(oldp+1621,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 1U)) 
                                         ^ (IData)(vlTOPp->in_a)))));
        tracep->chgBit(oldp+1622,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 1U)))));
        tracep->chgBit(oldp+1623,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 1U)) 
                                         & (IData)(vlTOPp->in_a)))));
        tracep->chgBit(oldp+1624,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1625,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 2U)))));
        tracep->chgBit(oldp+1626,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1627,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1628,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 3U)))));
        tracep->chgBit(oldp+1629,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1630,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1631,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 4U)))));
        tracep->chgBit(oldp+1632,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1633,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1634,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 5U)))));
        tracep->chgBit(oldp+1635,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1636,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1637,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 6U)))));
        tracep->chgBit(oldp+1638,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1639,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1640,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 7U)))));
        tracep->chgBit(oldp+1641,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1642,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1643,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 8U)))));
        tracep->chgBit(oldp+1644,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1645,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1646,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 9U)))));
        tracep->chgBit(oldp+1647,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1648,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1649,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xaU)))));
        tracep->chgBit(oldp+1650,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xaU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1651,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1652,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xbU)))));
        tracep->chgBit(oldp+1653,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xbU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1654,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1655,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xcU)))));
        tracep->chgBit(oldp+1656,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xcU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1657,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1658,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xdU)))));
        tracep->chgBit(oldp+1659,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xdU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1660,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1661,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xeU)))));
        tracep->chgBit(oldp+1662,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xeU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1663,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->chgBit(oldp+1664,((1U & (~ ((IData)(vlTOPp->in_a) 
                                            >> 0xfU)))));
        tracep->chgBit(oldp+1665,(((~ ((IData)(vlTOPp->in_a) 
                                       >> 0xfU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->chgBit(oldp+1666,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                         ^ (IData)(vlTOPp->carry_in)))));
        tracep->chgBit(oldp+1667,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                   & (IData)(vlTOPp->carry_in))));
    }
}

void Valu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
