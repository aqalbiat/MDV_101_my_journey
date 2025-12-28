// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


//======================

void Valu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Valu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Valu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Valu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Valu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1389,"carry_in", false,-1);
        tracep->declBus(c+1390,"in_a", false,-1, 15,0);
        tracep->declBus(c+1391,"in_b", false,-1, 15,0);
        tracep->declBus(c+1392,"select", false,-1, 3,0);
        tracep->declBit(c+1393,"mode", false,-1);
        tracep->declBit(c+1394,"carry_out", false,-1);
        tracep->declBit(c+1395,"compare", false,-1);
        tracep->declBus(c+1396,"alu_out", false,-1, 15,0);
        tracep->declBit(c+1389,"alu carry_in", false,-1);
        tracep->declBus(c+1390,"alu in_a", false,-1, 15,0);
        tracep->declBus(c+1391,"alu in_b", false,-1, 15,0);
        tracep->declBus(c+1392,"alu select", false,-1, 3,0);
        tracep->declBit(c+1393,"alu mode", false,-1);
        tracep->declBit(c+1394,"alu carry_out", false,-1);
        tracep->declBit(c+1395,"alu compare", false,-1);
        tracep->declBus(c+1396,"alu alu_out", false,-1, 15,0);
        tracep->declBus(c+1397,"alu out0", false,-1, 15,0);
        tracep->declBus(c+1,"alu out1", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 carry_in", false,-1);
        tracep->declBus(c+1390,"alu option0 in_a", false,-1, 15,0);
        tracep->declBus(c+1391,"alu option0 in_b", false,-1, 15,0);
        tracep->declBus(c+1392,"alu option0 select", false,-1, 3,0);
        tracep->declBus(c+1397,"alu option0 arith_out", false,-1, 15,0);
        tracep->declBit(c+1394,"alu option0 carry_out", false,-1);
        tracep->declBit(c+1395,"alu option0 compare", false,-1);
        tracep->declBus(c+2,"alu option0 carry", false,-1, 15,0);
        tracep->declBus(c+3,"alu option0 calc1", false,-1, 15,0);
        tracep->declBus(c+4,"alu option0 calc2", false,-1, 15,0);
        tracep->declBus(c+5,"alu option0 calc3", false,-1, 15,0);
        tracep->declBus(c+6,"alu option0 calc4", false,-1, 15,0);
        tracep->declBus(c+7,"alu option0 calc5", false,-1, 15,0);
        tracep->declBus(c+8,"alu option0 calc6", false,-1, 15,0);
        tracep->declBus(c+9,"alu option0 calc7", false,-1, 15,0);
        tracep->declBus(c+10,"alu option0 calc8", false,-1, 15,0);
        tracep->declBus(c+11,"alu option0 calc9", false,-1, 15,0);
        tracep->declBus(c+12,"alu option0 calc10", false,-1, 15,0);
        tracep->declBus(c+13,"alu option0 calc11", false,-1, 15,0);
        tracep->declBus(c+14,"alu option0 calc12", false,-1, 15,0);
        tracep->declBus(c+15,"alu option0 calc13", false,-1, 15,0);
        tracep->declBus(c+16,"alu option0 calc14", false,-1, 15,0);
        tracep->declBus(c+17,"alu option0 calc15", false,-1, 15,0);
        tracep->declBus(c+18,"alu option0 calc16", false,-1, 15,0);
        tracep->declBus(c+19,"alu option0 sub_buf", false,-1, 15,0);
        tracep->declBit(c+1398,"alu option0 carry_tmp1", false,-1);
        tracep->declBit(c+20,"alu option0 carry_tmp2", false,-1);
        tracep->declBus(c+1390,"alu option0 c7p1 a_in", false,-1, 15,0);
        tracep->declBus(c+1391,"alu option0 c7p1 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c7p1 c_in", false,-1);
        tracep->declBus(c+19,"alu option0 c7p1 res", false,-1, 15,0);
        tracep->declBit(c+1398,"alu option0 c7p1 c_out", false,-1);
        tracep->declBus(c+21,"alu option0 c7p1 tmp", false,-1, 15,0);
        tracep->declBit(c+1399,"alu option0 c7p1 carry1", false,-1);
        tracep->declBit(c+22,"alu option0 c7p1 carry2", false,-1);
        tracep->declBus(c+19,"alu option0 c7p2 a_in", false,-1, 15,0);
        tracep->declBus(c+1669,"alu option0 c7p2 b_in", false,-1, 15,0);
        tracep->declBit(c+1670,"alu option0 c7p2 c_in", false,-1);
        tracep->declBus(c+9,"alu option0 c7p2 res", false,-1, 15,0);
        tracep->declBit(c+20,"alu option0 c7p2 c_out", false,-1);
        tracep->declBus(c+23,"alu option0 c7p2 tmp", false,-1, 15,0);
        tracep->declBit(c+20,"alu option0 c7p2 carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 carry2", false,-1);
        tracep->declBus(c+24,"alu option0 c8 a_in", false,-1, 15,0);
        tracep->declBus(c+1669,"alu option0 c8 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c8 c_in", false,-1);
        tracep->declBus(c+10,"alu option0 c8 res", false,-1, 15,0);
        tracep->declBit(c+25,"alu option0 c8 c_out", false,-1);
        tracep->declBus(c+26,"alu option0 c8 tmp", false,-1, 15,0);
        tracep->declBit(c+27,"alu option0 c8 carry1", false,-1);
        tracep->declBit(c+28,"alu option0 c8 carry2", false,-1);
        tracep->declBus(c+29,"alu option0 c12 a_in", false,-1, 15,0);
        tracep->declBus(c+1669,"alu option0 c12 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c12 c_in", false,-1);
        tracep->declBus(c+14,"alu option0 c12 res", false,-1, 15,0);
        tracep->declBit(c+30,"alu option0 c12 c_out", false,-1);
        tracep->declBus(c+31,"alu option0 c12 tmp", false,-1, 15,0);
        tracep->declBit(c+32,"alu option0 c12 carry1", false,-1);
        tracep->declBit(c+33,"alu option0 c12 carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c16 a_in", false,-1, 15,0);
        tracep->declBus(c+1669,"alu option0 c16 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c16 c_in", false,-1);
        tracep->declBus(c+18,"alu option0 c16 res", false,-1, 15,0);
        tracep->declBit(c+1400,"alu option0 c16 c_out", false,-1);
        tracep->declBus(c+34,"alu option0 c16 tmp", false,-1, 15,0);
        tracep->declBit(c+1401,"alu option0 c16 carry1", false,-1);
        tracep->declBit(c+35,"alu option0 c16 carry2", false,-1);
        tracep->declBus(c+1390,"alu option1 in_a", false,-1, 15,0);
        tracep->declBus(c+1391,"alu option1 in_b", false,-1, 15,0);
        tracep->declBus(c+1392,"alu option1 select", false,-1, 3,0);
        tracep->declBus(c+1,"alu option1 logic_out", false,-1, 15,0);
        tracep->declBus(c+1390,"alu option0 c1 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c1 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c1 c_in", false,-1);
        tracep->declBus(c+3,"alu option0 c1 sum", false,-1, 15,0);
        tracep->declBit(c+1402,"alu option0 c1 c_out", false,-1);
        tracep->declBus(c+1403,"alu option0 c1 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c1 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c1 first_add c_in", false,-1);
        tracep->declBit(c+1405,"alu option0 c1 first_add sum", false,-1);
        tracep->declBit(c+36,"alu option0 c1 first_add c_out", false,-1);
        tracep->declBit(c+1404,"alu option0 c1 first_add half_sum1", false,-1);
        tracep->declBit(c+1405,"alu option0 c1 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 first_add carry1", false,-1);
        tracep->declBit(c+1406,"alu option0 c1 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+36,"alu option0 c1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1408,"alu option0 c1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+37,"alu option0 c1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1407,"alu option0 c1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1408,"alu option0 c1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1409,"alu option0 c1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+37,"alu option0 c1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1411,"alu option0 c1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+38,"alu option0 c1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1410,"alu option0 c1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1411,"alu option0 c1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1412,"alu option0 c1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+38,"alu option0 c1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1414,"alu option0 c1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+39,"alu option0 c1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1413,"alu option0 c1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1414,"alu option0 c1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1415,"alu option0 c1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+39,"alu option0 c1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1417,"alu option0 c1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+40,"alu option0 c1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1416,"alu option0 c1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1417,"alu option0 c1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1418,"alu option0 c1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+40,"alu option0 c1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1420,"alu option0 c1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+41,"alu option0 c1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1419,"alu option0 c1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1420,"alu option0 c1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1421,"alu option0 c1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+41,"alu option0 c1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1423,"alu option0 c1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+42,"alu option0 c1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1422,"alu option0 c1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1423,"alu option0 c1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1424,"alu option0 c1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+42,"alu option0 c1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1426,"alu option0 c1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+43,"alu option0 c1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1425,"alu option0 c1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1426,"alu option0 c1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1427,"alu option0 c1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+43,"alu option0 c1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1429,"alu option0 c1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+44,"alu option0 c1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1428,"alu option0 c1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1429,"alu option0 c1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1430,"alu option0 c1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+44,"alu option0 c1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1432,"alu option0 c1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+45,"alu option0 c1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1431,"alu option0 c1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1432,"alu option0 c1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1433,"alu option0 c1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+45,"alu option0 c1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1435,"alu option0 c1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+46,"alu option0 c1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1434,"alu option0 c1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1435,"alu option0 c1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1436,"alu option0 c1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+46,"alu option0 c1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1438,"alu option0 c1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+47,"alu option0 c1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1437,"alu option0 c1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1438,"alu option0 c1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1439,"alu option0 c1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+47,"alu option0 c1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1441,"alu option0 c1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+48,"alu option0 c1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1440,"alu option0 c1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1441,"alu option0 c1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1442,"alu option0 c1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+48,"alu option0 c1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1444,"alu option0 c1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+49,"alu option0 c1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1443,"alu option0 c1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1444,"alu option0 c1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1445,"alu option0 c1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+49,"alu option0 c1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1447,"alu option0 c1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+50,"alu option0 c1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1446,"alu option0 c1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1447,"alu option0 c1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1448,"alu option0 c1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+50,"alu option0 c1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1450,"alu option0 c1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1402,"alu option0 c1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1449,"alu option0 c1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1450,"alu option0 c1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1402,"alu option0 c1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+51,"alu option0 c2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c2 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c2 c_in", false,-1);
        tracep->declBus(c+4,"alu option0 c2 sum", false,-1, 15,0);
        tracep->declBit(c+52,"alu option0 c2 c_out", false,-1);
        tracep->declBus(c+53,"alu option0 c2 carry", false,-1, 15,0);
        tracep->declBit(c+54,"alu option0 c2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c2 first_add c_in", false,-1);
        tracep->declBit(c+1451,"alu option0 c2 first_add sum", false,-1);
        tracep->declBit(c+55,"alu option0 c2 first_add c_out", false,-1);
        tracep->declBit(c+54,"alu option0 c2 first_add half_sum1", false,-1);
        tracep->declBit(c+1451,"alu option0 c2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 first_add carry1", false,-1);
        tracep->declBit(c+1452,"alu option0 c2 first_add carry2", false,-1);
        tracep->declBit(c+56,"alu option0 c2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+55,"alu option0 c2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+57,"alu option0 c2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+58,"alu option0 c2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+56,"alu option0 c2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+57,"alu option0 c2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+59,"alu option0 c2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+60,"alu option0 c2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+58,"alu option0 c2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+61,"alu option0 c2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+62,"alu option0 c2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+60,"alu option0 c2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+61,"alu option0 c2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+63,"alu option0 c2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+64,"alu option0 c2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+62,"alu option0 c2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+65,"alu option0 c2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+66,"alu option0 c2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+64,"alu option0 c2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+65,"alu option0 c2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+67,"alu option0 c2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+68,"alu option0 c2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+66,"alu option0 c2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+69,"alu option0 c2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+70,"alu option0 c2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+68,"alu option0 c2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+69,"alu option0 c2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+71,"alu option0 c2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+72,"alu option0 c2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+70,"alu option0 c2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+73,"alu option0 c2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+74,"alu option0 c2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+72,"alu option0 c2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+73,"alu option0 c2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+75,"alu option0 c2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+76,"alu option0 c2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+74,"alu option0 c2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+77,"alu option0 c2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+78,"alu option0 c2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+76,"alu option0 c2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+77,"alu option0 c2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+79,"alu option0 c2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+80,"alu option0 c2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+78,"alu option0 c2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+81,"alu option0 c2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+82,"alu option0 c2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+80,"alu option0 c2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+81,"alu option0 c2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+83,"alu option0 c2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+84,"alu option0 c2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+82,"alu option0 c2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+85,"alu option0 c2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+86,"alu option0 c2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+84,"alu option0 c2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+85,"alu option0 c2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+87,"alu option0 c2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+88,"alu option0 c2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+86,"alu option0 c2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+89,"alu option0 c2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+90,"alu option0 c2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+88,"alu option0 c2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+89,"alu option0 c2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+91,"alu option0 c2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+92,"alu option0 c2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+90,"alu option0 c2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+93,"alu option0 c2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+94,"alu option0 c2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+92,"alu option0 c2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+93,"alu option0 c2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+95,"alu option0 c2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+96,"alu option0 c2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+94,"alu option0 c2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+97,"alu option0 c2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+98,"alu option0 c2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+96,"alu option0 c2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+97,"alu option0 c2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+99,"alu option0 c2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+100,"alu option0 c2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+98,"alu option0 c2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+101,"alu option0 c2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+102,"alu option0 c2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+100,"alu option0 c2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+101,"alu option0 c2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+103,"alu option0 c2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+104,"alu option0 c2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+102,"alu option0 c2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+105,"alu option0 c2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+106,"alu option0 c2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+104,"alu option0 c2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+105,"alu option0 c2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+107,"alu option0 c2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+108,"alu option0 c2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+106,"alu option0 c2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+109,"alu option0 c2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+110,"alu option0 c2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+108,"alu option0 c2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+109,"alu option0 c2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+111,"alu option0 c2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+112,"alu option0 c2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+110,"alu option0 c2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+113,"alu option0 c2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+52,"alu option0 c2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+112,"alu option0 c2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+113,"alu option0 c2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+52,"alu option0 c2 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+114,"alu option0 c3 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c3 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c3 c_in", false,-1);
        tracep->declBus(c+5,"alu option0 c3 sum", false,-1, 15,0);
        tracep->declBit(c+115,"alu option0 c3 c_out", false,-1);
        tracep->declBus(c+116,"alu option0 c3 carry", false,-1, 15,0);
        tracep->declBit(c+117,"alu option0 c3 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c3 first_add c_in", false,-1);
        tracep->declBit(c+1453,"alu option0 c3 first_add sum", false,-1);
        tracep->declBit(c+118,"alu option0 c3 first_add c_out", false,-1);
        tracep->declBit(c+117,"alu option0 c3 first_add half_sum1", false,-1);
        tracep->declBit(c+1453,"alu option0 c3 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 first_add carry1", false,-1);
        tracep->declBit(c+1454,"alu option0 c3 first_add carry2", false,-1);
        tracep->declBit(c+119,"alu option0 c3 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+118,"alu option0 c3 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+120,"alu option0 c3 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+121,"alu option0 c3 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+119,"alu option0 c3 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+120,"alu option0 c3 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+122,"alu option0 c3 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+123,"alu option0 c3 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+121,"alu option0 c3 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+124,"alu option0 c3 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+125,"alu option0 c3 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+123,"alu option0 c3 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+124,"alu option0 c3 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+126,"alu option0 c3 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+127,"alu option0 c3 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+125,"alu option0 c3 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+128,"alu option0 c3 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+129,"alu option0 c3 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+127,"alu option0 c3 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+128,"alu option0 c3 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+130,"alu option0 c3 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+131,"alu option0 c3 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+129,"alu option0 c3 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+132,"alu option0 c3 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+133,"alu option0 c3 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+131,"alu option0 c3 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+132,"alu option0 c3 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+134,"alu option0 c3 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+135,"alu option0 c3 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+133,"alu option0 c3 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+136,"alu option0 c3 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+137,"alu option0 c3 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+135,"alu option0 c3 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+136,"alu option0 c3 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+138,"alu option0 c3 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+139,"alu option0 c3 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+137,"alu option0 c3 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+140,"alu option0 c3 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+141,"alu option0 c3 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+139,"alu option0 c3 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+140,"alu option0 c3 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+142,"alu option0 c3 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+143,"alu option0 c3 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+141,"alu option0 c3 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+144,"alu option0 c3 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+145,"alu option0 c3 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+143,"alu option0 c3 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+144,"alu option0 c3 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+146,"alu option0 c3 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+147,"alu option0 c3 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+145,"alu option0 c3 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+148,"alu option0 c3 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+149,"alu option0 c3 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+147,"alu option0 c3 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+148,"alu option0 c3 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+150,"alu option0 c3 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+151,"alu option0 c3 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+149,"alu option0 c3 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+152,"alu option0 c3 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+153,"alu option0 c3 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+151,"alu option0 c3 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+152,"alu option0 c3 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+154,"alu option0 c3 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+155,"alu option0 c3 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+153,"alu option0 c3 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+156,"alu option0 c3 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+157,"alu option0 c3 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+155,"alu option0 c3 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+156,"alu option0 c3 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+158,"alu option0 c3 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+159,"alu option0 c3 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+157,"alu option0 c3 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+160,"alu option0 c3 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+161,"alu option0 c3 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+159,"alu option0 c3 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+160,"alu option0 c3 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+162,"alu option0 c3 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+163,"alu option0 c3 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+161,"alu option0 c3 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+164,"alu option0 c3 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+165,"alu option0 c3 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+163,"alu option0 c3 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+164,"alu option0 c3 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+166,"alu option0 c3 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+167,"alu option0 c3 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+165,"alu option0 c3 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+168,"alu option0 c3 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+169,"alu option0 c3 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+167,"alu option0 c3 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+168,"alu option0 c3 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+170,"alu option0 c3 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+171,"alu option0 c3 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+169,"alu option0 c3 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+172,"alu option0 c3 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+173,"alu option0 c3 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+171,"alu option0 c3 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+172,"alu option0 c3 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+174,"alu option0 c3 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+175,"alu option0 c3 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+173,"alu option0 c3 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+176,"alu option0 c3 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+115,"alu option0 c3 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+175,"alu option0 c3 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+176,"alu option0 c3 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c3 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+115,"alu option0 c3 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1672,"alu option0 c4 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c4 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c4 c_in", false,-1);
        tracep->declBus(c+6,"alu option0 c4 sum", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c4 c_out", false,-1);
        tracep->declBus(c+1455,"alu option0 c4 carry", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c4 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 first_add c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 first_add sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 first_add c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 first_add half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 first_add carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 first_add carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1457,"alu option0 c4 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1457,"alu option0 c4 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1673,"alu option0 c4 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1456,"alu option0 c4 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c4 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1389,"alu option0 c4 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+177,"alu option0 c5 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c5 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c5 c_in", false,-1);
        tracep->declBus(c+7,"alu option0 c5 sum", false,-1, 15,0);
        tracep->declBit(c+178,"alu option0 c5 c_out", false,-1);
        tracep->declBus(c+179,"alu option0 c5 carry", false,-1, 15,0);
        tracep->declBit(c+180,"alu option0 c5 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c5 first_add c_in", false,-1);
        tracep->declBit(c+1458,"alu option0 c5 first_add sum", false,-1);
        tracep->declBit(c+181,"alu option0 c5 first_add c_out", false,-1);
        tracep->declBit(c+180,"alu option0 c5 first_add half_sum1", false,-1);
        tracep->declBit(c+1458,"alu option0 c5 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 first_add carry1", false,-1);
        tracep->declBit(c+1459,"alu option0 c5 first_add carry2", false,-1);
        tracep->declBit(c+182,"alu option0 c5 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+181,"alu option0 c5 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+183,"alu option0 c5 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+184,"alu option0 c5 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+182,"alu option0 c5 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+183,"alu option0 c5 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+185,"alu option0 c5 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+186,"alu option0 c5 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+184,"alu option0 c5 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+187,"alu option0 c5 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+188,"alu option0 c5 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+186,"alu option0 c5 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+187,"alu option0 c5 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+189,"alu option0 c5 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+190,"alu option0 c5 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+188,"alu option0 c5 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+191,"alu option0 c5 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+192,"alu option0 c5 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+190,"alu option0 c5 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+191,"alu option0 c5 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+193,"alu option0 c5 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+194,"alu option0 c5 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+192,"alu option0 c5 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+195,"alu option0 c5 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+196,"alu option0 c5 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+194,"alu option0 c5 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+195,"alu option0 c5 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+197,"alu option0 c5 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+198,"alu option0 c5 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+196,"alu option0 c5 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+199,"alu option0 c5 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+200,"alu option0 c5 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+198,"alu option0 c5 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+199,"alu option0 c5 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+201,"alu option0 c5 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+202,"alu option0 c5 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+200,"alu option0 c5 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+203,"alu option0 c5 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+204,"alu option0 c5 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+202,"alu option0 c5 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+203,"alu option0 c5 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+205,"alu option0 c5 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+206,"alu option0 c5 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+204,"alu option0 c5 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+207,"alu option0 c5 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+208,"alu option0 c5 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+206,"alu option0 c5 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+207,"alu option0 c5 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+209,"alu option0 c5 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+210,"alu option0 c5 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+208,"alu option0 c5 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+211,"alu option0 c5 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+212,"alu option0 c5 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+210,"alu option0 c5 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+211,"alu option0 c5 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+213,"alu option0 c5 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+214,"alu option0 c5 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+212,"alu option0 c5 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+215,"alu option0 c5 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+216,"alu option0 c5 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+214,"alu option0 c5 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+215,"alu option0 c5 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+217,"alu option0 c5 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+218,"alu option0 c5 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+216,"alu option0 c5 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+219,"alu option0 c5 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+220,"alu option0 c5 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+218,"alu option0 c5 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+219,"alu option0 c5 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+221,"alu option0 c5 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+222,"alu option0 c5 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+220,"alu option0 c5 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+223,"alu option0 c5 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+224,"alu option0 c5 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+222,"alu option0 c5 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+223,"alu option0 c5 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+225,"alu option0 c5 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+226,"alu option0 c5 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+224,"alu option0 c5 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+227,"alu option0 c5 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+228,"alu option0 c5 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+226,"alu option0 c5 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+227,"alu option0 c5 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+229,"alu option0 c5 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+230,"alu option0 c5 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+228,"alu option0 c5 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+231,"alu option0 c5 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+232,"alu option0 c5 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+230,"alu option0 c5 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+231,"alu option0 c5 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+233,"alu option0 c5 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+234,"alu option0 c5 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+232,"alu option0 c5 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+235,"alu option0 c5 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+236,"alu option0 c5 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+234,"alu option0 c5 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+235,"alu option0 c5 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+237,"alu option0 c5 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+238,"alu option0 c5 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+236,"alu option0 c5 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+239,"alu option0 c5 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+178,"alu option0 c5 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+238,"alu option0 c5 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+239,"alu option0 c5 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c5 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+178,"alu option0 c5 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+240,"alu option0 c6 a_in", false,-1, 15,0);
        tracep->declBus(c+241,"alu option0 c6 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c6 c_in", false,-1);
        tracep->declBus(c+8,"alu option0 c6 sum", false,-1, 15,0);
        tracep->declBit(c+242,"alu option0 c6 c_out", false,-1);
        tracep->declBus(c+243,"alu option0 c6 carry", false,-1, 15,0);
        tracep->declBit(c+244,"alu option0 c6 first_add a_in", false,-1);
        tracep->declBit(c+245,"alu option0 c6 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c6 first_add c_in", false,-1);
        tracep->declBit(c+1460,"alu option0 c6 first_add sum", false,-1);
        tracep->declBit(c+246,"alu option0 c6 first_add c_out", false,-1);
        tracep->declBit(c+247,"alu option0 c6 first_add half_sum1", false,-1);
        tracep->declBit(c+1460,"alu option0 c6 first_add half_sum2", false,-1);
        tracep->declBit(c+248,"alu option0 c6 first_add carry1", false,-1);
        tracep->declBit(c+1461,"alu option0 c6 first_add carry2", false,-1);
        tracep->declBit(c+249,"alu option0 c6 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+250,"alu option0 c6 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+246,"alu option0 c6 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+251,"alu option0 c6 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+252,"alu option0 c6 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+253,"alu option0 c6 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+251,"alu option0 c6 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+254,"alu option0 c6 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+255,"alu option0 c6 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+256,"alu option0 c6 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+257,"alu option0 c6 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+252,"alu option0 c6 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+258,"alu option0 c6 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+259,"alu option0 c6 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+260,"alu option0 c6 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+258,"alu option0 c6 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+261,"alu option0 c6 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+262,"alu option0 c6 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+263,"alu option0 c6 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+264,"alu option0 c6 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+259,"alu option0 c6 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+265,"alu option0 c6 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+266,"alu option0 c6 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+267,"alu option0 c6 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+265,"alu option0 c6 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+268,"alu option0 c6 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+269,"alu option0 c6 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+270,"alu option0 c6 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+271,"alu option0 c6 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+266,"alu option0 c6 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+272,"alu option0 c6 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+273,"alu option0 c6 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+274,"alu option0 c6 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+272,"alu option0 c6 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+275,"alu option0 c6 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+276,"alu option0 c6 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+277,"alu option0 c6 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+278,"alu option0 c6 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+273,"alu option0 c6 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+279,"alu option0 c6 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+280,"alu option0 c6 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+281,"alu option0 c6 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+279,"alu option0 c6 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+282,"alu option0 c6 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+283,"alu option0 c6 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+284,"alu option0 c6 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+285,"alu option0 c6 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+280,"alu option0 c6 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+286,"alu option0 c6 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+287,"alu option0 c6 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+288,"alu option0 c6 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+286,"alu option0 c6 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+289,"alu option0 c6 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+290,"alu option0 c6 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+291,"alu option0 c6 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+292,"alu option0 c6 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+287,"alu option0 c6 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+293,"alu option0 c6 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+294,"alu option0 c6 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+295,"alu option0 c6 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+293,"alu option0 c6 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+296,"alu option0 c6 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+297,"alu option0 c6 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+298,"alu option0 c6 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+299,"alu option0 c6 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+294,"alu option0 c6 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+300,"alu option0 c6 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+301,"alu option0 c6 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+302,"alu option0 c6 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+300,"alu option0 c6 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+303,"alu option0 c6 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+304,"alu option0 c6 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+305,"alu option0 c6 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+306,"alu option0 c6 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+301,"alu option0 c6 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+307,"alu option0 c6 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+308,"alu option0 c6 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+309,"alu option0 c6 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+307,"alu option0 c6 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+310,"alu option0 c6 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+311,"alu option0 c6 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+312,"alu option0 c6 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+313,"alu option0 c6 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+308,"alu option0 c6 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+314,"alu option0 c6 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+315,"alu option0 c6 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+316,"alu option0 c6 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+314,"alu option0 c6 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+317,"alu option0 c6 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+318,"alu option0 c6 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+319,"alu option0 c6 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+320,"alu option0 c6 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+315,"alu option0 c6 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+321,"alu option0 c6 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+322,"alu option0 c6 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+323,"alu option0 c6 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+321,"alu option0 c6 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+324,"alu option0 c6 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+325,"alu option0 c6 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+326,"alu option0 c6 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+327,"alu option0 c6 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+322,"alu option0 c6 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+328,"alu option0 c6 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+329,"alu option0 c6 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+330,"alu option0 c6 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+328,"alu option0 c6 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+331,"alu option0 c6 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+332,"alu option0 c6 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+333,"alu option0 c6 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+334,"alu option0 c6 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+329,"alu option0 c6 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+335,"alu option0 c6 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+336,"alu option0 c6 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+337,"alu option0 c6 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+335,"alu option0 c6 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+338,"alu option0 c6 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+339,"alu option0 c6 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+340,"alu option0 c6 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+341,"alu option0 c6 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+336,"alu option0 c6 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+342,"alu option0 c6 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+343,"alu option0 c6 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+344,"alu option0 c6 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+342,"alu option0 c6 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+345,"alu option0 c6 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+346,"alu option0 c6 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+347,"alu option0 c6 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+348,"alu option0 c6 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+343,"alu option0 c6 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+349,"alu option0 c6 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+242,"alu option0 c6 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+350,"alu option0 c6 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+349,"alu option0 c6 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+351,"alu option0 c6 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+352,"alu option0 c6 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c9 a_in", false,-1, 15,0);
        tracep->declBus(c+353,"alu option0 c9 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c9 c_in", false,-1);
        tracep->declBus(c+11,"alu option0 c9 sum", false,-1, 15,0);
        tracep->declBit(c+1462,"alu option0 c9 c_out", false,-1);
        tracep->declBus(c+1463,"alu option0 c9 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c9 first_add a_in", false,-1);
        tracep->declBit(c+354,"alu option0 c9 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c9 first_add c_in", false,-1);
        tracep->declBit(c+1464,"alu option0 c9 first_add sum", false,-1);
        tracep->declBit(c+355,"alu option0 c9 first_add c_out", false,-1);
        tracep->declBit(c+356,"alu option0 c9 first_add half_sum1", false,-1);
        tracep->declBit(c+1464,"alu option0 c9 first_add half_sum2", false,-1);
        tracep->declBit(c+1465,"alu option0 c9 first_add carry1", false,-1);
        tracep->declBit(c+1466,"alu option0 c9 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c9 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+357,"alu option0 c9 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+355,"alu option0 c9 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+358,"alu option0 c9 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+359,"alu option0 c9 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+360,"alu option0 c9 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+358,"alu option0 c9 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1467,"alu option0 c9 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+361,"alu option0 c9 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c9 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+362,"alu option0 c9 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+359,"alu option0 c9 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+363,"alu option0 c9 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+364,"alu option0 c9 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+365,"alu option0 c9 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+363,"alu option0 c9 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1468,"alu option0 c9 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+366,"alu option0 c9 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c9 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+367,"alu option0 c9 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+364,"alu option0 c9 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+368,"alu option0 c9 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+369,"alu option0 c9 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+370,"alu option0 c9 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+368,"alu option0 c9 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1469,"alu option0 c9 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+371,"alu option0 c9 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c9 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+372,"alu option0 c9 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+369,"alu option0 c9 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+373,"alu option0 c9 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+374,"alu option0 c9 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+375,"alu option0 c9 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+373,"alu option0 c9 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1470,"alu option0 c9 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+376,"alu option0 c9 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c9 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+377,"alu option0 c9 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+374,"alu option0 c9 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+378,"alu option0 c9 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+379,"alu option0 c9 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+380,"alu option0 c9 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+378,"alu option0 c9 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1471,"alu option0 c9 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+381,"alu option0 c9 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c9 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+382,"alu option0 c9 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+379,"alu option0 c9 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+383,"alu option0 c9 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+384,"alu option0 c9 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+385,"alu option0 c9 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+383,"alu option0 c9 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1472,"alu option0 c9 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+386,"alu option0 c9 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c9 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+387,"alu option0 c9 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+384,"alu option0 c9 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+388,"alu option0 c9 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+389,"alu option0 c9 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+390,"alu option0 c9 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+388,"alu option0 c9 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1473,"alu option0 c9 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+391,"alu option0 c9 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c9 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+392,"alu option0 c9 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+389,"alu option0 c9 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+393,"alu option0 c9 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+394,"alu option0 c9 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+395,"alu option0 c9 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+393,"alu option0 c9 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1474,"alu option0 c9 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+396,"alu option0 c9 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c9 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+397,"alu option0 c9 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+394,"alu option0 c9 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+398,"alu option0 c9 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+399,"alu option0 c9 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+400,"alu option0 c9 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+398,"alu option0 c9 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1475,"alu option0 c9 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+401,"alu option0 c9 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c9 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+402,"alu option0 c9 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+399,"alu option0 c9 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+403,"alu option0 c9 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+404,"alu option0 c9 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+405,"alu option0 c9 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+403,"alu option0 c9 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1476,"alu option0 c9 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+406,"alu option0 c9 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c9 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+407,"alu option0 c9 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+404,"alu option0 c9 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+408,"alu option0 c9 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+409,"alu option0 c9 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+410,"alu option0 c9 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+408,"alu option0 c9 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1477,"alu option0 c9 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+411,"alu option0 c9 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c9 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+412,"alu option0 c9 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+409,"alu option0 c9 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+413,"alu option0 c9 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+414,"alu option0 c9 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+415,"alu option0 c9 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+413,"alu option0 c9 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1478,"alu option0 c9 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+416,"alu option0 c9 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c9 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+417,"alu option0 c9 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+414,"alu option0 c9 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+418,"alu option0 c9 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+419,"alu option0 c9 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+420,"alu option0 c9 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+418,"alu option0 c9 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1479,"alu option0 c9 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+421,"alu option0 c9 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c9 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+422,"alu option0 c9 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+419,"alu option0 c9 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+423,"alu option0 c9 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+424,"alu option0 c9 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+425,"alu option0 c9 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+423,"alu option0 c9 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1480,"alu option0 c9 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+426,"alu option0 c9 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c9 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+427,"alu option0 c9 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+424,"alu option0 c9 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+428,"alu option0 c9 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1462,"alu option0 c9 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+429,"alu option0 c9 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+428,"alu option0 c9 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1481,"alu option0 c9 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+430,"alu option0 c9 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c10 a_in", false,-1, 15,0);
        tracep->declBus(c+1391,"alu option0 c10 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c10 c_in", false,-1);
        tracep->declBus(c+12,"alu option0 c10 sum", false,-1, 15,0);
        tracep->declBit(c+1482,"alu option0 c10 c_out", false,-1);
        tracep->declBus(c+1483,"alu option0 c10 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c10 first_add a_in", false,-1);
        tracep->declBit(c+1484,"alu option0 c10 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c10 first_add c_in", false,-1);
        tracep->declBit(c+1485,"alu option0 c10 first_add sum", false,-1);
        tracep->declBit(c+431,"alu option0 c10 first_add c_out", false,-1);
        tracep->declBit(c+432,"alu option0 c10 first_add half_sum1", false,-1);
        tracep->declBit(c+1485,"alu option0 c10 first_add half_sum2", false,-1);
        tracep->declBit(c+1486,"alu option0 c10 first_add carry1", false,-1);
        tracep->declBit(c+1487,"alu option0 c10 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c10 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1488,"alu option0 c10 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+431,"alu option0 c10 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+433,"alu option0 c10 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+434,"alu option0 c10 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+435,"alu option0 c10 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+433,"alu option0 c10 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1489,"alu option0 c10 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+436,"alu option0 c10 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c10 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1490,"alu option0 c10 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+434,"alu option0 c10 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+437,"alu option0 c10 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+438,"alu option0 c10 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+439,"alu option0 c10 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+437,"alu option0 c10 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1491,"alu option0 c10 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+440,"alu option0 c10 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c10 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1492,"alu option0 c10 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+438,"alu option0 c10 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+441,"alu option0 c10 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+442,"alu option0 c10 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+443,"alu option0 c10 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+441,"alu option0 c10 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1493,"alu option0 c10 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+444,"alu option0 c10 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c10 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1494,"alu option0 c10 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+442,"alu option0 c10 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+445,"alu option0 c10 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+446,"alu option0 c10 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+447,"alu option0 c10 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+445,"alu option0 c10 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1495,"alu option0 c10 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+448,"alu option0 c10 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c10 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1496,"alu option0 c10 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+446,"alu option0 c10 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+449,"alu option0 c10 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+450,"alu option0 c10 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+451,"alu option0 c10 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+449,"alu option0 c10 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1497,"alu option0 c10 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+452,"alu option0 c10 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c10 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1498,"alu option0 c10 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+450,"alu option0 c10 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+453,"alu option0 c10 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+454,"alu option0 c10 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+455,"alu option0 c10 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+453,"alu option0 c10 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1499,"alu option0 c10 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+456,"alu option0 c10 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c10 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1500,"alu option0 c10 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+454,"alu option0 c10 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+457,"alu option0 c10 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+458,"alu option0 c10 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+459,"alu option0 c10 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+457,"alu option0 c10 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1501,"alu option0 c10 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+460,"alu option0 c10 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c10 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1502,"alu option0 c10 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+458,"alu option0 c10 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+461,"alu option0 c10 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+462,"alu option0 c10 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+463,"alu option0 c10 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+461,"alu option0 c10 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1503,"alu option0 c10 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+464,"alu option0 c10 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c10 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1504,"alu option0 c10 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+462,"alu option0 c10 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+465,"alu option0 c10 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+466,"alu option0 c10 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+467,"alu option0 c10 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+465,"alu option0 c10 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1505,"alu option0 c10 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+468,"alu option0 c10 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c10 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1506,"alu option0 c10 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+466,"alu option0 c10 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+469,"alu option0 c10 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+470,"alu option0 c10 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+471,"alu option0 c10 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+469,"alu option0 c10 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1507,"alu option0 c10 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+472,"alu option0 c10 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c10 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1508,"alu option0 c10 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+470,"alu option0 c10 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+473,"alu option0 c10 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+474,"alu option0 c10 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+475,"alu option0 c10 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+473,"alu option0 c10 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1509,"alu option0 c10 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+476,"alu option0 c10 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c10 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1510,"alu option0 c10 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+474,"alu option0 c10 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+477,"alu option0 c10 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+478,"alu option0 c10 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+479,"alu option0 c10 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+477,"alu option0 c10 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1511,"alu option0 c10 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+480,"alu option0 c10 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c10 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1512,"alu option0 c10 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+478,"alu option0 c10 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+481,"alu option0 c10 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+482,"alu option0 c10 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+483,"alu option0 c10 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+481,"alu option0 c10 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1513,"alu option0 c10 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+484,"alu option0 c10 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c10 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1514,"alu option0 c10 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+482,"alu option0 c10 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+485,"alu option0 c10 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+486,"alu option0 c10 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+487,"alu option0 c10 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+485,"alu option0 c10 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1515,"alu option0 c10 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+488,"alu option0 c10 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c10 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1516,"alu option0 c10 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+486,"alu option0 c10 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+489,"alu option0 c10 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1482,"alu option0 c10 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+490,"alu option0 c10 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+489,"alu option0 c10 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1517,"alu option0 c10 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+491,"alu option0 c10 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+492,"alu option0 c11 a_in", false,-1, 15,0);
        tracep->declBus(c+493,"alu option0 c11 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c11 c_in", false,-1);
        tracep->declBus(c+13,"alu option0 c11 sum", false,-1, 15,0);
        tracep->declBit(c+494,"alu option0 c11 c_out", false,-1);
        tracep->declBus(c+495,"alu option0 c11 carry", false,-1, 15,0);
        tracep->declBit(c+496,"alu option0 c11 first_add a_in", false,-1);
        tracep->declBit(c+497,"alu option0 c11 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c11 first_add c_in", false,-1);
        tracep->declBit(c+1518,"alu option0 c11 first_add sum", false,-1);
        tracep->declBit(c+498,"alu option0 c11 first_add c_out", false,-1);
        tracep->declBit(c+499,"alu option0 c11 first_add half_sum1", false,-1);
        tracep->declBit(c+1518,"alu option0 c11 first_add half_sum2", false,-1);
        tracep->declBit(c+500,"alu option0 c11 first_add carry1", false,-1);
        tracep->declBit(c+1519,"alu option0 c11 first_add carry2", false,-1);
        tracep->declBit(c+501,"alu option0 c11 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+502,"alu option0 c11 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+498,"alu option0 c11 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+503,"alu option0 c11 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+504,"alu option0 c11 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+505,"alu option0 c11 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+503,"alu option0 c11 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+506,"alu option0 c11 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+507,"alu option0 c11 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+508,"alu option0 c11 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+509,"alu option0 c11 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+504,"alu option0 c11 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+510,"alu option0 c11 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+511,"alu option0 c11 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+512,"alu option0 c11 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+510,"alu option0 c11 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+513,"alu option0 c11 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+514,"alu option0 c11 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+515,"alu option0 c11 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+516,"alu option0 c11 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+511,"alu option0 c11 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+517,"alu option0 c11 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+518,"alu option0 c11 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+519,"alu option0 c11 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+517,"alu option0 c11 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+520,"alu option0 c11 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+521,"alu option0 c11 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+522,"alu option0 c11 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+523,"alu option0 c11 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+518,"alu option0 c11 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+524,"alu option0 c11 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+525,"alu option0 c11 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+526,"alu option0 c11 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+524,"alu option0 c11 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+527,"alu option0 c11 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+528,"alu option0 c11 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+529,"alu option0 c11 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+530,"alu option0 c11 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+525,"alu option0 c11 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+531,"alu option0 c11 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+532,"alu option0 c11 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+533,"alu option0 c11 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+531,"alu option0 c11 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+534,"alu option0 c11 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+535,"alu option0 c11 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+536,"alu option0 c11 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+537,"alu option0 c11 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+532,"alu option0 c11 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+538,"alu option0 c11 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+539,"alu option0 c11 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+540,"alu option0 c11 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+538,"alu option0 c11 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+541,"alu option0 c11 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+542,"alu option0 c11 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+543,"alu option0 c11 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+544,"alu option0 c11 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+539,"alu option0 c11 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+545,"alu option0 c11 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+546,"alu option0 c11 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+547,"alu option0 c11 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+545,"alu option0 c11 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+548,"alu option0 c11 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+549,"alu option0 c11 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+550,"alu option0 c11 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+551,"alu option0 c11 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+546,"alu option0 c11 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+552,"alu option0 c11 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+553,"alu option0 c11 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+554,"alu option0 c11 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+552,"alu option0 c11 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+555,"alu option0 c11 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+556,"alu option0 c11 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+557,"alu option0 c11 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+558,"alu option0 c11 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+553,"alu option0 c11 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+559,"alu option0 c11 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+560,"alu option0 c11 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+561,"alu option0 c11 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+559,"alu option0 c11 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+562,"alu option0 c11 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+563,"alu option0 c11 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+564,"alu option0 c11 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+565,"alu option0 c11 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+560,"alu option0 c11 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+566,"alu option0 c11 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+567,"alu option0 c11 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+568,"alu option0 c11 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+566,"alu option0 c11 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+569,"alu option0 c11 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+570,"alu option0 c11 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+571,"alu option0 c11 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+572,"alu option0 c11 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+567,"alu option0 c11 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+573,"alu option0 c11 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+574,"alu option0 c11 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+575,"alu option0 c11 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+573,"alu option0 c11 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+576,"alu option0 c11 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+577,"alu option0 c11 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+578,"alu option0 c11 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+579,"alu option0 c11 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+574,"alu option0 c11 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+580,"alu option0 c11 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+581,"alu option0 c11 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+582,"alu option0 c11 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+580,"alu option0 c11 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+583,"alu option0 c11 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+584,"alu option0 c11 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+585,"alu option0 c11 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+586,"alu option0 c11 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+581,"alu option0 c11 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+587,"alu option0 c11 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+588,"alu option0 c11 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+589,"alu option0 c11 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+587,"alu option0 c11 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+590,"alu option0 c11 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+591,"alu option0 c11 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+592,"alu option0 c11 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+593,"alu option0 c11 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+588,"alu option0 c11 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+594,"alu option0 c11 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+595,"alu option0 c11 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+596,"alu option0 c11 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+594,"alu option0 c11 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+597,"alu option0 c11 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+598,"alu option0 c11 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+599,"alu option0 c11 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+600,"alu option0 c11 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+595,"alu option0 c11 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+601,"alu option0 c11 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+494,"alu option0 c11 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+602,"alu option0 c11 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+601,"alu option0 c11 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+603,"alu option0 c11 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+604,"alu option0 c11 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c13 a_in", false,-1, 15,0);
        tracep->declBus(c+1390,"alu option0 c13 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c13 c_in", false,-1);
        tracep->declBus(c+15,"alu option0 c13 sum", false,-1, 15,0);
        tracep->declBit(c+1520,"alu option0 c13 c_out", false,-1);
        tracep->declBus(c+1521,"alu option0 c13 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c13 first_add a_in", false,-1);
        tracep->declBit(c+1404,"alu option0 c13 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c13 first_add c_in", false,-1);
        tracep->declBit(c+1522,"alu option0 c13 first_add sum", false,-1);
        tracep->declBit(c+605,"alu option0 c13 first_add c_out", false,-1);
        tracep->declBit(c+606,"alu option0 c13 first_add half_sum1", false,-1);
        tracep->declBit(c+1522,"alu option0 c13 first_add half_sum2", false,-1);
        tracep->declBit(c+1523,"alu option0 c13 first_add carry1", false,-1);
        tracep->declBit(c+1524,"alu option0 c13 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c13 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1407,"alu option0 c13 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+605,"alu option0 c13 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+607,"alu option0 c13 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+608,"alu option0 c13 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+609,"alu option0 c13 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+607,"alu option0 c13 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1525,"alu option0 c13 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+610,"alu option0 c13 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c13 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1410,"alu option0 c13 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+608,"alu option0 c13 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+611,"alu option0 c13 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+612,"alu option0 c13 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+613,"alu option0 c13 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+611,"alu option0 c13 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1526,"alu option0 c13 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+614,"alu option0 c13 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c13 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1413,"alu option0 c13 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+612,"alu option0 c13 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+615,"alu option0 c13 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+616,"alu option0 c13 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+617,"alu option0 c13 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+615,"alu option0 c13 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1527,"alu option0 c13 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+618,"alu option0 c13 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c13 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1416,"alu option0 c13 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+616,"alu option0 c13 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+619,"alu option0 c13 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+620,"alu option0 c13 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+621,"alu option0 c13 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+619,"alu option0 c13 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1528,"alu option0 c13 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+622,"alu option0 c13 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c13 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1419,"alu option0 c13 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+620,"alu option0 c13 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+623,"alu option0 c13 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+624,"alu option0 c13 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+625,"alu option0 c13 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+623,"alu option0 c13 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1529,"alu option0 c13 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+626,"alu option0 c13 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c13 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1422,"alu option0 c13 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+624,"alu option0 c13 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+627,"alu option0 c13 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+628,"alu option0 c13 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+629,"alu option0 c13 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+627,"alu option0 c13 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1530,"alu option0 c13 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+630,"alu option0 c13 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c13 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1425,"alu option0 c13 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+628,"alu option0 c13 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+631,"alu option0 c13 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+632,"alu option0 c13 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+633,"alu option0 c13 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+631,"alu option0 c13 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1531,"alu option0 c13 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+634,"alu option0 c13 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c13 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1428,"alu option0 c13 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+632,"alu option0 c13 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+635,"alu option0 c13 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+636,"alu option0 c13 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+637,"alu option0 c13 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+635,"alu option0 c13 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1532,"alu option0 c13 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+638,"alu option0 c13 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c13 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1431,"alu option0 c13 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+636,"alu option0 c13 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+639,"alu option0 c13 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+640,"alu option0 c13 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+641,"alu option0 c13 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+639,"alu option0 c13 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1533,"alu option0 c13 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+642,"alu option0 c13 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c13 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1434,"alu option0 c13 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+640,"alu option0 c13 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+643,"alu option0 c13 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+644,"alu option0 c13 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+645,"alu option0 c13 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+643,"alu option0 c13 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1534,"alu option0 c13 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+646,"alu option0 c13 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c13 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1437,"alu option0 c13 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+644,"alu option0 c13 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+647,"alu option0 c13 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+648,"alu option0 c13 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+649,"alu option0 c13 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+647,"alu option0 c13 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1535,"alu option0 c13 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+650,"alu option0 c13 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c13 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1440,"alu option0 c13 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+648,"alu option0 c13 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+651,"alu option0 c13 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+652,"alu option0 c13 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+653,"alu option0 c13 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+651,"alu option0 c13 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1536,"alu option0 c13 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+654,"alu option0 c13 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c13 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1443,"alu option0 c13 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+652,"alu option0 c13 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+655,"alu option0 c13 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+656,"alu option0 c13 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+657,"alu option0 c13 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+655,"alu option0 c13 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1537,"alu option0 c13 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+658,"alu option0 c13 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c13 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1446,"alu option0 c13 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+656,"alu option0 c13 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+659,"alu option0 c13 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+660,"alu option0 c13 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+661,"alu option0 c13 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+659,"alu option0 c13 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1538,"alu option0 c13 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+662,"alu option0 c13 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c13 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1449,"alu option0 c13 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+660,"alu option0 c13 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+663,"alu option0 c13 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1520,"alu option0 c13 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+664,"alu option0 c13 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+663,"alu option0 c13 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1539,"alu option0 c13 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+665,"alu option0 c13 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+666,"alu option0 c14 a_in", false,-1, 15,0);
        tracep->declBus(c+1390,"alu option0 c14 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c14 c_in", false,-1);
        tracep->declBus(c+16,"alu option0 c14 sum", false,-1, 15,0);
        tracep->declBit(c+1540,"alu option0 c14 c_out", false,-1);
        tracep->declBus(c+1541,"alu option0 c14 carry", false,-1, 15,0);
        tracep->declBit(c+667,"alu option0 c14 first_add a_in", false,-1);
        tracep->declBit(c+1404,"alu option0 c14 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c14 first_add c_in", false,-1);
        tracep->declBit(c+1542,"alu option0 c14 first_add sum", false,-1);
        tracep->declBit(c+668,"alu option0 c14 first_add c_out", false,-1);
        tracep->declBit(c+669,"alu option0 c14 first_add half_sum1", false,-1);
        tracep->declBit(c+1542,"alu option0 c14 first_add half_sum2", false,-1);
        tracep->declBit(c+1543,"alu option0 c14 first_add carry1", false,-1);
        tracep->declBit(c+1544,"alu option0 c14 first_add carry2", false,-1);
        tracep->declBit(c+670,"alu option0 c14 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1407,"alu option0 c14 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+668,"alu option0 c14 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+671,"alu option0 c14 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+672,"alu option0 c14 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+673,"alu option0 c14 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+671,"alu option0 c14 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1545,"alu option0 c14 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+674,"alu option0 c14 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+675,"alu option0 c14 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1410,"alu option0 c14 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+672,"alu option0 c14 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+676,"alu option0 c14 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+677,"alu option0 c14 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+678,"alu option0 c14 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+676,"alu option0 c14 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1546,"alu option0 c14 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+679,"alu option0 c14 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+680,"alu option0 c14 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1413,"alu option0 c14 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+677,"alu option0 c14 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+681,"alu option0 c14 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+682,"alu option0 c14 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+683,"alu option0 c14 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+681,"alu option0 c14 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1547,"alu option0 c14 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+684,"alu option0 c14 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+685,"alu option0 c14 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1416,"alu option0 c14 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+682,"alu option0 c14 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+686,"alu option0 c14 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+687,"alu option0 c14 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+688,"alu option0 c14 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+686,"alu option0 c14 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1548,"alu option0 c14 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+689,"alu option0 c14 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+690,"alu option0 c14 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1419,"alu option0 c14 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+687,"alu option0 c14 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+691,"alu option0 c14 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+692,"alu option0 c14 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+693,"alu option0 c14 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+691,"alu option0 c14 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1549,"alu option0 c14 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+694,"alu option0 c14 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+695,"alu option0 c14 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1422,"alu option0 c14 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+692,"alu option0 c14 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+696,"alu option0 c14 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+697,"alu option0 c14 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+698,"alu option0 c14 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+696,"alu option0 c14 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1550,"alu option0 c14 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+699,"alu option0 c14 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+700,"alu option0 c14 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1425,"alu option0 c14 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+697,"alu option0 c14 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+701,"alu option0 c14 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+702,"alu option0 c14 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+703,"alu option0 c14 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+701,"alu option0 c14 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1551,"alu option0 c14 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+704,"alu option0 c14 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+705,"alu option0 c14 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1428,"alu option0 c14 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+702,"alu option0 c14 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+706,"alu option0 c14 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+707,"alu option0 c14 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+708,"alu option0 c14 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+706,"alu option0 c14 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1552,"alu option0 c14 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+709,"alu option0 c14 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+710,"alu option0 c14 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1431,"alu option0 c14 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+707,"alu option0 c14 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+711,"alu option0 c14 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+712,"alu option0 c14 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+713,"alu option0 c14 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+711,"alu option0 c14 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1553,"alu option0 c14 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+714,"alu option0 c14 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+715,"alu option0 c14 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1434,"alu option0 c14 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+712,"alu option0 c14 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+716,"alu option0 c14 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+717,"alu option0 c14 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+718,"alu option0 c14 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+716,"alu option0 c14 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1554,"alu option0 c14 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+719,"alu option0 c14 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+720,"alu option0 c14 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1437,"alu option0 c14 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+717,"alu option0 c14 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+721,"alu option0 c14 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+722,"alu option0 c14 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+723,"alu option0 c14 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+721,"alu option0 c14 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1555,"alu option0 c14 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+724,"alu option0 c14 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+725,"alu option0 c14 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1440,"alu option0 c14 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+722,"alu option0 c14 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+726,"alu option0 c14 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+727,"alu option0 c14 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+728,"alu option0 c14 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+726,"alu option0 c14 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1556,"alu option0 c14 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+729,"alu option0 c14 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+730,"alu option0 c14 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1443,"alu option0 c14 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+727,"alu option0 c14 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+731,"alu option0 c14 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+732,"alu option0 c14 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+733,"alu option0 c14 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+731,"alu option0 c14 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1557,"alu option0 c14 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+734,"alu option0 c14 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+735,"alu option0 c14 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1446,"alu option0 c14 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+732,"alu option0 c14 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+736,"alu option0 c14 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+737,"alu option0 c14 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+738,"alu option0 c14 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+736,"alu option0 c14 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1558,"alu option0 c14 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+739,"alu option0 c14 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+740,"alu option0 c14 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1449,"alu option0 c14 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+737,"alu option0 c14 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+741,"alu option0 c14 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1540,"alu option0 c14 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+742,"alu option0 c14 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+741,"alu option0 c14 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1559,"alu option0 c14 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+743,"alu option0 c14 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+744,"alu option0 c15 a_in", false,-1, 15,0);
        tracep->declBus(c+1390,"alu option0 c15 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c15 c_in", false,-1);
        tracep->declBus(c+17,"alu option0 c15 sum", false,-1, 15,0);
        tracep->declBit(c+1560,"alu option0 c15 c_out", false,-1);
        tracep->declBus(c+1561,"alu option0 c15 carry", false,-1, 15,0);
        tracep->declBit(c+745,"alu option0 c15 first_add a_in", false,-1);
        tracep->declBit(c+1404,"alu option0 c15 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c15 first_add c_in", false,-1);
        tracep->declBit(c+1562,"alu option0 c15 first_add sum", false,-1);
        tracep->declBit(c+746,"alu option0 c15 first_add c_out", false,-1);
        tracep->declBit(c+747,"alu option0 c15 first_add half_sum1", false,-1);
        tracep->declBit(c+1562,"alu option0 c15 first_add half_sum2", false,-1);
        tracep->declBit(c+1563,"alu option0 c15 first_add carry1", false,-1);
        tracep->declBit(c+1564,"alu option0 c15 first_add carry2", false,-1);
        tracep->declBit(c+748,"alu option0 c15 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1407,"alu option0 c15 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+746,"alu option0 c15 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+749,"alu option0 c15 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+750,"alu option0 c15 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+751,"alu option0 c15 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+749,"alu option0 c15 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1565,"alu option0 c15 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+752,"alu option0 c15 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+753,"alu option0 c15 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1410,"alu option0 c15 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+750,"alu option0 c15 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+754,"alu option0 c15 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+755,"alu option0 c15 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+756,"alu option0 c15 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+754,"alu option0 c15 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1566,"alu option0 c15 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+757,"alu option0 c15 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+758,"alu option0 c15 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1413,"alu option0 c15 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+755,"alu option0 c15 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+759,"alu option0 c15 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+760,"alu option0 c15 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+761,"alu option0 c15 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+759,"alu option0 c15 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1567,"alu option0 c15 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+762,"alu option0 c15 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+763,"alu option0 c15 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1416,"alu option0 c15 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+760,"alu option0 c15 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+764,"alu option0 c15 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+765,"alu option0 c15 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+766,"alu option0 c15 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+764,"alu option0 c15 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1568,"alu option0 c15 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+767,"alu option0 c15 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+768,"alu option0 c15 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1419,"alu option0 c15 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+765,"alu option0 c15 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+769,"alu option0 c15 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+770,"alu option0 c15 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+771,"alu option0 c15 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+769,"alu option0 c15 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1569,"alu option0 c15 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+772,"alu option0 c15 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+773,"alu option0 c15 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1422,"alu option0 c15 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+770,"alu option0 c15 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+774,"alu option0 c15 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+775,"alu option0 c15 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+776,"alu option0 c15 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+774,"alu option0 c15 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1570,"alu option0 c15 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+777,"alu option0 c15 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+778,"alu option0 c15 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1425,"alu option0 c15 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+775,"alu option0 c15 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+779,"alu option0 c15 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+780,"alu option0 c15 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+781,"alu option0 c15 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+779,"alu option0 c15 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1571,"alu option0 c15 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+782,"alu option0 c15 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+783,"alu option0 c15 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1428,"alu option0 c15 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+780,"alu option0 c15 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+784,"alu option0 c15 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+785,"alu option0 c15 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+786,"alu option0 c15 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+784,"alu option0 c15 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1572,"alu option0 c15 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+787,"alu option0 c15 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+788,"alu option0 c15 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1431,"alu option0 c15 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+785,"alu option0 c15 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+789,"alu option0 c15 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+790,"alu option0 c15 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+791,"alu option0 c15 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+789,"alu option0 c15 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1573,"alu option0 c15 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+792,"alu option0 c15 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+793,"alu option0 c15 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1434,"alu option0 c15 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+790,"alu option0 c15 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+794,"alu option0 c15 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+795,"alu option0 c15 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+796,"alu option0 c15 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+794,"alu option0 c15 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1574,"alu option0 c15 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+797,"alu option0 c15 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+798,"alu option0 c15 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1437,"alu option0 c15 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+795,"alu option0 c15 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+799,"alu option0 c15 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+800,"alu option0 c15 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+801,"alu option0 c15 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+799,"alu option0 c15 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1575,"alu option0 c15 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+802,"alu option0 c15 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+803,"alu option0 c15 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1440,"alu option0 c15 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+800,"alu option0 c15 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+804,"alu option0 c15 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+805,"alu option0 c15 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+806,"alu option0 c15 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+804,"alu option0 c15 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1576,"alu option0 c15 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+807,"alu option0 c15 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+808,"alu option0 c15 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1443,"alu option0 c15 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+805,"alu option0 c15 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+809,"alu option0 c15 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+810,"alu option0 c15 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+811,"alu option0 c15 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+809,"alu option0 c15 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1577,"alu option0 c15 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+812,"alu option0 c15 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+813,"alu option0 c15 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1446,"alu option0 c15 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+810,"alu option0 c15 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+814,"alu option0 c15 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+815,"alu option0 c15 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+816,"alu option0 c15 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+814,"alu option0 c15 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1578,"alu option0 c15 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+817,"alu option0 c15 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+818,"alu option0 c15 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1449,"alu option0 c15 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+815,"alu option0 c15 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+819,"alu option0 c15 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1560,"alu option0 c15 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+820,"alu option0 c15 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+819,"alu option0 c15 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1579,"alu option0 c15 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+821,"alu option0 c15 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c7p1 m1 a_in", false,-1, 15,0);
        tracep->declBus(c+1580,"alu option0 c7p1 m1 b_in", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c7p1 m1 c_in", false,-1);
        tracep->declBus(c+21,"alu option0 c7p1 m1 sum", false,-1, 15,0);
        tracep->declBit(c+1399,"alu option0 c7p1 m1 c_out", false,-1);
        tracep->declBus(c+1581,"alu option0 c7p1 m1 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c7p1 m1 first_add a_in", false,-1);
        tracep->declBit(c+1582,"alu option0 c7p1 m1 first_add b_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p1 m1 first_add c_in", false,-1);
        tracep->declBit(c+822,"alu option0 c7p1 m1 first_add sum", false,-1);
        tracep->declBit(c+823,"alu option0 c7p1 m1 first_add c_out", false,-1);
        tracep->declBit(c+824,"alu option0 c7p1 m1 first_add half_sum1", false,-1);
        tracep->declBit(c+822,"alu option0 c7p1 m1 first_add half_sum2", false,-1);
        tracep->declBit(c+1583,"alu option0 c7p1 m1 first_add carry1", false,-1);
        tracep->declBit(c+824,"alu option0 c7p1 m1 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1584,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+823,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+825,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+826,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+827,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+825,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1585,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+828,"alu option0 c7p1 m1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1586,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+826,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+829,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+830,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+831,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+829,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1587,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+832,"alu option0 c7p1 m1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1588,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+830,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+833,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+834,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+835,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+833,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1589,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+836,"alu option0 c7p1 m1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1590,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+834,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+837,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+838,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+839,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+837,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1591,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+840,"alu option0 c7p1 m1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1592,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+838,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+841,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+842,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+843,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+841,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1593,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+844,"alu option0 c7p1 m1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1594,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+842,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+845,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+846,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+847,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+845,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1595,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+848,"alu option0 c7p1 m1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1596,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+846,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+849,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+850,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+851,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+849,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1597,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+852,"alu option0 c7p1 m1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1598,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+850,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+853,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+854,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+855,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+853,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1599,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+856,"alu option0 c7p1 m1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1600,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+854,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+857,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+858,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+859,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+857,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1601,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+860,"alu option0 c7p1 m1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1602,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+858,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+861,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+862,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+863,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+861,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1603,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+864,"alu option0 c7p1 m1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1604,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+862,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+865,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+866,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+867,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+865,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1605,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+868,"alu option0 c7p1 m1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1606,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+866,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+869,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+870,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+871,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+869,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1607,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+872,"alu option0 c7p1 m1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1608,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+870,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+873,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+874,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+875,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+873,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1609,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+876,"alu option0 c7p1 m1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1610,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+874,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+877,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+878,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+879,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+877,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1611,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+880,"alu option0 c7p1 m1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1612,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+878,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+881,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1399,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+882,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+881,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1613,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+883,"alu option0 c7p1 m1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+21,"alu option0 c7p1 m2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c7p1 m2 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c7p1 m2 c_in", false,-1);
        tracep->declBus(c+19,"alu option0 c7p1 m2 sum", false,-1, 15,0);
        tracep->declBit(c+22,"alu option0 c7p1 m2 c_out", false,-1);
        tracep->declBus(c+884,"alu option0 c7p1 m2 carry", false,-1, 15,0);
        tracep->declBit(c+885,"alu option0 c7p1 m2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c7p1 m2 first_add c_in", false,-1);
        tracep->declBit(c+1614,"alu option0 c7p1 m2 first_add sum", false,-1);
        tracep->declBit(c+886,"alu option0 c7p1 m2 first_add c_out", false,-1);
        tracep->declBit(c+885,"alu option0 c7p1 m2 first_add half_sum1", false,-1);
        tracep->declBit(c+1614,"alu option0 c7p1 m2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 first_add carry1", false,-1);
        tracep->declBit(c+1615,"alu option0 c7p1 m2 first_add carry2", false,-1);
        tracep->declBit(c+887,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+886,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+888,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+889,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+887,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+888,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+890,"alu option0 c7p1 m2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+891,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+889,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+892,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+893,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+891,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+892,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+894,"alu option0 c7p1 m2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+895,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+893,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+896,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+897,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+895,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+896,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+898,"alu option0 c7p1 m2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+899,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+897,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+900,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+901,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+899,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+900,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+902,"alu option0 c7p1 m2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+903,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+901,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+904,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+905,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+903,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+904,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+906,"alu option0 c7p1 m2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+907,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+905,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+908,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+909,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+907,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+908,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+910,"alu option0 c7p1 m2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+911,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+909,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+912,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+913,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+911,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+912,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+914,"alu option0 c7p1 m2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+915,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+913,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+916,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+917,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+915,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+916,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+918,"alu option0 c7p1 m2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+919,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+917,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+920,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+921,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+919,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+920,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+922,"alu option0 c7p1 m2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+923,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+921,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+924,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+925,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+923,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+924,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+926,"alu option0 c7p1 m2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+927,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+925,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+928,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+929,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+927,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+928,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+930,"alu option0 c7p1 m2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+931,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+929,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+932,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+933,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+931,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+932,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+934,"alu option0 c7p1 m2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+935,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+933,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+936,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+937,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+935,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+936,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+938,"alu option0 c7p1 m2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+939,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+937,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+940,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+941,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+939,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+940,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+942,"alu option0 c7p1 m2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+943,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+941,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+944,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+22,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+943,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+944,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+22,"alu option0 c7p1 m2 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+19,"alu option0 c7p2 m1 a_in", false,-1, 15,0);
        tracep->declBus(c+1674,"alu option0 c7p2 m1 b_in", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 c_in", false,-1);
        tracep->declBus(c+23,"alu option0 c7p2 m1 sum", false,-1, 15,0);
        tracep->declBit(c+20,"alu option0 c7p2 m1 c_out", false,-1);
        tracep->declBus(c+945,"alu option0 c7p2 m1 carry", false,-1, 15,0);
        tracep->declBit(c+946,"alu option0 c7p2 m1 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m1 first_add b_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 first_add c_in", false,-1);
        tracep->declBit(c+947,"alu option0 c7p2 m1 first_add sum", false,-1);
        tracep->declBit(c+946,"alu option0 c7p2 m1 first_add c_out", false,-1);
        tracep->declBit(c+946,"alu option0 c7p2 m1 first_add half_sum1", false,-1);
        tracep->declBit(c+947,"alu option0 c7p2 m1 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m1 first_add carry1", false,-1);
        tracep->declBit(c+946,"alu option0 c7p2 m1 first_add carry2", false,-1);
        tracep->declBit(c+948,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+946,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+949,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+950,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+951,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+949,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+948,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+952,"alu option0 c7p2 m1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+953,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+950,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+954,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+955,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+956,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+954,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+953,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+957,"alu option0 c7p2 m1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+958,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+955,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+959,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+960,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+961,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+959,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+958,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+962,"alu option0 c7p2 m1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+963,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+960,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+964,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+965,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+966,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+964,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+963,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+967,"alu option0 c7p2 m1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+968,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+965,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+969,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+970,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+971,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+969,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+968,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+972,"alu option0 c7p2 m1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+973,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+970,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+974,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+975,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+976,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+974,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+973,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+977,"alu option0 c7p2 m1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+978,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+975,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+979,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+980,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+981,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+979,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+978,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+982,"alu option0 c7p2 m1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+983,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+980,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+984,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+985,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+986,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+984,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+983,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+987,"alu option0 c7p2 m1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+988,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+985,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+989,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+990,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+991,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+989,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+988,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+992,"alu option0 c7p2 m1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+993,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+990,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+994,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+995,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+996,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+994,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+993,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+997,"alu option0 c7p2 m1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+998,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+995,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+999,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1000,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1001,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+999,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+998,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1002,"alu option0 c7p2 m1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1003,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1000,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1004,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1005,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1006,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1004,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1003,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1007,"alu option0 c7p2 m1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1008,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1005,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1009,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1010,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1011,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1009,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1008,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1012,"alu option0 c7p2 m1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1013,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1010,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1014,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1015,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1016,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1014,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1013,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1017,"alu option0 c7p2 m1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1018,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1015,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1019,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+20,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1020,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1019,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1018,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1021,"alu option0 c7p2 m1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+23,"alu option0 c7p2 m2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c7p2 m2 b_in", false,-1, 15,0);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 c_in", false,-1);
        tracep->declBus(c+9,"alu option0 c7p2 m2 sum", false,-1, 15,0);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 c_out", false,-1);
        tracep->declBus(c+1671,"alu option0 c7p2 m2 carry", false,-1, 15,0);
        tracep->declBit(c+1022,"alu option0 c7p2 m2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 first_add b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 first_add c_in", false,-1);
        tracep->declBit(c+1022,"alu option0 c7p2 m2 first_add sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 first_add c_out", false,-1);
        tracep->declBit(c+1022,"alu option0 c7p2 m2 first_add half_sum1", false,-1);
        tracep->declBit(c+1022,"alu option0 c7p2 m2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 first_add carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 first_add carry2", false,-1);
        tracep->declBit(c+1023,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1023,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1023,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1023,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1024,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1024,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1024,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1024,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1025,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1025,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1025,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1025,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1026,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1026,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1026,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1026,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1027,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1027,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1027,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1027,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1028,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1028,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1028,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1028,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1029,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1029,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1029,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1029,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1030,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1030,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1030,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1030,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1031,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1031,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1031,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1031,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1032,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1032,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1032,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1032,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1033,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1033,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1033,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1033,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1034,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1034,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1034,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1034,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1035,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1035,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1035,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1035,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1036,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1036,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1036,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1036,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1037,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1037,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1037,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1037,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1670,"alu option0 c7p2 m2 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+24,"alu option0 c8 m1 a_in", false,-1, 15,0);
        tracep->declBus(c+1674,"alu option0 c8 m1 b_in", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c8 m1 c_in", false,-1);
        tracep->declBus(c+26,"alu option0 c8 m1 sum", false,-1, 15,0);
        tracep->declBit(c+27,"alu option0 c8 m1 c_out", false,-1);
        tracep->declBus(c+1038,"alu option0 c8 m1 carry", false,-1, 15,0);
        tracep->declBit(c+1039,"alu option0 c8 m1 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m1 first_add b_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 first_add c_in", false,-1);
        tracep->declBit(c+1040,"alu option0 c8 m1 first_add sum", false,-1);
        tracep->declBit(c+1039,"alu option0 c8 m1 first_add c_out", false,-1);
        tracep->declBit(c+1039,"alu option0 c8 m1 first_add half_sum1", false,-1);
        tracep->declBit(c+1040,"alu option0 c8 m1 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m1 first_add carry1", false,-1);
        tracep->declBit(c+1039,"alu option0 c8 m1 first_add carry2", false,-1);
        tracep->declBit(c+1041,"alu option0 c8 m1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1039,"alu option0 c8 m1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1042,"alu option0 c8 m1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1043,"alu option0 c8 m1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1044,"alu option0 c8 m1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1042,"alu option0 c8 m1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1041,"alu option0 c8 m1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1045,"alu option0 c8 m1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1046,"alu option0 c8 m1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1043,"alu option0 c8 m1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1047,"alu option0 c8 m1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1048,"alu option0 c8 m1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1049,"alu option0 c8 m1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1047,"alu option0 c8 m1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1046,"alu option0 c8 m1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1050,"alu option0 c8 m1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1051,"alu option0 c8 m1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1048,"alu option0 c8 m1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1052,"alu option0 c8 m1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1053,"alu option0 c8 m1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1054,"alu option0 c8 m1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1052,"alu option0 c8 m1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1051,"alu option0 c8 m1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1055,"alu option0 c8 m1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1056,"alu option0 c8 m1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1053,"alu option0 c8 m1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1057,"alu option0 c8 m1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1058,"alu option0 c8 m1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1059,"alu option0 c8 m1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1057,"alu option0 c8 m1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1056,"alu option0 c8 m1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1060,"alu option0 c8 m1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1061,"alu option0 c8 m1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1058,"alu option0 c8 m1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1062,"alu option0 c8 m1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1063,"alu option0 c8 m1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1064,"alu option0 c8 m1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1062,"alu option0 c8 m1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1061,"alu option0 c8 m1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1065,"alu option0 c8 m1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1066,"alu option0 c8 m1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1063,"alu option0 c8 m1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1067,"alu option0 c8 m1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1068,"alu option0 c8 m1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1069,"alu option0 c8 m1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1067,"alu option0 c8 m1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1066,"alu option0 c8 m1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1070,"alu option0 c8 m1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1071,"alu option0 c8 m1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1068,"alu option0 c8 m1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1072,"alu option0 c8 m1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1073,"alu option0 c8 m1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1074,"alu option0 c8 m1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1072,"alu option0 c8 m1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1071,"alu option0 c8 m1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1075,"alu option0 c8 m1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1076,"alu option0 c8 m1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1073,"alu option0 c8 m1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1077,"alu option0 c8 m1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1078,"alu option0 c8 m1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1079,"alu option0 c8 m1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1077,"alu option0 c8 m1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1076,"alu option0 c8 m1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1080,"alu option0 c8 m1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1081,"alu option0 c8 m1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1078,"alu option0 c8 m1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1082,"alu option0 c8 m1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1083,"alu option0 c8 m1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1084,"alu option0 c8 m1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1082,"alu option0 c8 m1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1081,"alu option0 c8 m1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1085,"alu option0 c8 m1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1086,"alu option0 c8 m1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1083,"alu option0 c8 m1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1087,"alu option0 c8 m1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1088,"alu option0 c8 m1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1089,"alu option0 c8 m1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1087,"alu option0 c8 m1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1086,"alu option0 c8 m1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1090,"alu option0 c8 m1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1091,"alu option0 c8 m1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1088,"alu option0 c8 m1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1092,"alu option0 c8 m1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1093,"alu option0 c8 m1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1094,"alu option0 c8 m1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1092,"alu option0 c8 m1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1091,"alu option0 c8 m1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1095,"alu option0 c8 m1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1096,"alu option0 c8 m1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1093,"alu option0 c8 m1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1097,"alu option0 c8 m1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1098,"alu option0 c8 m1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1099,"alu option0 c8 m1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1097,"alu option0 c8 m1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1096,"alu option0 c8 m1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1100,"alu option0 c8 m1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1101,"alu option0 c8 m1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1098,"alu option0 c8 m1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1102,"alu option0 c8 m1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1103,"alu option0 c8 m1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1104,"alu option0 c8 m1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1102,"alu option0 c8 m1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1101,"alu option0 c8 m1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1105,"alu option0 c8 m1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1106,"alu option0 c8 m1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1103,"alu option0 c8 m1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1107,"alu option0 c8 m1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1108,"alu option0 c8 m1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1109,"alu option0 c8 m1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1107,"alu option0 c8 m1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1106,"alu option0 c8 m1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1110,"alu option0 c8 m1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1111,"alu option0 c8 m1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c8 m1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1108,"alu option0 c8 m1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1112,"alu option0 c8 m1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+27,"alu option0 c8 m1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1113,"alu option0 c8 m1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1112,"alu option0 c8 m1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1111,"alu option0 c8 m1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1114,"alu option0 c8 m1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+26,"alu option0 c8 m2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c8 m2 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c8 m2 c_in", false,-1);
        tracep->declBus(c+10,"alu option0 c8 m2 sum", false,-1, 15,0);
        tracep->declBit(c+28,"alu option0 c8 m2 c_out", false,-1);
        tracep->declBus(c+1115,"alu option0 c8 m2 carry", false,-1, 15,0);
        tracep->declBit(c+1116,"alu option0 c8 m2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c8 m2 first_add c_in", false,-1);
        tracep->declBit(c+1616,"alu option0 c8 m2 first_add sum", false,-1);
        tracep->declBit(c+1117,"alu option0 c8 m2 first_add c_out", false,-1);
        tracep->declBit(c+1116,"alu option0 c8 m2 first_add half_sum1", false,-1);
        tracep->declBit(c+1616,"alu option0 c8 m2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 first_add carry1", false,-1);
        tracep->declBit(c+1617,"alu option0 c8 m2 first_add carry2", false,-1);
        tracep->declBit(c+1118,"alu option0 c8 m2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1117,"alu option0 c8 m2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1119,"alu option0 c8 m2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1120,"alu option0 c8 m2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1118,"alu option0 c8 m2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1119,"alu option0 c8 m2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1121,"alu option0 c8 m2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1122,"alu option0 c8 m2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1120,"alu option0 c8 m2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1123,"alu option0 c8 m2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1124,"alu option0 c8 m2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1122,"alu option0 c8 m2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1123,"alu option0 c8 m2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1125,"alu option0 c8 m2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1126,"alu option0 c8 m2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1124,"alu option0 c8 m2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1127,"alu option0 c8 m2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1128,"alu option0 c8 m2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1126,"alu option0 c8 m2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1127,"alu option0 c8 m2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1129,"alu option0 c8 m2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1130,"alu option0 c8 m2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1128,"alu option0 c8 m2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1131,"alu option0 c8 m2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1132,"alu option0 c8 m2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1130,"alu option0 c8 m2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1131,"alu option0 c8 m2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1133,"alu option0 c8 m2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1134,"alu option0 c8 m2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1132,"alu option0 c8 m2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1135,"alu option0 c8 m2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1136,"alu option0 c8 m2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1134,"alu option0 c8 m2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1135,"alu option0 c8 m2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1137,"alu option0 c8 m2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1138,"alu option0 c8 m2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1136,"alu option0 c8 m2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1139,"alu option0 c8 m2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1140,"alu option0 c8 m2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1138,"alu option0 c8 m2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1139,"alu option0 c8 m2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1141,"alu option0 c8 m2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1142,"alu option0 c8 m2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1140,"alu option0 c8 m2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1143,"alu option0 c8 m2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1144,"alu option0 c8 m2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1142,"alu option0 c8 m2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1143,"alu option0 c8 m2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1145,"alu option0 c8 m2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1146,"alu option0 c8 m2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1144,"alu option0 c8 m2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1147,"alu option0 c8 m2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1148,"alu option0 c8 m2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1146,"alu option0 c8 m2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1147,"alu option0 c8 m2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1149,"alu option0 c8 m2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1150,"alu option0 c8 m2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1148,"alu option0 c8 m2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1151,"alu option0 c8 m2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1152,"alu option0 c8 m2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1150,"alu option0 c8 m2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1151,"alu option0 c8 m2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1153,"alu option0 c8 m2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1154,"alu option0 c8 m2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1152,"alu option0 c8 m2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1155,"alu option0 c8 m2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1156,"alu option0 c8 m2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1154,"alu option0 c8 m2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1155,"alu option0 c8 m2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1157,"alu option0 c8 m2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1158,"alu option0 c8 m2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1156,"alu option0 c8 m2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1159,"alu option0 c8 m2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1160,"alu option0 c8 m2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1158,"alu option0 c8 m2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1159,"alu option0 c8 m2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1161,"alu option0 c8 m2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1162,"alu option0 c8 m2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1160,"alu option0 c8 m2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1163,"alu option0 c8 m2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1164,"alu option0 c8 m2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1162,"alu option0 c8 m2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1163,"alu option0 c8 m2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1165,"alu option0 c8 m2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1166,"alu option0 c8 m2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1164,"alu option0 c8 m2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1167,"alu option0 c8 m2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1168,"alu option0 c8 m2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1166,"alu option0 c8 m2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1167,"alu option0 c8 m2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1169,"alu option0 c8 m2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1170,"alu option0 c8 m2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1168,"alu option0 c8 m2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1171,"alu option0 c8 m2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1172,"alu option0 c8 m2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1170,"alu option0 c8 m2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1171,"alu option0 c8 m2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1173,"alu option0 c8 m2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1174,"alu option0 c8 m2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1172,"alu option0 c8 m2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1175,"alu option0 c8 m2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+28,"alu option0 c8 m2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1174,"alu option0 c8 m2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1175,"alu option0 c8 m2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c8 m2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+28,"alu option0 c8 m2 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+29,"alu option0 c12 m1 a_in", false,-1, 15,0);
        tracep->declBus(c+1674,"alu option0 c12 m1 b_in", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c12 m1 c_in", false,-1);
        tracep->declBus(c+31,"alu option0 c12 m1 sum", false,-1, 15,0);
        tracep->declBit(c+32,"alu option0 c12 m1 c_out", false,-1);
        tracep->declBus(c+1176,"alu option0 c12 m1 carry", false,-1, 15,0);
        tracep->declBit(c+1177,"alu option0 c12 m1 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m1 first_add b_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 first_add c_in", false,-1);
        tracep->declBit(c+1178,"alu option0 c12 m1 first_add sum", false,-1);
        tracep->declBit(c+1177,"alu option0 c12 m1 first_add c_out", false,-1);
        tracep->declBit(c+1177,"alu option0 c12 m1 first_add half_sum1", false,-1);
        tracep->declBit(c+1178,"alu option0 c12 m1 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m1 first_add carry1", false,-1);
        tracep->declBit(c+1177,"alu option0 c12 m1 first_add carry2", false,-1);
        tracep->declBit(c+1179,"alu option0 c12 m1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1177,"alu option0 c12 m1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1180,"alu option0 c12 m1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1181,"alu option0 c12 m1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1182,"alu option0 c12 m1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1180,"alu option0 c12 m1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1179,"alu option0 c12 m1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1183,"alu option0 c12 m1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1184,"alu option0 c12 m1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1181,"alu option0 c12 m1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1185,"alu option0 c12 m1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1186,"alu option0 c12 m1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1187,"alu option0 c12 m1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1185,"alu option0 c12 m1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1184,"alu option0 c12 m1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1188,"alu option0 c12 m1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1189,"alu option0 c12 m1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1186,"alu option0 c12 m1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1190,"alu option0 c12 m1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1191,"alu option0 c12 m1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1192,"alu option0 c12 m1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1190,"alu option0 c12 m1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1189,"alu option0 c12 m1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1193,"alu option0 c12 m1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1194,"alu option0 c12 m1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1191,"alu option0 c12 m1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1195,"alu option0 c12 m1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1196,"alu option0 c12 m1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1197,"alu option0 c12 m1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1195,"alu option0 c12 m1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1194,"alu option0 c12 m1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1198,"alu option0 c12 m1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1199,"alu option0 c12 m1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1196,"alu option0 c12 m1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1200,"alu option0 c12 m1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1201,"alu option0 c12 m1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1202,"alu option0 c12 m1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1200,"alu option0 c12 m1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1199,"alu option0 c12 m1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1203,"alu option0 c12 m1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1204,"alu option0 c12 m1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1201,"alu option0 c12 m1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1205,"alu option0 c12 m1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1206,"alu option0 c12 m1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1207,"alu option0 c12 m1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1205,"alu option0 c12 m1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1204,"alu option0 c12 m1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1208,"alu option0 c12 m1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1209,"alu option0 c12 m1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1206,"alu option0 c12 m1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1210,"alu option0 c12 m1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1211,"alu option0 c12 m1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1212,"alu option0 c12 m1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1210,"alu option0 c12 m1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1209,"alu option0 c12 m1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1213,"alu option0 c12 m1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1214,"alu option0 c12 m1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1211,"alu option0 c12 m1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1215,"alu option0 c12 m1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1216,"alu option0 c12 m1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1217,"alu option0 c12 m1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1215,"alu option0 c12 m1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1214,"alu option0 c12 m1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1218,"alu option0 c12 m1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1219,"alu option0 c12 m1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1216,"alu option0 c12 m1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1220,"alu option0 c12 m1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1221,"alu option0 c12 m1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1222,"alu option0 c12 m1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1220,"alu option0 c12 m1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1219,"alu option0 c12 m1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1223,"alu option0 c12 m1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1224,"alu option0 c12 m1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1221,"alu option0 c12 m1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1225,"alu option0 c12 m1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1226,"alu option0 c12 m1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1227,"alu option0 c12 m1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1225,"alu option0 c12 m1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1224,"alu option0 c12 m1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1228,"alu option0 c12 m1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1229,"alu option0 c12 m1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1226,"alu option0 c12 m1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1230,"alu option0 c12 m1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1231,"alu option0 c12 m1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1232,"alu option0 c12 m1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1230,"alu option0 c12 m1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1229,"alu option0 c12 m1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1233,"alu option0 c12 m1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1234,"alu option0 c12 m1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1231,"alu option0 c12 m1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1235,"alu option0 c12 m1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1236,"alu option0 c12 m1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1237,"alu option0 c12 m1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1235,"alu option0 c12 m1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1234,"alu option0 c12 m1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1238,"alu option0 c12 m1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1239,"alu option0 c12 m1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1236,"alu option0 c12 m1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1240,"alu option0 c12 m1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1241,"alu option0 c12 m1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1242,"alu option0 c12 m1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1240,"alu option0 c12 m1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1239,"alu option0 c12 m1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1243,"alu option0 c12 m1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1244,"alu option0 c12 m1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1241,"alu option0 c12 m1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1245,"alu option0 c12 m1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1246,"alu option0 c12 m1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1247,"alu option0 c12 m1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1245,"alu option0 c12 m1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1244,"alu option0 c12 m1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1248,"alu option0 c12 m1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1249,"alu option0 c12 m1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c12 m1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1246,"alu option0 c12 m1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1250,"alu option0 c12 m1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+32,"alu option0 c12 m1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1251,"alu option0 c12 m1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1250,"alu option0 c12 m1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1249,"alu option0 c12 m1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1252,"alu option0 c12 m1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+31,"alu option0 c12 m2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c12 m2 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c12 m2 c_in", false,-1);
        tracep->declBus(c+14,"alu option0 c12 m2 sum", false,-1, 15,0);
        tracep->declBit(c+33,"alu option0 c12 m2 c_out", false,-1);
        tracep->declBus(c+1253,"alu option0 c12 m2 carry", false,-1, 15,0);
        tracep->declBit(c+1254,"alu option0 c12 m2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c12 m2 first_add c_in", false,-1);
        tracep->declBit(c+1618,"alu option0 c12 m2 first_add sum", false,-1);
        tracep->declBit(c+1255,"alu option0 c12 m2 first_add c_out", false,-1);
        tracep->declBit(c+1254,"alu option0 c12 m2 first_add half_sum1", false,-1);
        tracep->declBit(c+1618,"alu option0 c12 m2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 first_add carry1", false,-1);
        tracep->declBit(c+1619,"alu option0 c12 m2 first_add carry2", false,-1);
        tracep->declBit(c+1256,"alu option0 c12 m2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1255,"alu option0 c12 m2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1257,"alu option0 c12 m2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1258,"alu option0 c12 m2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1256,"alu option0 c12 m2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1257,"alu option0 c12 m2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1259,"alu option0 c12 m2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1260,"alu option0 c12 m2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1258,"alu option0 c12 m2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1261,"alu option0 c12 m2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1262,"alu option0 c12 m2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1260,"alu option0 c12 m2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1261,"alu option0 c12 m2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1263,"alu option0 c12 m2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1264,"alu option0 c12 m2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1262,"alu option0 c12 m2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1265,"alu option0 c12 m2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1266,"alu option0 c12 m2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1264,"alu option0 c12 m2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1265,"alu option0 c12 m2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1267,"alu option0 c12 m2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1268,"alu option0 c12 m2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1266,"alu option0 c12 m2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1269,"alu option0 c12 m2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1270,"alu option0 c12 m2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1268,"alu option0 c12 m2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1269,"alu option0 c12 m2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1271,"alu option0 c12 m2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1272,"alu option0 c12 m2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1270,"alu option0 c12 m2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1273,"alu option0 c12 m2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1274,"alu option0 c12 m2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1272,"alu option0 c12 m2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1273,"alu option0 c12 m2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1275,"alu option0 c12 m2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1276,"alu option0 c12 m2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1274,"alu option0 c12 m2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1277,"alu option0 c12 m2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1278,"alu option0 c12 m2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1276,"alu option0 c12 m2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1277,"alu option0 c12 m2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1279,"alu option0 c12 m2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1280,"alu option0 c12 m2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1278,"alu option0 c12 m2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1281,"alu option0 c12 m2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1282,"alu option0 c12 m2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1280,"alu option0 c12 m2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1281,"alu option0 c12 m2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1283,"alu option0 c12 m2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1284,"alu option0 c12 m2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1282,"alu option0 c12 m2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1285,"alu option0 c12 m2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1286,"alu option0 c12 m2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1284,"alu option0 c12 m2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1285,"alu option0 c12 m2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1287,"alu option0 c12 m2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1288,"alu option0 c12 m2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1286,"alu option0 c12 m2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1289,"alu option0 c12 m2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1290,"alu option0 c12 m2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1288,"alu option0 c12 m2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1289,"alu option0 c12 m2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1291,"alu option0 c12 m2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1292,"alu option0 c12 m2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1290,"alu option0 c12 m2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1293,"alu option0 c12 m2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1294,"alu option0 c12 m2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1292,"alu option0 c12 m2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1293,"alu option0 c12 m2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1295,"alu option0 c12 m2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1296,"alu option0 c12 m2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1294,"alu option0 c12 m2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1297,"alu option0 c12 m2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1298,"alu option0 c12 m2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1296,"alu option0 c12 m2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1297,"alu option0 c12 m2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1299,"alu option0 c12 m2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1300,"alu option0 c12 m2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1298,"alu option0 c12 m2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1301,"alu option0 c12 m2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1302,"alu option0 c12 m2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1300,"alu option0 c12 m2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1301,"alu option0 c12 m2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1303,"alu option0 c12 m2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1304,"alu option0 c12 m2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1302,"alu option0 c12 m2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1305,"alu option0 c12 m2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1306,"alu option0 c12 m2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1304,"alu option0 c12 m2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1305,"alu option0 c12 m2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1307,"alu option0 c12 m2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1308,"alu option0 c12 m2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1306,"alu option0 c12 m2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1309,"alu option0 c12 m2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1310,"alu option0 c12 m2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1308,"alu option0 c12 m2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1309,"alu option0 c12 m2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1311,"alu option0 c12 m2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1312,"alu option0 c12 m2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1310,"alu option0 c12 m2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1313,"alu option0 c12 m2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+33,"alu option0 c12 m2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1312,"alu option0 c12 m2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1313,"alu option0 c12 m2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c12 m2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+33,"alu option0 c12 m2 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+1390,"alu option0 c16 m1 a_in", false,-1, 15,0);
        tracep->declBus(c+1674,"alu option0 c16 m1 b_in", false,-1, 15,0);
        tracep->declBit(c+1673,"alu option0 c16 m1 c_in", false,-1);
        tracep->declBus(c+34,"alu option0 c16 m1 sum", false,-1, 15,0);
        tracep->declBit(c+1401,"alu option0 c16 m1 c_out", false,-1);
        tracep->declBus(c+1620,"alu option0 c16 m1 carry", false,-1, 15,0);
        tracep->declBit(c+1404,"alu option0 c16 m1 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m1 first_add b_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 first_add c_in", false,-1);
        tracep->declBit(c+1621,"alu option0 c16 m1 first_add sum", false,-1);
        tracep->declBit(c+1404,"alu option0 c16 m1 first_add c_out", false,-1);
        tracep->declBit(c+1404,"alu option0 c16 m1 first_add half_sum1", false,-1);
        tracep->declBit(c+1621,"alu option0 c16 m1 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m1 first_add carry1", false,-1);
        tracep->declBit(c+1404,"alu option0 c16 m1 first_add carry2", false,-1);
        tracep->declBit(c+1407,"alu option0 c16 m1 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1404,"alu option0 c16 m1 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1622,"alu option0 c16 m1 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1314,"alu option0 c16 m1 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1623,"alu option0 c16 m1 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1622,"alu option0 c16 m1 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1407,"alu option0 c16 m1 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1624,"alu option0 c16 m1 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1410,"alu option0 c16 m1 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1314,"alu option0 c16 m1 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1625,"alu option0 c16 m1 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1315,"alu option0 c16 m1 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1626,"alu option0 c16 m1 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1625,"alu option0 c16 m1 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1410,"alu option0 c16 m1 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1627,"alu option0 c16 m1 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1413,"alu option0 c16 m1 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1315,"alu option0 c16 m1 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1628,"alu option0 c16 m1 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1316,"alu option0 c16 m1 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1629,"alu option0 c16 m1 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1628,"alu option0 c16 m1 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1413,"alu option0 c16 m1 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1630,"alu option0 c16 m1 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1416,"alu option0 c16 m1 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1316,"alu option0 c16 m1 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1631,"alu option0 c16 m1 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1317,"alu option0 c16 m1 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1632,"alu option0 c16 m1 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1631,"alu option0 c16 m1 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1416,"alu option0 c16 m1 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1633,"alu option0 c16 m1 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1419,"alu option0 c16 m1 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1317,"alu option0 c16 m1 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1634,"alu option0 c16 m1 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1318,"alu option0 c16 m1 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1635,"alu option0 c16 m1 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1634,"alu option0 c16 m1 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1419,"alu option0 c16 m1 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1636,"alu option0 c16 m1 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1422,"alu option0 c16 m1 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1318,"alu option0 c16 m1 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1637,"alu option0 c16 m1 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1319,"alu option0 c16 m1 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1638,"alu option0 c16 m1 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1637,"alu option0 c16 m1 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1422,"alu option0 c16 m1 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1639,"alu option0 c16 m1 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1425,"alu option0 c16 m1 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1319,"alu option0 c16 m1 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1640,"alu option0 c16 m1 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1320,"alu option0 c16 m1 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1641,"alu option0 c16 m1 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1640,"alu option0 c16 m1 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1425,"alu option0 c16 m1 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1642,"alu option0 c16 m1 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1428,"alu option0 c16 m1 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1320,"alu option0 c16 m1 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1643,"alu option0 c16 m1 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1321,"alu option0 c16 m1 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1644,"alu option0 c16 m1 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1643,"alu option0 c16 m1 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1428,"alu option0 c16 m1 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1645,"alu option0 c16 m1 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1431,"alu option0 c16 m1 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1321,"alu option0 c16 m1 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1646,"alu option0 c16 m1 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1322,"alu option0 c16 m1 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1647,"alu option0 c16 m1 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1646,"alu option0 c16 m1 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1431,"alu option0 c16 m1 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1648,"alu option0 c16 m1 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1434,"alu option0 c16 m1 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1322,"alu option0 c16 m1 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1649,"alu option0 c16 m1 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1323,"alu option0 c16 m1 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1650,"alu option0 c16 m1 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1649,"alu option0 c16 m1 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1434,"alu option0 c16 m1 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1651,"alu option0 c16 m1 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1437,"alu option0 c16 m1 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1323,"alu option0 c16 m1 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1652,"alu option0 c16 m1 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1324,"alu option0 c16 m1 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1653,"alu option0 c16 m1 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1652,"alu option0 c16 m1 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1437,"alu option0 c16 m1 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1654,"alu option0 c16 m1 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1440,"alu option0 c16 m1 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1324,"alu option0 c16 m1 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1655,"alu option0 c16 m1 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1325,"alu option0 c16 m1 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1656,"alu option0 c16 m1 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1655,"alu option0 c16 m1 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1440,"alu option0 c16 m1 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1657,"alu option0 c16 m1 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1443,"alu option0 c16 m1 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1325,"alu option0 c16 m1 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1658,"alu option0 c16 m1 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1326,"alu option0 c16 m1 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1659,"alu option0 c16 m1 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1658,"alu option0 c16 m1 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1443,"alu option0 c16 m1 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1660,"alu option0 c16 m1 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1446,"alu option0 c16 m1 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1326,"alu option0 c16 m1 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1661,"alu option0 c16 m1 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1327,"alu option0 c16 m1 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1662,"alu option0 c16 m1 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1661,"alu option0 c16 m1 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1446,"alu option0 c16 m1 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1663,"alu option0 c16 m1 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1449,"alu option0 c16 m1 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1673,"alu option0 c16 m1 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1327,"alu option0 c16 m1 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1664,"alu option0 c16 m1 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+1401,"alu option0 c16 m1 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1665,"alu option0 c16 m1 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1664,"alu option0 c16 m1 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1449,"alu option0 c16 m1 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+1666,"alu option0 c16 m1 create_16_bit_adder[15] current_i carry2", false,-1);
        tracep->declBus(c+34,"alu option0 c16 m2 a_in", false,-1, 15,0);
        tracep->declBus(c+1671,"alu option0 c16 m2 b_in", false,-1, 15,0);
        tracep->declBit(c+1389,"alu option0 c16 m2 c_in", false,-1);
        tracep->declBus(c+18,"alu option0 c16 m2 sum", false,-1, 15,0);
        tracep->declBit(c+35,"alu option0 c16 m2 c_out", false,-1);
        tracep->declBus(c+1328,"alu option0 c16 m2 carry", false,-1, 15,0);
        tracep->declBit(c+1329,"alu option0 c16 m2 first_add a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 first_add b_in", false,-1);
        tracep->declBit(c+1389,"alu option0 c16 m2 first_add c_in", false,-1);
        tracep->declBit(c+1667,"alu option0 c16 m2 first_add sum", false,-1);
        tracep->declBit(c+1330,"alu option0 c16 m2 first_add c_out", false,-1);
        tracep->declBit(c+1329,"alu option0 c16 m2 first_add half_sum1", false,-1);
        tracep->declBit(c+1667,"alu option0 c16 m2 first_add half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 first_add carry1", false,-1);
        tracep->declBit(c+1668,"alu option0 c16 m2 first_add carry2", false,-1);
        tracep->declBit(c+1331,"alu option0 c16 m2 create_16_bit_adder[1] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[1] current_i b_in", false,-1);
        tracep->declBit(c+1330,"alu option0 c16 m2 create_16_bit_adder[1] current_i c_in", false,-1);
        tracep->declBit(c+1332,"alu option0 c16 m2 create_16_bit_adder[1] current_i sum", false,-1);
        tracep->declBit(c+1333,"alu option0 c16 m2 create_16_bit_adder[1] current_i c_out", false,-1);
        tracep->declBit(c+1331,"alu option0 c16 m2 create_16_bit_adder[1] current_i half_sum1", false,-1);
        tracep->declBit(c+1332,"alu option0 c16 m2 create_16_bit_adder[1] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[1] current_i carry1", false,-1);
        tracep->declBit(c+1334,"alu option0 c16 m2 create_16_bit_adder[1] current_i carry2", false,-1);
        tracep->declBit(c+1335,"alu option0 c16 m2 create_16_bit_adder[2] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[2] current_i b_in", false,-1);
        tracep->declBit(c+1333,"alu option0 c16 m2 create_16_bit_adder[2] current_i c_in", false,-1);
        tracep->declBit(c+1336,"alu option0 c16 m2 create_16_bit_adder[2] current_i sum", false,-1);
        tracep->declBit(c+1337,"alu option0 c16 m2 create_16_bit_adder[2] current_i c_out", false,-1);
        tracep->declBit(c+1335,"alu option0 c16 m2 create_16_bit_adder[2] current_i half_sum1", false,-1);
        tracep->declBit(c+1336,"alu option0 c16 m2 create_16_bit_adder[2] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[2] current_i carry1", false,-1);
        tracep->declBit(c+1338,"alu option0 c16 m2 create_16_bit_adder[2] current_i carry2", false,-1);
        tracep->declBit(c+1339,"alu option0 c16 m2 create_16_bit_adder[3] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[3] current_i b_in", false,-1);
        tracep->declBit(c+1337,"alu option0 c16 m2 create_16_bit_adder[3] current_i c_in", false,-1);
        tracep->declBit(c+1340,"alu option0 c16 m2 create_16_bit_adder[3] current_i sum", false,-1);
        tracep->declBit(c+1341,"alu option0 c16 m2 create_16_bit_adder[3] current_i c_out", false,-1);
        tracep->declBit(c+1339,"alu option0 c16 m2 create_16_bit_adder[3] current_i half_sum1", false,-1);
        tracep->declBit(c+1340,"alu option0 c16 m2 create_16_bit_adder[3] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[3] current_i carry1", false,-1);
        tracep->declBit(c+1342,"alu option0 c16 m2 create_16_bit_adder[3] current_i carry2", false,-1);
        tracep->declBit(c+1343,"alu option0 c16 m2 create_16_bit_adder[4] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[4] current_i b_in", false,-1);
        tracep->declBit(c+1341,"alu option0 c16 m2 create_16_bit_adder[4] current_i c_in", false,-1);
        tracep->declBit(c+1344,"alu option0 c16 m2 create_16_bit_adder[4] current_i sum", false,-1);
        tracep->declBit(c+1345,"alu option0 c16 m2 create_16_bit_adder[4] current_i c_out", false,-1);
        tracep->declBit(c+1343,"alu option0 c16 m2 create_16_bit_adder[4] current_i half_sum1", false,-1);
        tracep->declBit(c+1344,"alu option0 c16 m2 create_16_bit_adder[4] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[4] current_i carry1", false,-1);
        tracep->declBit(c+1346,"alu option0 c16 m2 create_16_bit_adder[4] current_i carry2", false,-1);
        tracep->declBit(c+1347,"alu option0 c16 m2 create_16_bit_adder[5] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[5] current_i b_in", false,-1);
        tracep->declBit(c+1345,"alu option0 c16 m2 create_16_bit_adder[5] current_i c_in", false,-1);
        tracep->declBit(c+1348,"alu option0 c16 m2 create_16_bit_adder[5] current_i sum", false,-1);
        tracep->declBit(c+1349,"alu option0 c16 m2 create_16_bit_adder[5] current_i c_out", false,-1);
        tracep->declBit(c+1347,"alu option0 c16 m2 create_16_bit_adder[5] current_i half_sum1", false,-1);
        tracep->declBit(c+1348,"alu option0 c16 m2 create_16_bit_adder[5] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[5] current_i carry1", false,-1);
        tracep->declBit(c+1350,"alu option0 c16 m2 create_16_bit_adder[5] current_i carry2", false,-1);
        tracep->declBit(c+1351,"alu option0 c16 m2 create_16_bit_adder[6] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[6] current_i b_in", false,-1);
        tracep->declBit(c+1349,"alu option0 c16 m2 create_16_bit_adder[6] current_i c_in", false,-1);
        tracep->declBit(c+1352,"alu option0 c16 m2 create_16_bit_adder[6] current_i sum", false,-1);
        tracep->declBit(c+1353,"alu option0 c16 m2 create_16_bit_adder[6] current_i c_out", false,-1);
        tracep->declBit(c+1351,"alu option0 c16 m2 create_16_bit_adder[6] current_i half_sum1", false,-1);
        tracep->declBit(c+1352,"alu option0 c16 m2 create_16_bit_adder[6] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[6] current_i carry1", false,-1);
        tracep->declBit(c+1354,"alu option0 c16 m2 create_16_bit_adder[6] current_i carry2", false,-1);
        tracep->declBit(c+1355,"alu option0 c16 m2 create_16_bit_adder[7] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[7] current_i b_in", false,-1);
        tracep->declBit(c+1353,"alu option0 c16 m2 create_16_bit_adder[7] current_i c_in", false,-1);
        tracep->declBit(c+1356,"alu option0 c16 m2 create_16_bit_adder[7] current_i sum", false,-1);
        tracep->declBit(c+1357,"alu option0 c16 m2 create_16_bit_adder[7] current_i c_out", false,-1);
        tracep->declBit(c+1355,"alu option0 c16 m2 create_16_bit_adder[7] current_i half_sum1", false,-1);
        tracep->declBit(c+1356,"alu option0 c16 m2 create_16_bit_adder[7] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[7] current_i carry1", false,-1);
        tracep->declBit(c+1358,"alu option0 c16 m2 create_16_bit_adder[7] current_i carry2", false,-1);
        tracep->declBit(c+1359,"alu option0 c16 m2 create_16_bit_adder[8] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[8] current_i b_in", false,-1);
        tracep->declBit(c+1357,"alu option0 c16 m2 create_16_bit_adder[8] current_i c_in", false,-1);
        tracep->declBit(c+1360,"alu option0 c16 m2 create_16_bit_adder[8] current_i sum", false,-1);
        tracep->declBit(c+1361,"alu option0 c16 m2 create_16_bit_adder[8] current_i c_out", false,-1);
        tracep->declBit(c+1359,"alu option0 c16 m2 create_16_bit_adder[8] current_i half_sum1", false,-1);
        tracep->declBit(c+1360,"alu option0 c16 m2 create_16_bit_adder[8] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[8] current_i carry1", false,-1);
        tracep->declBit(c+1362,"alu option0 c16 m2 create_16_bit_adder[8] current_i carry2", false,-1);
        tracep->declBit(c+1363,"alu option0 c16 m2 create_16_bit_adder[9] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[9] current_i b_in", false,-1);
        tracep->declBit(c+1361,"alu option0 c16 m2 create_16_bit_adder[9] current_i c_in", false,-1);
        tracep->declBit(c+1364,"alu option0 c16 m2 create_16_bit_adder[9] current_i sum", false,-1);
        tracep->declBit(c+1365,"alu option0 c16 m2 create_16_bit_adder[9] current_i c_out", false,-1);
        tracep->declBit(c+1363,"alu option0 c16 m2 create_16_bit_adder[9] current_i half_sum1", false,-1);
        tracep->declBit(c+1364,"alu option0 c16 m2 create_16_bit_adder[9] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[9] current_i carry1", false,-1);
        tracep->declBit(c+1366,"alu option0 c16 m2 create_16_bit_adder[9] current_i carry2", false,-1);
        tracep->declBit(c+1367,"alu option0 c16 m2 create_16_bit_adder[10] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[10] current_i b_in", false,-1);
        tracep->declBit(c+1365,"alu option0 c16 m2 create_16_bit_adder[10] current_i c_in", false,-1);
        tracep->declBit(c+1368,"alu option0 c16 m2 create_16_bit_adder[10] current_i sum", false,-1);
        tracep->declBit(c+1369,"alu option0 c16 m2 create_16_bit_adder[10] current_i c_out", false,-1);
        tracep->declBit(c+1367,"alu option0 c16 m2 create_16_bit_adder[10] current_i half_sum1", false,-1);
        tracep->declBit(c+1368,"alu option0 c16 m2 create_16_bit_adder[10] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[10] current_i carry1", false,-1);
        tracep->declBit(c+1370,"alu option0 c16 m2 create_16_bit_adder[10] current_i carry2", false,-1);
        tracep->declBit(c+1371,"alu option0 c16 m2 create_16_bit_adder[11] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[11] current_i b_in", false,-1);
        tracep->declBit(c+1369,"alu option0 c16 m2 create_16_bit_adder[11] current_i c_in", false,-1);
        tracep->declBit(c+1372,"alu option0 c16 m2 create_16_bit_adder[11] current_i sum", false,-1);
        tracep->declBit(c+1373,"alu option0 c16 m2 create_16_bit_adder[11] current_i c_out", false,-1);
        tracep->declBit(c+1371,"alu option0 c16 m2 create_16_bit_adder[11] current_i half_sum1", false,-1);
        tracep->declBit(c+1372,"alu option0 c16 m2 create_16_bit_adder[11] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[11] current_i carry1", false,-1);
        tracep->declBit(c+1374,"alu option0 c16 m2 create_16_bit_adder[11] current_i carry2", false,-1);
        tracep->declBit(c+1375,"alu option0 c16 m2 create_16_bit_adder[12] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[12] current_i b_in", false,-1);
        tracep->declBit(c+1373,"alu option0 c16 m2 create_16_bit_adder[12] current_i c_in", false,-1);
        tracep->declBit(c+1376,"alu option0 c16 m2 create_16_bit_adder[12] current_i sum", false,-1);
        tracep->declBit(c+1377,"alu option0 c16 m2 create_16_bit_adder[12] current_i c_out", false,-1);
        tracep->declBit(c+1375,"alu option0 c16 m2 create_16_bit_adder[12] current_i half_sum1", false,-1);
        tracep->declBit(c+1376,"alu option0 c16 m2 create_16_bit_adder[12] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[12] current_i carry1", false,-1);
        tracep->declBit(c+1378,"alu option0 c16 m2 create_16_bit_adder[12] current_i carry2", false,-1);
        tracep->declBit(c+1379,"alu option0 c16 m2 create_16_bit_adder[13] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[13] current_i b_in", false,-1);
        tracep->declBit(c+1377,"alu option0 c16 m2 create_16_bit_adder[13] current_i c_in", false,-1);
        tracep->declBit(c+1380,"alu option0 c16 m2 create_16_bit_adder[13] current_i sum", false,-1);
        tracep->declBit(c+1381,"alu option0 c16 m2 create_16_bit_adder[13] current_i c_out", false,-1);
        tracep->declBit(c+1379,"alu option0 c16 m2 create_16_bit_adder[13] current_i half_sum1", false,-1);
        tracep->declBit(c+1380,"alu option0 c16 m2 create_16_bit_adder[13] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[13] current_i carry1", false,-1);
        tracep->declBit(c+1382,"alu option0 c16 m2 create_16_bit_adder[13] current_i carry2", false,-1);
        tracep->declBit(c+1383,"alu option0 c16 m2 create_16_bit_adder[14] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[14] current_i b_in", false,-1);
        tracep->declBit(c+1381,"alu option0 c16 m2 create_16_bit_adder[14] current_i c_in", false,-1);
        tracep->declBit(c+1384,"alu option0 c16 m2 create_16_bit_adder[14] current_i sum", false,-1);
        tracep->declBit(c+1385,"alu option0 c16 m2 create_16_bit_adder[14] current_i c_out", false,-1);
        tracep->declBit(c+1383,"alu option0 c16 m2 create_16_bit_adder[14] current_i half_sum1", false,-1);
        tracep->declBit(c+1384,"alu option0 c16 m2 create_16_bit_adder[14] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[14] current_i carry1", false,-1);
        tracep->declBit(c+1386,"alu option0 c16 m2 create_16_bit_adder[14] current_i carry2", false,-1);
        tracep->declBit(c+1387,"alu option0 c16 m2 create_16_bit_adder[15] current_i a_in", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[15] current_i b_in", false,-1);
        tracep->declBit(c+1385,"alu option0 c16 m2 create_16_bit_adder[15] current_i c_in", false,-1);
        tracep->declBit(c+1388,"alu option0 c16 m2 create_16_bit_adder[15] current_i sum", false,-1);
        tracep->declBit(c+35,"alu option0 c16 m2 create_16_bit_adder[15] current_i c_out", false,-1);
        tracep->declBit(c+1387,"alu option0 c16 m2 create_16_bit_adder[15] current_i half_sum1", false,-1);
        tracep->declBit(c+1388,"alu option0 c16 m2 create_16_bit_adder[15] current_i half_sum2", false,-1);
        tracep->declBit(c+1670,"alu option0 c16 m2 create_16_bit_adder[15] current_i carry1", false,-1);
        tracep->declBit(c+35,"alu option0 c16 m2 create_16_bit_adder[15] current_i carry2", false,-1);
    }
}

void Valu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Valu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Valu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Valu__Syms* __restrict vlSymsp = static_cast<Valu__Syms*>(userp);
    Valu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->alu__DOT__out1),16);
        tracep->fullSData(oldp+2,(vlTOPp->alu__DOT__option0__DOT__carry),16);
        tracep->fullSData(oldp+3,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.sum),16);
        tracep->fullSData(oldp+4,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.sum),16);
        tracep->fullSData(oldp+5,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.sum),16);
        tracep->fullSData(oldp+6,(vlSymsp->TOP__alu__DOT__option0__DOT__c4.sum),16);
        tracep->fullSData(oldp+7,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.sum),16);
        tracep->fullSData(oldp+8,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.sum),16);
        tracep->fullSData(oldp+9,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m2.sum),16);
        tracep->fullSData(oldp+10,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.sum),16);
        tracep->fullSData(oldp+11,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.sum),16);
        tracep->fullSData(oldp+12,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.sum),16);
        tracep->fullSData(oldp+13,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.sum),16);
        tracep->fullSData(oldp+14,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.sum),16);
        tracep->fullSData(oldp+15,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.sum),16);
        tracep->fullSData(oldp+16,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.sum),16);
        tracep->fullSData(oldp+17,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.sum),16);
        tracep->fullSData(oldp+18,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.sum),16);
        tracep->fullSData(oldp+19,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum),16);
        tracep->fullBit(oldp+20,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 0xfU) | 
                                        ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xfU)) 
                                         & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+21,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum),16);
        tracep->fullBit(oldp+22,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                   >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+23,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum),16);
        tracep->fullSData(oldp+24,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1),16);
        tracep->fullBit(oldp+25,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xfU) 
                                         | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                                >> 0xfU)) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                        ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                            >> 0xfU) 
                                           & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+26,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum),16);
        tracep->fullBit(oldp+27,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                         >> 0xfU) | 
                                        ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xfU)) 
                                         & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+28,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                   >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+29,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1),16);
        tracep->fullBit(oldp+30,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xfU) 
                                         | ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                                >> 0xfU)) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                        ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                            >> 0xfU) 
                                           & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+31,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum),16);
        tracep->fullBit(oldp+32,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                         >> 0xfU) | 
                                        ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xfU)) 
                                         & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+33,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                   >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+34,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum),16);
        tracep->fullBit(oldp+35,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                   >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+37,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+38,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+40,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+44,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+45,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+46,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+47,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+48,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullSData(oldp+51,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1),16);
        tracep->fullBit(oldp+52,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+53,(((0xffff8000U & 
                                     ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                      & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xfU))) 
                                    | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                        << 0xeU) | 
                                       (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
                                         << 0xdU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+54,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1))));
        tracep->fullBit(oldp+55,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+56,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 1U))));
        tracep->fullBit(oldp+57,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+59,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+60,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 2U))));
        tracep->fullBit(oldp+61,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+62,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+63,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+64,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 3U))));
        tracep->fullBit(oldp+65,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+66,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+67,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+68,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 4U))));
        tracep->fullBit(oldp+69,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+70,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+71,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+72,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 5U))));
        tracep->fullBit(oldp+73,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+74,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+75,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+76,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 6U))));
        tracep->fullBit(oldp+77,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+78,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+79,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+80,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 7U))));
        tracep->fullBit(oldp+81,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+83,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+84,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 8U))));
        tracep->fullBit(oldp+85,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+87,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+88,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 9U))));
        tracep->fullBit(oldp+89,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+90,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+91,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+92,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+93,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xaU) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+95,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+96,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                        >> 0xbU))));
        tracep->fullBit(oldp+97,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xbU) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+99,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                   >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+100,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+101,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                          >> 0xcU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+102,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+103,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                    >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+104,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+105,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                          >> 0xdU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+106,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+107,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                    >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+108,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+109,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+111,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                    >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+112,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+113,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                          >> 0xfU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullSData(oldp+114,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1),16);
        tracep->fullBit(oldp+115,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+116,(((0xffff8000U & 
                                      ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+117,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1))));
        tracep->fullBit(oldp+118,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+119,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+120,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+121,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+122,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+123,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+124,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+125,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+126,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+127,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+128,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+129,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+130,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+131,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+132,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+133,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+134,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+135,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+136,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+138,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+139,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+140,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+141,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+142,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+143,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+144,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+146,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+147,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+148,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+149,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+150,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+151,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+152,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+154,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+155,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+156,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xaU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+157,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+158,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+159,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+160,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xbU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+162,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+163,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+164,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xcU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+165,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+166,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+167,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+168,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xdU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+170,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+171,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+172,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+173,(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+174,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+175,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+176,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          >> 0xfU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c3.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullSData(oldp+177,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1),16);
        tracep->fullBit(oldp+178,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+179,(((0xffff8000U & 
                                      ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+180,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1))));
        tracep->fullBit(oldp+181,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+182,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+183,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+184,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+185,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+186,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+187,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+189,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+190,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+191,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+192,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+193,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+194,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+195,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+197,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+198,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+199,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+201,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+202,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+203,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+205,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+207,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+208,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+209,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+210,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+211,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+212,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+213,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+214,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+215,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+217,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+218,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+219,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xaU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+220,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+221,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+222,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+223,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xbU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+224,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+225,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+226,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+227,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xcU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+228,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+229,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+230,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+231,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xdU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+232,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+233,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+234,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+235,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+236,(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+237,((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+238,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+239,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          >> 0xfU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c5.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullSData(oldp+240,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1),16);
        tracep->fullSData(oldp+241,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2),16);
        tracep->fullBit(oldp+242,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+243,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                                     & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+244,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1))));
        tracep->fullBit(oldp+245,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2))));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+247,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+248,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)))));
        tracep->fullBit(oldp+249,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 1U))));
        tracep->fullBit(oldp+251,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+252,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+253,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+254,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 1U))));
        tracep->fullBit(oldp+255,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+256,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+257,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 2U))));
        tracep->fullBit(oldp+258,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+260,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+261,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 2U))));
        tracep->fullBit(oldp+262,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+263,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+264,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 3U))));
        tracep->fullBit(oldp+265,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+266,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+267,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+268,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 3U))));
        tracep->fullBit(oldp+269,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+270,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+271,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 4U))));
        tracep->fullBit(oldp+272,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+273,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+274,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+275,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 4U))));
        tracep->fullBit(oldp+276,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+277,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+278,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 5U))));
        tracep->fullBit(oldp+279,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+281,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+282,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 5U))));
        tracep->fullBit(oldp+283,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+284,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+285,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 6U))));
        tracep->fullBit(oldp+286,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+287,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+288,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+289,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 6U))));
        tracep->fullBit(oldp+290,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+291,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+292,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 7U))));
        tracep->fullBit(oldp+293,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+294,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+295,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+296,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 7U))));
        tracep->fullBit(oldp+297,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+299,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 8U))));
        tracep->fullBit(oldp+300,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+301,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+302,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+303,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 8U))));
        tracep->fullBit(oldp+304,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+305,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+306,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 9U))));
        tracep->fullBit(oldp+307,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+308,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+310,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 9U))));
        tracep->fullBit(oldp+311,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+312,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+313,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+314,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+315,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+316,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+317,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+318,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+319,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+320,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+321,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+322,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+323,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+324,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+325,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+326,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+327,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+328,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+329,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+330,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+331,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+332,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+333,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+334,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+335,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+336,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+337,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+338,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+339,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+340,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+341,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+342,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+343,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+344,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+345,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+346,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+347,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+348,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+349,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+350,(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+351,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c6____pinNumber2)) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+352,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+353,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2),16);
        tracep->fullBit(oldp+354,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2))));
        tracep->fullBit(oldp+355,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+356,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+357,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 1U))));
        tracep->fullBit(oldp+358,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+359,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+360,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+361,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+362,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 2U))));
        tracep->fullBit(oldp+363,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+364,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+365,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+366,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+367,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 3U))));
        tracep->fullBit(oldp+368,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+369,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+370,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+371,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+372,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 4U))));
        tracep->fullBit(oldp+373,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+374,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+375,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+376,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+377,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 5U))));
        tracep->fullBit(oldp+378,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+379,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+380,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+381,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+382,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 6U))));
        tracep->fullBit(oldp+383,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+384,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+385,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+386,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+387,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 7U))));
        tracep->fullBit(oldp+388,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+389,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+390,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+391,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+392,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 8U))));
        tracep->fullBit(oldp+393,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+394,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+395,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+396,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+397,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 9U))));
        tracep->fullBit(oldp+398,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+399,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+400,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+401,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+402,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+403,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+404,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+405,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+406,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+407,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+408,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+409,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+410,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+411,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+412,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+413,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+414,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+415,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+416,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+417,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+418,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+419,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+420,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+421,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+422,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+423,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+424,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+426,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+427,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+428,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+429,(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+430,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+431,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+432,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+433,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+434,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+435,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+436,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+437,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+438,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+439,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+440,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+441,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+442,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+443,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+444,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+445,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+446,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+447,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+448,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+449,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+450,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+451,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+452,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+453,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+454,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+455,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+456,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+457,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+458,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+459,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+460,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+461,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+462,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+463,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+464,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+465,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+467,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+468,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+469,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+471,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+472,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+473,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+475,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+476,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+477,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+478,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+479,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+480,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+481,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+482,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+483,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+484,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+485,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+486,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+487,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+488,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+489,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+490,(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+491,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+492,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1),16);
        tracep->fullSData(oldp+493,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2),16);
        tracep->fullBit(oldp+494,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                          >> 0xfU) 
                                         | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                            & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+495,(((0x8000U & ((0xffff8000U 
                                                  & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                                     & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2))) 
                                                 | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+496,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1))));
        tracep->fullBit(oldp+497,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2))));
        tracep->fullBit(oldp+498,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+499,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+500,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)))));
        tracep->fullBit(oldp+501,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+502,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 1U))));
        tracep->fullBit(oldp+503,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+504,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+505,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+506,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 1U))));
        tracep->fullBit(oldp+507,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+508,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+509,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 2U))));
        tracep->fullBit(oldp+510,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+511,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+512,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+513,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 2U))));
        tracep->fullBit(oldp+514,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+515,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+516,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 3U))));
        tracep->fullBit(oldp+517,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+518,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+519,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+520,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 3U))));
        tracep->fullBit(oldp+521,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+522,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+523,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 4U))));
        tracep->fullBit(oldp+524,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+526,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+527,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 4U))));
        tracep->fullBit(oldp+528,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+529,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+530,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 5U))));
        tracep->fullBit(oldp+531,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+532,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+533,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+534,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 5U))));
        tracep->fullBit(oldp+535,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+536,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+537,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 6U))));
        tracep->fullBit(oldp+538,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+539,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+540,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+541,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 6U))));
        tracep->fullBit(oldp+542,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+543,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+544,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 7U))));
        tracep->fullBit(oldp+545,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+546,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+547,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+548,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 7U))));
        tracep->fullBit(oldp+549,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+550,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+551,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 8U))));
        tracep->fullBit(oldp+552,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+553,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+554,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+555,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 8U))));
        tracep->fullBit(oldp+556,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+557,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+558,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 9U))));
        tracep->fullBit(oldp+559,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+560,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+561,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+562,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 9U))));
        tracep->fullBit(oldp+563,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+564,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+565,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+566,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+567,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+568,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+569,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+570,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+571,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+572,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+573,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+575,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+576,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+577,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+578,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+579,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+580,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+581,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+582,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+583,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+584,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+585,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+586,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+587,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+588,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+589,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+590,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+591,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+592,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+593,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+594,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+595,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+596,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+597,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+598,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+599,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+600,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+601,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+602,(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+603,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber1) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c11____pinNumber2)) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+604,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+605,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+606,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+607,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+608,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+609,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+610,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+611,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+612,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+613,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+614,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+615,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+616,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+617,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+618,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+619,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+620,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+621,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+622,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+623,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+624,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+625,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+626,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+627,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+628,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+629,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+630,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+631,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+632,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+633,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+634,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+635,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+636,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+637,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+638,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+639,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+640,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+642,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+643,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+644,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+645,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+646,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+647,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+648,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+649,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+650,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+651,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+652,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+653,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+654,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+655,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+656,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+657,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+658,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+659,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+660,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+661,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+662,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+663,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+664,(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+665,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+666,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1),16);
        tracep->fullBit(oldp+667,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1))));
        tracep->fullBit(oldp+668,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+669,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+670,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+671,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+672,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+673,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+674,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+675,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+676,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+677,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+678,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+679,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+680,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+681,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+682,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+683,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+684,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+685,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+686,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+687,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+688,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+689,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+690,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+691,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+692,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+693,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+694,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+695,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+696,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+697,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+698,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+699,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+700,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+701,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+702,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+703,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+704,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+705,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+706,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+707,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+708,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+709,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+710,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+711,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+712,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+713,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+714,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+715,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+716,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+717,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+718,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+719,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+720,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+721,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+722,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+723,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+724,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+725,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+726,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+727,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+728,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+729,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+730,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+731,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+732,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+733,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+734,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+735,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+736,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+737,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+738,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+739,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+740,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+741,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+742,(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+743,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+744,(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1),16);
        tracep->fullBit(oldp+745,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1))));
        tracep->fullBit(oldp+746,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+747,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+748,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 1U))));
        tracep->fullBit(oldp+749,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+751,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+752,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+753,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 2U))));
        tracep->fullBit(oldp+754,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+755,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+756,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+757,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+758,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 3U))));
        tracep->fullBit(oldp+759,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+760,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+761,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+762,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+763,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 4U))));
        tracep->fullBit(oldp+764,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+765,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+766,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+767,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+768,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 5U))));
        tracep->fullBit(oldp+769,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+770,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+771,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+772,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+773,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 6U))));
        tracep->fullBit(oldp+774,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+775,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+776,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+777,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+778,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 7U))));
        tracep->fullBit(oldp+779,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+780,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+781,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+782,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+783,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 8U))));
        tracep->fullBit(oldp+784,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+785,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+786,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+787,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+788,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 9U))));
        tracep->fullBit(oldp+789,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+790,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+791,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+792,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+793,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+794,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+795,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+796,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+797,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+798,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+799,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+800,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+801,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+802,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+803,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+804,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+805,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+806,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+807,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+808,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+809,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+810,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+811,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+812,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+813,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+814,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+815,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+816,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+817,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+818,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+819,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+820,(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+821,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+822,((1U & (~ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__first_add__DOT__half_sum1)))));
        tracep->fullBit(oldp+823,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+824,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__first_add__DOT__half_sum1));
        tracep->fullBit(oldp+825,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+826,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+827,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+828,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__1__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+829,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+830,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+831,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+832,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__2__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+833,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+834,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+835,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+836,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__3__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+837,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+838,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+839,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+840,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__4__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+841,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+842,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+843,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+844,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__5__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+845,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+846,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+847,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+848,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__6__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+849,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+850,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+851,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+852,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__7__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+853,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+854,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+855,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+856,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__8__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+857,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+858,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+859,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+860,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__9__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+861,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+862,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+863,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+864,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__10__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+865,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+866,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+867,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+868,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__11__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+869,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+870,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+871,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+872,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__12__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+873,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+874,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+875,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+876,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__13__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+877,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+878,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+879,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+880,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__14__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+881,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+882,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1));
        tracep->fullBit(oldp+883,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                   & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+884,(((0xffff8000U & 
                                      ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                       & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+885,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum))));
        tracep->fullBit(oldp+886,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+887,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 1U))));
        tracep->fullBit(oldp+888,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+889,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+890,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+891,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 2U))));
        tracep->fullBit(oldp+892,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+893,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+894,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+895,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 3U))));
        tracep->fullBit(oldp+896,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+897,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+898,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+899,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 4U))));
        tracep->fullBit(oldp+900,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+901,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+902,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+903,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 5U))));
        tracep->fullBit(oldp+904,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+905,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+906,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+907,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 6U))));
        tracep->fullBit(oldp+908,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+909,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+910,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 7U))));
        tracep->fullBit(oldp+912,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+913,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+914,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+915,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 8U))));
        tracep->fullBit(oldp+916,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+917,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+918,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+919,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 9U))));
        tracep->fullBit(oldp+920,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+921,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+922,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+923,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+924,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xaU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+925,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+926,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+927,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+928,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xbU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+929,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+930,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+932,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xcU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+933,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+934,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+935,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+936,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xdU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+937,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+938,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+939,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+940,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+941,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+942,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+943,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                         >> 0xfU))));
        tracep->fullBit(oldp+944,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          >> 0xfU) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullSData(oldp+945,(((0x8000U & ((0xffff8000U 
                                                  & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)) 
                                                 | (((~ 
                                                      ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                                       >> 0xfU)) 
                                                     & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                    << 0xfU))) 
                                     | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+946,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum))));
        tracep->fullBit(oldp+947,((1U & (~ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
        tracep->fullBit(oldp+948,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 1U))));
        tracep->fullBit(oldp+949,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
        tracep->fullBit(oldp+950,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+951,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 1U)))));
        tracep->fullBit(oldp+952,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum)))));
        tracep->fullBit(oldp+953,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 2U))));
        tracep->fullBit(oldp+954,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+955,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+956,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 2U)))));
        tracep->fullBit(oldp+957,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+958,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 3U))));
        tracep->fullBit(oldp+959,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+960,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+961,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 3U)))));
        tracep->fullBit(oldp+962,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+963,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 4U))));
        tracep->fullBit(oldp+964,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+965,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+966,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 4U)))));
        tracep->fullBit(oldp+967,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+968,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 5U))));
        tracep->fullBit(oldp+969,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+970,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+971,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 5U)))));
        tracep->fullBit(oldp+972,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 6U))));
        tracep->fullBit(oldp+974,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+975,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+976,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 6U)))));
        tracep->fullBit(oldp+977,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+978,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 7U))));
        tracep->fullBit(oldp+979,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+980,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+981,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 7U)))));
        tracep->fullBit(oldp+982,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+983,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 8U))));
        tracep->fullBit(oldp+984,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+985,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+986,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 8U)))));
        tracep->fullBit(oldp+987,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+988,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 9U))));
        tracep->fullBit(oldp+989,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+990,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+991,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 9U)))));
        tracep->fullBit(oldp+992,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+993,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+994,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+995,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+996,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                            >> 0xaU)))));
        tracep->fullBit(oldp+997,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                       >> 0xaU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+998,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+999,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1000,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1001,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xbU)))));
        tracep->fullBit(oldp+1002,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                        >> 0xbU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1003,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1004,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1005,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1006,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xcU)))));
        tracep->fullBit(oldp+1007,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                        >> 0xcU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1008,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1009,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1010,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1011,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xdU)))));
        tracep->fullBit(oldp+1012,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                        >> 0xdU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1013,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1014,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1015,(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1016,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xeU)))));
        tracep->fullBit(oldp+1017,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                        >> 0xeU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1018,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1019,((1U & ((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1020,((1U & (~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1021,(((~ ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.sum) 
                                        >> 0xfU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1022,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum))));
        tracep->fullBit(oldp+1023,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 1U))));
        tracep->fullBit(oldp+1024,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 2U))));
        tracep->fullBit(oldp+1025,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 3U))));
        tracep->fullBit(oldp+1026,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 4U))));
        tracep->fullBit(oldp+1027,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 5U))));
        tracep->fullBit(oldp+1028,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 6U))));
        tracep->fullBit(oldp+1029,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 7U))));
        tracep->fullBit(oldp+1030,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 8U))));
        tracep->fullBit(oldp+1031,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 9U))));
        tracep->fullBit(oldp+1032,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1033,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1034,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1035,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1036,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p2__DOT__m1.sum) 
                                          >> 0xfU))));
        tracep->fullSData(oldp+1038,(((0x8000U & ((0xffff8000U 
                                                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)) 
                                                  | (((~ 
                                                       ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
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
        tracep->fullBit(oldp+1039,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1))));
        tracep->fullBit(oldp+1040,((1U & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
        tracep->fullBit(oldp+1041,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 1U))));
        tracep->fullBit(oldp+1042,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 1U)) 
                                          ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
        tracep->fullBit(oldp+1043,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1044,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 1U)))));
        tracep->fullBit(oldp+1045,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 1U)) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1)))));
        tracep->fullBit(oldp+1046,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 2U))));
        tracep->fullBit(oldp+1047,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 2U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1048,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1049,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 2U)))));
        tracep->fullBit(oldp+1050,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1051,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 3U))));
        tracep->fullBit(oldp+1052,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 3U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1053,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1054,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 3U)))));
        tracep->fullBit(oldp+1055,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1056,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 4U))));
        tracep->fullBit(oldp+1057,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 4U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1058,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1059,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 4U)))));
        tracep->fullBit(oldp+1060,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1061,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 5U))));
        tracep->fullBit(oldp+1062,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 5U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1063,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1064,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 5U)))));
        tracep->fullBit(oldp+1065,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1066,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 6U))));
        tracep->fullBit(oldp+1067,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 6U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1068,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1069,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 6U)))));
        tracep->fullBit(oldp+1070,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1071,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 7U))));
        tracep->fullBit(oldp+1072,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 7U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1073,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1074,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1075,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1076,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 8U))));
        tracep->fullBit(oldp+1077,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 8U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1078,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1079,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 8U)))));
        tracep->fullBit(oldp+1080,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1081,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 9U))));
        tracep->fullBit(oldp+1082,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 9U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1083,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1084,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 9U)))));
        tracep->fullBit(oldp+1085,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1086,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1087,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xaU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1088,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1089,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1090,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xaU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1091,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1092,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xbU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1093,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1094,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xbU)))));
        tracep->fullBit(oldp+1095,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xbU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1096,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1097,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1098,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1099,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xcU)))));
        tracep->fullBit(oldp+1100,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xcU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1101,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1102,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1103,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1104,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xdU)))));
        tracep->fullBit(oldp+1105,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xdU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1106,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1107,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1108,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1109,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xeU)))));
        tracep->fullBit(oldp+1110,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xeU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1111,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1112,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1113,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1114,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c8____pinNumber1) 
                                        >> 0xfU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+1115,(((0xffff8000U 
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
        tracep->fullBit(oldp+1116,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum))));
        tracep->fullBit(oldp+1117,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+1118,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 1U))));
        tracep->fullBit(oldp+1119,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+1120,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1121,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+1122,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 2U))));
        tracep->fullBit(oldp+1123,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1124,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1125,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1126,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 3U))));
        tracep->fullBit(oldp+1127,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1128,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1129,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1130,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 4U))));
        tracep->fullBit(oldp+1131,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1132,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1133,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 5U))));
        tracep->fullBit(oldp+1135,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1136,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1137,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 6U))));
        tracep->fullBit(oldp+1139,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1140,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1141,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1142,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 7U))));
        tracep->fullBit(oldp+1143,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1144,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1145,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1146,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 8U))));
        tracep->fullBit(oldp+1147,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1148,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1149,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 9U))));
        tracep->fullBit(oldp+1151,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1152,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1153,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1155,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xaU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1156,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1157,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1158,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1159,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xbU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1160,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1161,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1162,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1163,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xcU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1164,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1165,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1166,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1167,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xdU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1168,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1169,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1170,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1171,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xeU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1172,(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1173,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                     >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1174,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1175,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                           >> 0xfU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullSData(oldp+1176,(((0x8000U & ((0xffff8000U 
                                                   & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)) 
                                                  | (((~ 
                                                       ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
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
        tracep->fullBit(oldp+1177,((1U & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1))));
        tracep->fullBit(oldp+1178,((1U & (~ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
        tracep->fullBit(oldp+1179,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 1U))));
        tracep->fullBit(oldp+1180,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 1U)) 
                                          ^ (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
        tracep->fullBit(oldp+1181,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1182,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 1U)))));
        tracep->fullBit(oldp+1183,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 1U)) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1)))));
        tracep->fullBit(oldp+1184,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 2U))));
        tracep->fullBit(oldp+1185,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 2U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1186,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1187,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 2U)))));
        tracep->fullBit(oldp+1188,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1189,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 3U))));
        tracep->fullBit(oldp+1190,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 3U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1191,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1192,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 3U)))));
        tracep->fullBit(oldp+1193,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1194,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 4U))));
        tracep->fullBit(oldp+1195,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 4U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1196,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1197,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 4U)))));
        tracep->fullBit(oldp+1198,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1199,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 5U))));
        tracep->fullBit(oldp+1200,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 5U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1201,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1202,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 5U)))));
        tracep->fullBit(oldp+1203,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1204,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 6U))));
        tracep->fullBit(oldp+1205,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 6U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1206,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1207,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 6U)))));
        tracep->fullBit(oldp+1208,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1209,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 7U))));
        tracep->fullBit(oldp+1210,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 7U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1211,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1212,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1213,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1214,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 8U))));
        tracep->fullBit(oldp+1215,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 8U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1216,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1217,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 8U)))));
        tracep->fullBit(oldp+1218,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1219,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 9U))));
        tracep->fullBit(oldp+1220,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 9U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1221,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1222,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 9U)))));
        tracep->fullBit(oldp+1223,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1224,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1225,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xaU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1226,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1227,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1228,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xaU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1229,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1230,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xbU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1231,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1232,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xbU)))));
        tracep->fullBit(oldp+1233,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xbU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1234,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1235,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1236,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1237,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xcU)))));
        tracep->fullBit(oldp+1238,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xcU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1239,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1240,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1241,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1242,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xdU)))));
        tracep->fullBit(oldp+1243,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xdU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1244,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1245,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1246,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1247,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xeU)))));
        tracep->fullBit(oldp+1248,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xeU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1249,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1250,((1U & ((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1251,((1U & (~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1252,(((~ ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c12____pinNumber1) 
                                        >> 0xfU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+1253,(((0xffff8000U 
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
        tracep->fullBit(oldp+1254,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum))));
        tracep->fullBit(oldp+1255,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+1256,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 1U))));
        tracep->fullBit(oldp+1257,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+1258,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1259,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+1260,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 2U))));
        tracep->fullBit(oldp+1261,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1262,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1263,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1264,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 3U))));
        tracep->fullBit(oldp+1265,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1266,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1267,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1268,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 4U))));
        tracep->fullBit(oldp+1269,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1270,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1271,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1272,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 5U))));
        tracep->fullBit(oldp+1273,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1274,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1275,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1276,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 6U))));
        tracep->fullBit(oldp+1277,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1278,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1279,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1280,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 7U))));
        tracep->fullBit(oldp+1281,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1282,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1283,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1284,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 8U))));
        tracep->fullBit(oldp+1285,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1286,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1287,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 9U))));
        tracep->fullBit(oldp+1289,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1290,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1291,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1292,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1293,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xaU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1294,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1295,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1297,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xbU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1298,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1299,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1300,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1301,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xcU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1302,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1303,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1304,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1305,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xdU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1306,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1307,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1309,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xeU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1310,(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1311,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                     >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1312,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1313,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                           >> 0xfU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1314,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1315,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1316,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1317,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1318,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1319,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1320,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1321,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1322,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1323,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1324,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1325,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1326,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1327,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullSData(oldp+1328,(((0xffff8000U 
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
        tracep->fullBit(oldp+1329,((1U & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum))));
        tracep->fullBit(oldp+1330,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__));
        tracep->fullBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 1U))));
        tracep->fullBit(oldp+1332,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+1333,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1334,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+1335,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 2U))));
        tracep->fullBit(oldp+1336,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1337,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1338,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 3U))));
        tracep->fullBit(oldp+1340,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1341,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1342,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1343,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 4U))));
        tracep->fullBit(oldp+1344,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1345,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1346,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1347,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 5U))));
        tracep->fullBit(oldp+1348,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1349,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1350,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1351,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 6U))));
        tracep->fullBit(oldp+1352,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1353,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1354,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 7U))));
        tracep->fullBit(oldp+1356,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1357,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1358,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1359,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 8U))));
        tracep->fullBit(oldp+1360,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1361,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1362,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1363,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 9U))));
        tracep->fullBit(oldp+1364,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1365,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1366,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1368,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xaU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1369,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1370,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1371,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1372,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xbU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1373,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1374,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1375,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1376,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xcU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1377,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1378,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1379,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1380,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xdU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1381,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1382,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1383,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1384,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xeU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1385,(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5));
        tracep->fullBit(oldp+1386,((((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                     >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1387,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1388,((1U & (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                           >> 0xfU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1389,(vlTOPp->carry_in));
        tracep->fullSData(oldp+1390,(vlTOPp->in_a),16);
        tracep->fullSData(oldp+1391,(vlTOPp->in_b),16);
        tracep->fullCData(oldp+1392,(vlTOPp->select),4);
        tracep->fullBit(oldp+1393,(vlTOPp->mode));
        tracep->fullBit(oldp+1394,(vlTOPp->carry_out));
        tracep->fullBit(oldp+1395,(vlTOPp->compare));
        tracep->fullSData(oldp+1396,(vlTOPp->alu_out),16);
        tracep->fullSData(oldp+1397,(((8U & (IData)(vlTOPp->select))
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
        tracep->fullBit(oldp+1398,((1U & (((((IData)(vlTOPp->in_a) 
                                             >> 0xfU) 
                                            & (~ ((IData)(vlTOPp->in_b) 
                                                  >> 0xfU))) 
                                           | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                          ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                              >> 0xfU) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+1399,((1U & ((((IData)(vlTOPp->in_a) 
                                            >> 0xfU) 
                                           & (~ ((IData)(vlTOPp->in_b) 
                                                 >> 0xfU))) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+1400,((1U & ((((IData)(vlTOPp->in_a) 
                                            >> 0xfU) 
                                           | ((~ ((IData)(vlTOPp->in_a) 
                                                  >> 0xfU)) 
                                              & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))) 
                                          ^ (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                              >> 0xfU) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m2.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+1401,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          | ((~ ((IData)(vlTOPp->in_a) 
                                                 >> 0xfU)) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullBit(oldp+1402,((((IData)(vlTOPp->in_a) 
                                     >> 0xfU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullSData(oldp+1403,(((0xffff8000U 
                                       & ((IData)(vlTOPp->in_a) 
                                          & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                             << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1404,((1U & (IData)(vlTOPp->in_a))));
        tracep->fullBit(oldp+1405,((1U & ((IData)(vlTOPp->in_a) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1406,(((IData)(vlTOPp->in_a) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1407,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 1U))));
        tracep->fullBit(oldp+1408,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 1U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__)))));
        tracep->fullBit(oldp+1409,((((IData)(vlTOPp->in_a) 
                                     >> 1U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__PVT__carry__BRA__0__KET__))));
        tracep->fullBit(oldp+1410,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 2U))));
        tracep->fullBit(oldp+1411,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 2U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1412,((((IData)(vlTOPp->in_a) 
                                     >> 2U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1413,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 3U))));
        tracep->fullBit(oldp+1414,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 3U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1415,((((IData)(vlTOPp->in_a) 
                                     >> 3U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1416,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 4U))));
        tracep->fullBit(oldp+1417,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 4U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1418,((((IData)(vlTOPp->in_a) 
                                     >> 4U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1419,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 5U))));
        tracep->fullBit(oldp+1420,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 5U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1421,((((IData)(vlTOPp->in_a) 
                                     >> 5U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1422,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 6U))));
        tracep->fullBit(oldp+1423,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 6U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1424,((((IData)(vlTOPp->in_a) 
                                     >> 6U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1425,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 7U))));
        tracep->fullBit(oldp+1426,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 7U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1427,((((IData)(vlTOPp->in_a) 
                                     >> 7U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1428,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 8U))));
        tracep->fullBit(oldp+1429,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 8U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1430,((((IData)(vlTOPp->in_a) 
                                     >> 8U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1431,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 9U))));
        tracep->fullBit(oldp+1432,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 9U) ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1433,((((IData)(vlTOPp->in_a) 
                                     >> 9U) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1434,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1435,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xaU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1436,((((IData)(vlTOPp->in_a) 
                                     >> 0xaU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1437,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1438,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xbU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1439,((((IData)(vlTOPp->in_a) 
                                     >> 0xbU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1440,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1441,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xcU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1442,((((IData)(vlTOPp->in_a) 
                                     >> 0xcU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1443,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1444,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xdU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1445,((((IData)(vlTOPp->in_a) 
                                     >> 0xdU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1446,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1447,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xeU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1448,((((IData)(vlTOPp->in_a) 
                                     >> 0xeU) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1449,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1450,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1451,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1452,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c2____pinNumber1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1453,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1454,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c3____pinNumber1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullSData(oldp+1455,((0xffffU & (- (IData)((IData)(vlTOPp->carry_in))))),16);
        tracep->fullBit(oldp+1456,((1U & (~ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1457,((1U & (~ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1458,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1459,(((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c5____pinNumber1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1460,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1461,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c6.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1462,((1U & ((((IData)(vlTOPp->in_a) 
                                            & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                           >> 0xfU) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+1463,(((0x8000U & ((0xffff8000U 
                                                   & ((IData)(vlTOPp->in_a) 
                                                      & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2))) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1464,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1465,((1U & ((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)))));
        tracep->fullBit(oldp+1466,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c9.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1467,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 1U))));
        tracep->fullBit(oldp+1468,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 2U))));
        tracep->fullBit(oldp+1469,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 3U))));
        tracep->fullBit(oldp+1470,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 4U))));
        tracep->fullBit(oldp+1471,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 5U))));
        tracep->fullBit(oldp+1472,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 6U))));
        tracep->fullBit(oldp+1473,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 7U))));
        tracep->fullBit(oldp+1474,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 8U))));
        tracep->fullBit(oldp+1475,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 9U))));
        tracep->fullBit(oldp+1476,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1477,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1478,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1479,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1480,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1481,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c9____pinNumber2)) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1482,((1U & ((((IData)(vlTOPp->in_a) 
                                            & (IData)(vlTOPp->in_b)) 
                                           >> 0xfU) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+1483,(((0x8000U & ((0xffff8000U 
                                                   & ((IData)(vlTOPp->in_a) 
                                                      & (IData)(vlTOPp->in_b))) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1484,((1U & (IData)(vlTOPp->in_b))));
        tracep->fullBit(oldp+1485,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1486,((1U & ((IData)(vlTOPp->in_a) 
                                          & (IData)(vlTOPp->in_b)))));
        tracep->fullBit(oldp+1487,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c10.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1488,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 1U))));
        tracep->fullBit(oldp+1489,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 1U))));
        tracep->fullBit(oldp+1490,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 2U))));
        tracep->fullBit(oldp+1491,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 2U))));
        tracep->fullBit(oldp+1492,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 3U))));
        tracep->fullBit(oldp+1493,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 3U))));
        tracep->fullBit(oldp+1494,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 4U))));
        tracep->fullBit(oldp+1495,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 4U))));
        tracep->fullBit(oldp+1496,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 5U))));
        tracep->fullBit(oldp+1497,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 5U))));
        tracep->fullBit(oldp+1498,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 6U))));
        tracep->fullBit(oldp+1499,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 6U))));
        tracep->fullBit(oldp+1500,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 7U))));
        tracep->fullBit(oldp+1501,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 7U))));
        tracep->fullBit(oldp+1502,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 8U))));
        tracep->fullBit(oldp+1503,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 8U))));
        tracep->fullBit(oldp+1504,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 9U))));
        tracep->fullBit(oldp+1505,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 9U))));
        tracep->fullBit(oldp+1506,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1507,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1508,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1509,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1510,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1511,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1512,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1513,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1514,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1515,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1516,((1U & ((IData)(vlTOPp->in_b) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1517,((1U & (((IData)(vlTOPp->in_a) 
                                           & (IData)(vlTOPp->in_b)) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1518,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1519,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c11.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1520,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+1521,(((0x8000U & ((0xffff8000U 
                                                   & (IData)(vlTOPp->in_a)) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1522,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1523,((1U & (IData)(vlTOPp->in_a))));
        tracep->fullBit(oldp+1524,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c13.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1525,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 1U))));
        tracep->fullBit(oldp+1526,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 2U))));
        tracep->fullBit(oldp+1527,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 3U))));
        tracep->fullBit(oldp+1528,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 4U))));
        tracep->fullBit(oldp+1529,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 5U))));
        tracep->fullBit(oldp+1530,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 6U))));
        tracep->fullBit(oldp+1531,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 7U))));
        tracep->fullBit(oldp+1532,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 8U))));
        tracep->fullBit(oldp+1533,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 9U))));
        tracep->fullBit(oldp+1534,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1535,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1536,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1537,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1538,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1539,((1U & ((IData)(vlTOPp->in_a) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1540,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                            & (IData)(vlTOPp->in_a)) 
                                           >> 0xfU) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+1541,(((0x8000U & ((0xffff8000U 
                                                   & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                                      & (IData)(vlTOPp->in_a))) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1542,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1543,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)))));
        tracep->fullBit(oldp+1544,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c14.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1545,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 1U))));
        tracep->fullBit(oldp+1546,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 2U))));
        tracep->fullBit(oldp+1547,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 3U))));
        tracep->fullBit(oldp+1548,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 4U))));
        tracep->fullBit(oldp+1549,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 5U))));
        tracep->fullBit(oldp+1550,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 6U))));
        tracep->fullBit(oldp+1551,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 7U))));
        tracep->fullBit(oldp+1552,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 8U))));
        tracep->fullBit(oldp+1553,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 9U))));
        tracep->fullBit(oldp+1554,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1555,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1556,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1557,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1558,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1559,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c14____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1560,((1U & ((((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                            & (IData)(vlTOPp->in_a)) 
                                           >> 0xfU) 
                                          | ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                             & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))))));
        tracep->fullSData(oldp+1561,(((0x8000U & ((0xffff8000U 
                                                   & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                                      & (IData)(vlTOPp->in_a))) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1562,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1) 
                                    ^ (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1563,((1U & ((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                          & (IData)(vlTOPp->in_a)))));
        tracep->fullBit(oldp+1564,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c15.__PVT__first_add__DOT__half_sum1) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1565,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 1U))));
        tracep->fullBit(oldp+1566,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 2U))));
        tracep->fullBit(oldp+1567,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 3U))));
        tracep->fullBit(oldp+1568,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 4U))));
        tracep->fullBit(oldp+1569,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 5U))));
        tracep->fullBit(oldp+1570,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 6U))));
        tracep->fullBit(oldp+1571,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 7U))));
        tracep->fullBit(oldp+1572,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 8U))));
        tracep->fullBit(oldp+1573,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 9U))));
        tracep->fullBit(oldp+1574,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1575,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1576,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1577,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1578,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1579,((1U & (((IData)(vlTOPp->alu__DOT__option0__DOT____Vcellinp__c15____pinNumber1) 
                                           & (IData)(vlTOPp->in_a)) 
                                          >> 0xfU))));
        tracep->fullSData(oldp+1580,((0xffffU & (~ (IData)(vlTOPp->in_b)))),16);
        tracep->fullSData(oldp+1581,(((0x8000U & ((0xffff8000U 
                                                   & ((IData)(vlTOPp->in_a) 
                                                      & ((~ 
                                                          ((IData)(vlTOPp->in_b) 
                                                           >> 0xfU)) 
                                                         << 0xfU))) 
                                                  | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__PVT__create_16_bit_adder__BRA__15__KET____DOT__current_i__DOT__half_sum1) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1582,((1U & (~ (IData)(vlTOPp->in_b)))));
        tracep->fullBit(oldp+1583,((1U & ((IData)(vlTOPp->in_a) 
                                          & (~ (IData)(vlTOPp->in_b))))));
        tracep->fullBit(oldp+1584,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 1U)))));
        tracep->fullBit(oldp+1585,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 1U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 1U))))));
        tracep->fullBit(oldp+1586,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 2U)))));
        tracep->fullBit(oldp+1587,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 2U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 2U))))));
        tracep->fullBit(oldp+1588,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 3U)))));
        tracep->fullBit(oldp+1589,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 3U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 3U))))));
        tracep->fullBit(oldp+1590,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 4U)))));
        tracep->fullBit(oldp+1591,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 4U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 4U))))));
        tracep->fullBit(oldp+1592,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 5U)))));
        tracep->fullBit(oldp+1593,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 5U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 5U))))));
        tracep->fullBit(oldp+1594,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 6U)))));
        tracep->fullBit(oldp+1595,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 6U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 6U))))));
        tracep->fullBit(oldp+1596,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1597,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 7U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 7U))))));
        tracep->fullBit(oldp+1598,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 8U)))));
        tracep->fullBit(oldp+1599,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 8U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 8U))))));
        tracep->fullBit(oldp+1600,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 9U)))));
        tracep->fullBit(oldp+1601,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 9U) & 
                                          (~ ((IData)(vlTOPp->in_b) 
                                              >> 9U))))));
        tracep->fullBit(oldp+1602,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1603,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xaU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+1604,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xbU)))));
        tracep->fullBit(oldp+1605,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xbU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+1606,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xcU)))));
        tracep->fullBit(oldp+1607,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xcU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+1608,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xdU)))));
        tracep->fullBit(oldp+1609,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xdU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xdU))))));
        tracep->fullBit(oldp+1610,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xeU)))));
        tracep->fullBit(oldp+1611,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xeU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xeU))))));
        tracep->fullBit(oldp+1612,((1U & (~ ((IData)(vlTOPp->in_b) 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1613,((1U & (((IData)(vlTOPp->in_a) 
                                           >> 0xfU) 
                                          & (~ ((IData)(vlTOPp->in_b) 
                                                >> 0xfU))))));
        tracep->fullBit(oldp+1614,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1615,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c7p1__DOT__m1.sum) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1616,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1617,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c8__DOT__m1.sum) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullBit(oldp+1618,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1619,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c12__DOT__m1.sum) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullSData(oldp+1620,(((0x8000U & ((0xffff8000U 
                                                   & (IData)(vlTOPp->in_a)) 
                                                  | (((~ 
                                                       ((IData)(vlTOPp->in_a) 
                                                        >> 0xfU)) 
                                                      & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)) 
                                                     << 0xfU))) 
                                      | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5) 
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
        tracep->fullBit(oldp+1621,((1U & (~ (IData)(vlTOPp->in_a)))));
        tracep->fullBit(oldp+1622,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 1U)) 
                                          ^ (IData)(vlTOPp->in_a)))));
        tracep->fullBit(oldp+1623,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 1U)))));
        tracep->fullBit(oldp+1624,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 1U)) 
                                          & (IData)(vlTOPp->in_a)))));
        tracep->fullBit(oldp+1625,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 2U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1626,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 2U)))));
        tracep->fullBit(oldp+1627,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 2U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__1__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1628,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 3U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1629,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 3U)))));
        tracep->fullBit(oldp+1630,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 3U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__2__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1631,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 4U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1632,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 4U)))));
        tracep->fullBit(oldp+1633,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__3__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1634,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 5U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1635,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 5U)))));
        tracep->fullBit(oldp+1636,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 5U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__4__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1637,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 6U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1638,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 6U)))));
        tracep->fullBit(oldp+1639,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 6U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__5__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1640,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 7U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1641,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1642,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 7U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__6__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1643,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 8U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1644,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 8U)))));
        tracep->fullBit(oldp+1645,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 8U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__7__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1646,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 9U)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1647,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 9U)))));
        tracep->fullBit(oldp+1648,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 9U)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__8__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1649,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xaU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1650,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1651,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xaU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__9__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1652,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xbU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1653,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xbU)))));
        tracep->fullBit(oldp+1654,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xbU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__10__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1655,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1656,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xcU)))));
        tracep->fullBit(oldp+1657,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xcU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__11__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1658,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1659,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xdU)))));
        tracep->fullBit(oldp+1660,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xdU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__12__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1661,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1662,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xeU)))));
        tracep->fullBit(oldp+1663,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xeU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__13__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1664,((1U & ((~ ((IData)(vlTOPp->in_a) 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5)))));
        tracep->fullBit(oldp+1665,((1U & (~ ((IData)(vlTOPp->in_a) 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1666,(((~ ((IData)(vlTOPp->in_a) 
                                        >> 0xfU)) & (IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.__Vcellout__create_16_bit_adder__BRA__14__KET____DOT__current_i____pinNumber5))));
        tracep->fullBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                          ^ (IData)(vlTOPp->carry_in)))));
        tracep->fullBit(oldp+1668,(((IData)(vlSymsp->TOP__alu__DOT__option0__DOT__c16__DOT__m1.sum) 
                                    & (IData)(vlTOPp->carry_in))));
        tracep->fullSData(oldp+1669,(1U),16);
        tracep->fullBit(oldp+1670,(0U));
        tracep->fullSData(oldp+1671,(0U),16);
        tracep->fullSData(oldp+1672,(0xffffU),16);
        tracep->fullBit(oldp+1673,(1U));
        tracep->fullSData(oldp+1674,(0xfffeU),16);
    }
}
