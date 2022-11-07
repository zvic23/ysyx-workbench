// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"clr", false,-1);
        tracep->declBus(c+3,"hex0", false,-1, 6,0);
        tracep->declBus(c+4,"hex1", false,-1, 6,0);
        tracep->declBus(c+5,"x", false,-1, 7,0);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top clr", false,-1);
        tracep->declBus(c+3,"top hex0", false,-1, 6,0);
        tracep->declBus(c+4,"top hex1", false,-1, 6,0);
        tracep->declBus(c+5,"top x", false,-1, 7,0);
        tracep->declBit(c+6,"top c", false,-1);
        tracep->declBus(c+7,"top s0 b", false,-1, 3,0);
        tracep->declBus(c+3,"top s0 h", false,-1, 6,0);
        tracep->declBus(c+8,"top s1 b", false,-1, 3,0);
        tracep->declBus(c+4,"top s1 h", false,-1, 6,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->clr));
        tracep->fullCData(oldp+3,(vlSelf->hex0),7);
        tracep->fullCData(oldp+4,(vlSelf->hex1),7);
        tracep->fullCData(oldp+5,(vlSelf->x),8);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__c));
        tracep->fullCData(oldp+7,((0xfU & (IData)(vlSelf->x))),4);
        tracep->fullCData(oldp+8,((0xfU & ((IData)(vlSelf->x) 
                                           >> 4U))),4);
    }
}
