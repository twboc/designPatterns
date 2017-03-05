#include "Adapter.h"

#include "./types.cpp"

Adapter::Adapter() { }
Adapter::Adapter(const Adapter& orig) { }
Adapter::~Adapter() { }

void Adapter::plugIn(EuropeanSocketInterface* outlet){
    socket = outlet;
}

int Adapter::voltage() { return 110; }
Cable Adapter::live() { return socket->live(); }
Cable Adapter::neutral() { return socket->neutral(); }
Shape Adapter::shape(){ return "American socket with no ground"; }