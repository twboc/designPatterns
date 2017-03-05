#include "ForcePlugEuropeanSocket.h"

ForcePlugEuropeanSocket::ForcePlugEuropeanSocket() {}
ForcePlugEuropeanSocket::ForcePlugEuropeanSocket(const ForcePlugEuropeanSocket& orig) {}
ForcePlugEuropeanSocket::~ForcePlugEuropeanSocket() {}

ForcePlugEuropeanSocket* ForcePlugEuropeanSocket::forceThePlug(){
    return this;
}

int ForcePlugEuropeanSocket::voltage() { return 210; }
Cable ForcePlugEuropeanSocket::live() { return socket->live(); }
Cable ForcePlugEuropeanSocket::neutral() { return socket->neutral(); }
Shape ForcePlugEuropeanSocket::shape(){ return "Silly European socket getting used by American Toaster!!!"; }