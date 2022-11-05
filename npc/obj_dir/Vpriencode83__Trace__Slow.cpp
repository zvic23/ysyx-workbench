// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpriencode83__Syms.h"


void Vpriencode83___024root__traceInitSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vpriencode83___024root__traceInitTop(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vpriencode83___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vpriencode83___024root__traceInitSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 7,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBit(c+3,"z", false,-1);
        tracep->declBus(c+4,"y", false,-1, 2,0);
        tracep->declBus(c+1,"priencode83 x", false,-1, 7,0);
        tracep->declBit(c+2,"priencode83 en", false,-1);
        tracep->declBit(c+3,"priencode83 z", false,-1);
        tracep->declBus(c+4,"priencode83 y", false,-1, 2,0);
        tracep->declBus(c+5,"priencode83 i", false,-1, 31,0);
    }
}

void Vpriencode83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vpriencode83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vpriencode83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vpriencode83___024root__traceRegister(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vpriencode83___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vpriencode83___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vpriencode83___024root__traceCleanup, vlSelf);
    }
}

void Vpriencode83___024root__traceFullSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vpriencode83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vpriencode83___024root* const __restrict vlSelf = static_cast<Vpriencode83___024root*>(voidSelf);
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vpriencode83___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vpriencode83___024root__traceFullSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),8);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullBit(oldp+3,(vlSelf->z));
        tracep->fullCData(oldp+4,(vlSelf->y),3);
        tracep->fullIData(oldp+5,(vlSelf->priencode83__DOT__i),32);
    }
}
